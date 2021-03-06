/*
 * QDigiDoc4
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#include "VerifyCert.h"
#include "ui_VerifyCert.h"
#include "Styles.h"

#include <common/PinDialog.h>
#include <common/DateTime.h>
#include <common/SslCertificate.h>

#include <QtCore/QTextStream>
#include <QSvgWidget>

VerifyCert::VerifyCert(QWidget *parent) :
	StyledWidget(parent),
	ui(new Ui::VerifyCert),
	isValidCert(false),
	isBlockedPin(false),
	isTempelType(false),
	pinType(QSmartCardData::Pin1Type)
{
	ui->setupUi( this );

	connect( ui->changePIN, &QPushButton::clicked, this, &VerifyCert::processClickedBtn );
	connect( ui->forgotPinLink, &QLabel::linkActivated, this, &VerifyCert::processForgotPinLink );
	connect( ui->details, &QLabel::linkActivated, this, &VerifyCert::processCertDetails );

	greenIcon = new QSvgWidget( ":/images/icon_check.svg", ui->nameRight);
	greenIcon->resize(12, 13);
	greenIcon->move(5, 5);
	greenIcon->hide();
	greenIcon->setStyleSheet("border: none;");

	orangeIcon = new QSvgWidget(":/images/icon_alert_orange.svg", ui->nameRight);
	orangeIcon->resize(13, 13);
	orangeIcon->move(5, 5);
	orangeIcon->hide();
	orangeIcon->setStyleSheet("border: none;");

	redIcon = new QSvgWidget(":/images/icon_alert_red.svg", ui->nameRight);
	redIcon->resize(13, 13);
	redIcon->move(5, 5);
	redIcon->hide();
	redIcon->setStyleSheet("border: none;");

	ui->name->setFont( Styles::font( Styles::Regular, 18, QFont::Bold  ) );
	ui->validUntil->setFont( Styles::font( Styles::Regular, 14 ) );
	ui->error->setFont( Styles::font( Styles::Regular, 12, QFont::DemiBold ) );
	QFont regular12 = Styles::font( Styles::Regular, 12 );
	ui->forgotPinLink->setFont( regular12 );
	ui->details->setFont( regular12 );
	ui->changePIN->setFont( Styles::font( Styles::Condensed, 14 ) );
	ui->tempelText->setFont( Styles::font( Styles::Regular, 14 ) );
	ui->tempelText->hide();
	borders = " border: solid #DFE5E9; border-width: 1px 0px 0px 0px; ";
}

VerifyCert::~VerifyCert()
{
	delete ui;
}

void VerifyCert::addBorders()
{
	// Add top, right and left border shadows
	borders = " border: solid #DFE5E9; border-width: 1px 1px 0px 1px; ";
}

void VerifyCert::clear()
{
	c = SslCertificate();
	isBlockedPin = false;
	cardData = QSmartCardData();
	
	update();
}

void VerifyCert::update( QSmartCardData::PinType type, const QSmartCard *pSmartCard )
{
	this->pinType = type;
	this->cardData = pSmartCard->data();
	c = (pinType == QSmartCardData::Pin1Type) ? cardData.authCert() : cardData.signCert();
	isBlockedPin = (cardData.retryCount( pinType ) == 0) ? true : false;
	
	update();
}

void VerifyCert::update(QSmartCardData::PinType type, const SslCertificate &cert)
{
	pinType = type;
	c = cert;
	isBlockedPin = false;
	
	update();
}

void VerifyCert::update(bool showWarning)
{
	bool isBlockedPuk = !cardData.isNull() && (cardData.retryCount( QSmartCardData::PukType ) == 0);

	QString name;
	QString changeBtn;
	QString forgotPinText;
	QString detailsText;
	QString error;
	QString txt;
	QTextStream cert( &txt );


	this->isTempelType = c.type() & SslCertificate::TempelType;
	this->isValidCert = c.isNull() || c.isValid();
	ui->changePIN->show();

	if( !isValidCert )
	{
		cert << tr("Certificate has expired!");
	}
	else
	{
		cert << tr("Certificate%1is valid%2 until %3")
				.arg(" <span style='color: #37a447'>")
				.arg("</span> ")
				.arg(DateTime(c.expiryDate().toLocalTime()).formatDate("dd. MMMM yyyy"));
		if(!isTempelType)
			cert << "<br />" << tr("key has been used %1 times", pinType == QSmartCardData::Pin1Type ? "pin1" : "pin2").arg(cardData.usageCount(pinType));

		int leftDays = std::max<int>( 0, QDateTime::currentDateTime().daysTo( c.expiryDate().toLocalTime() ) );
		if(leftDays <= 105 && !c.isNull() && !isBlockedPin)
			cert << "<br /><span style='color: red'>" << tr("Certificate expires in %1 days").arg( leftDays ) << "</span>";
	}
	switch( pinType )
	{
	case QSmartCardData::Pin1Type:
		name = tr("Authentication certificate");
		changeBtn = isBlockedPin ? tr("UNBLOCK") : tr("CHANGE PIN1");
		if(isTempelType || (!cardData.isNull() && cardData.isSecurePinpad()) || !isValidCert)
			forgotPinText = "";
		else
			forgotPinText = tr("%1Forgot PIN%2?%3")
							.arg("<a href='#pin1-forgotten'><span style='color:#75787B;'>")
							.arg("1")
							.arg("</span></a>");
		detailsText = tr("%1Check the details of the certificate%2").arg("<a href='#pin1-cert'><span style='color:#75787B;'>").arg("</span></a>");
		error = ( !isValidCert ) ? tr("PIN%1 can not be used because the certificate has expired. Update certificate to reuse PIN%1.").arg("1") :
				( isBlockedPin ) ? tr("PIN%1 has been blocked because PIN%1 code has been entered incorrectly 3 times. Unblock to reuse PIN%1.").arg("1") :
				"";
		break;
	case QSmartCardData::Pin2Type:
		name = tr("Signing certificate");
		changeBtn = isBlockedPin ? tr("UNBLOCK") : tr("CHANGE PIN2");
		if(isTempelType || (!cardData.isNull() && cardData.isSecurePinpad()) || !isValidCert)
			forgotPinText = "";
		else
			forgotPinText = tr("%1Forgot PIN%2?%3")
							.arg("<a href='#pin1-forgotten'><span style='color:#75787B;'>")
							.arg("2")
							.arg("</span></a>");
		detailsText = tr("%1Check the details of the certificate%2").arg("<a href='#pin1-cert'><span style='color:#75787B;'>").arg("</span></a>");
		error = ( !isValidCert ) ? tr("PIN%1 can not be used because the certificate has expired. Update certificate to reuse PIN%1.").arg("2") :
				( isBlockedPin ) ? tr("PIN%1 has been blocked because PIN%1 code has been entered incorrectly 3 times. Unblock to reuse PIN%1.").arg("2") :
				"";
		break;
	case QSmartCardData::PukType:
		name = tr("PUK code");
		txt = tr("The PUK code is located in your envelope");
		changeBtn = tr("CHANGE PUK");
		error = ( isBlockedPin ) ?
			tr("PUK code is blocked because the PUK code has been entered 3 times incorrectly. Unable to disable the PUK code itself. As long as the PUK code is blocked, all eID options can be used, except PUK code. You can only use the new PUK code with the new code envelope that you can use from PPA.")
			: "";
		ui->changePIN->setDisabled(cardData.version() == QSmartCardData::VER_USABLEUPDATER);
		break;
	default:
		break;
	}



	if( !isValidCert && pinType != QSmartCardData::PukType )
	{
		this->setStyleSheet( "opacity: 0.25; background-color: #F9EBEB;"  + borders );
		ui->verticalSpacerAboveBtn->changeSize( 20, 8 );
		ui->verticalSpacerBelowBtn->changeSize( 20, 6 );
		ui->changePIN->setStyleSheet(
					"QPushButton { border-radius: 2px; border: none; color: #ffffff; background-color: #006EB5;}"
					"QPushButton:pressed { background-color: #41B6E6;}"
					"QPushButton:hover:!pressed { background-color: #008DCF;}" 
					"QPushButton:disabled { background-color: #BEDBED;};" 
					); 
		ui->error->setStyleSheet(
					"padding: 6px 6px 6px 6px;"
					"line-height: 14px;"
					"border: 1px solid #c53e3e;"
					"border-radius: 2px;"
					"background-color: #e09797;"
					"color: #5c1c1c;"
					);
		ui->name->setText(name);
		greenIcon->hide();
		orangeIcon->hide();
		redIcon->show();
	}
	else if( isBlockedPin )
	{
		this->setStyleSheet( "opacity: 0.25; background-color: #fcf5ea;"  + borders );
		ui->verticalSpacerAboveBtn->changeSize( 20, 8 );
		ui->verticalSpacerBelowBtn->changeSize( 20, 6 );
		ui->changePIN->setStyleSheet(
					"QPushButton { border-radius: 2px; border: none; color: #ffffff; background-color: #006EB5;}" 
					"QPushButton:pressed { background-color: #41B6E6;}" 
					"QPushButton:hover:!pressed { background-color: #008DCF;}" 
					"QPushButton:disabled { background-color: #BEDBED;};" 
					); 
		ui->error->setStyleSheet(
					"padding: 6px 6px 6px 6px;"
					"line-height: 14px;"
					"border: 1px solid #e89c30;"
					"border-radius: 2px;"
					"background-color: #F8DDA7;"
					);
		ui->name->setText(name);
		greenIcon->hide();
		redIcon->hide();
		orangeIcon->show();
	}
	else
	{
		this->setStyleSheet( "background-color: #ffffff;" + borders );
		// Check height: if warning shown, decrease height by 30px (15*2)
		int decrease = height() < 210 ? 15 : 0;
		ui->verticalSpacerAboveBtn->changeSize(20, 29 - decrease);
		ui->verticalSpacerBelowBtn->changeSize(20, 34 - decrease);
		changePinStyle( "#FFFFFF" );
		ui->name->setText(name);
		redIcon->hide();
		if(showWarning && pinType != QSmartCardData::PukType)
			orangeIcon->show();
		else
			orangeIcon->hide();
		if(!showWarning && pinType != QSmartCardData::PukType)
			greenIcon->show();
		else
			greenIcon->hide();
	}
	ui->name->setTextFormat( Qt::RichText );

	ui->forgotPinLink->setText( forgotPinText );
	ui->forgotPinLink->setVisible( !forgotPinText.isEmpty() );

	ui->details->setText( detailsText );
	ui->details->setVisible( !detailsText.isEmpty() );
	
	if( isBlockedPuk )
	{
		if( pinType != QSmartCardData::PukType )
		{
			ui->forgotPinLink->setVisible( false ); // hide 'Forgot PIN. code?' label
			if( isBlockedPin )
				ui->changePIN->setVisible( false );  // hide 'Tühista BLOKEERING' button
		}
		else
		{
			ui->widget->setMinimumHeight ( 0 );
			ui->verticalSpacerBelowBtn->changeSize( 20, 0 );
			ui->validUntil->setVisible( false );
			ui->changePIN->hide();  // hide 'change PUK' button
		}
	}
	ui->changePIN->setVisible( isValidCert );  // If not valid cert then hide 'CHANGE PIN/PUK' button
	ui->validUntil->setText( txt );
	if( pinType != QSmartCardData::PukType )
		ui->error->setVisible( isBlockedPin || !isValidCert );
	else
		ui->error->setVisible( isBlockedPin );
	ui->error->setText( error );
	if(isTempelType)
	{
		ui->changePIN->hide();
		ui->tempelText->show();
	}
	else
	{
		ui->changePIN->setText(changeBtn);
		ui->tempelText->hide();
	}
}

void VerifyCert::enterEvent( QEvent * event )
{
	if( !isValidCert && pinType != QSmartCardData::PukType )
		this->setStyleSheet( "background-color: #f3d8d8;" + borders );
	else if( isBlockedPin )
		this->setStyleSheet( "background-color: #fbecd0;" + borders );
	else
	{
		this->setStyleSheet( "background-color: #f7f7f7;" + borders );
		changePinStyle( "#f7f7f7" );  
	}  
}

void VerifyCert::leaveEvent( QEvent * event )
{
	if( !isValidCert && pinType != QSmartCardData::PukType )
		this->setStyleSheet( "background-color: #F9EBEB;" + borders );
	else if( isBlockedPin )
		this->setStyleSheet( "background-color: #fcf5ea;" + borders );
	else
	{
		this->setStyleSheet( "background-color: white;" + borders );
		changePinStyle( "white" );  
	}  
}

void VerifyCert::changeEvent(QEvent* event)
{
	if (event->type() == QEvent::LanguageChange)
	{
		ui->retranslateUi(this);
		update(orangeIcon->isVisible());
	}

	QWidget::changeEvent(event);
}


void VerifyCert::changePinStyle( const QString &background )  
{  
 	ui->changePIN->setStyleSheet(  
 		QString("QPushButton { border-radius: 2px; border: 1px solid #006EB5; color: #006EB5; background-color: %1;}"  
 		"QPushButton:pressed { border: none; background-color: #006EB5; color: %1;}"  
 		"QPushButton:hover:!pressed { border-radius: 2px; border: 1px solid #008DCF; color: #008DCF;}"  
 		"QPushButton:disabled { border: 1px solid #BEDBED; color: #BEDBED;};").arg( background )  
 		);  
}

void VerifyCert::processClickedBtn()
{
	if(!c.isNull())
		emit changePinClicked( false, isBlockedPin );
}

void VerifyCert::processForgotPinLink( QString link )
{
	if(!c.isNull())
		emit changePinClicked( true, false );	// Change PIN with PUK code
}

void VerifyCert::processCertDetails( QString link )
{
	if(!c.isNull())
		emit certDetailsClicked( (pinType == QSmartCardData::Pin1Type) ? "PIN1" : "PIN2" );
}

void VerifyCert::showWarningIcon()
{
	if(redIcon->isVisible())
		return;

	greenIcon->hide();
	orangeIcon->show();
	redIcon->hide();
}
