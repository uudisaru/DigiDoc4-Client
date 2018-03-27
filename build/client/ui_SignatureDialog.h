/********************************************************************************
** Form generated from reading UI file 'SignatureDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNATUREDIALOG_H
#define UI_SIGNATUREDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/AccordionTitle.h"

QT_BEGIN_NAMESPACE

class Ui_SignatureDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *containerLists;
    QHBoxLayout *horizontalLayout_3;
    QWidget *leftPane;
    QGridLayout *gridLayout;
    QLineEdit *signerState;
    AccordionTitle *showErrors;
    QLineEdit *signerRoles;
    QLabel *lblRole;
    QLineEdit *signerCountry;
    QLineEdit *signerZip;
    QLabel *lblSigningZipCode;
    QLabel *lblSigningCity;
    QLabel *lblSigningCounty;
    QLabel *lblSignerHeader;
    QSpacerItem *verticalSpacer;
    QTextEdit *error;
    QLabel *lblNotice;
    QLabel *lblSigningCountry;
    QLineEdit *signerCity;
    QLabel *info;
    QWidget *rightPane;
    QVBoxLayout *verticalLayout_2;
    QLabel *lblSignatureHeader;
    QTreeWidget *signatureView;
    QWidget *navigationArea;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QLabel *title;
    QSpacerItem *horizontalSpacer;
    QPushButton *close;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *SignatureDialog)
    {
        if (SignatureDialog->objectName().isEmpty())
            SignatureDialog->setObjectName(QStringLiteral("SignatureDialog"));
        SignatureDialog->setWindowModality(Qt::WindowModal);
        SignatureDialog->resize(1014, 570);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SignatureDialog->sizePolicy().hasHeightForWidth());
        SignatureDialog->setSizePolicy(sizePolicy);
        SignatureDialog->setMinimumSize(QSize(1014, 516));
        SignatureDialog->setMaximumSize(QSize(16777215, 16777215));
        SignatureDialog->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(SignatureDialog);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        containerLists = new QWidget(SignatureDialog);
        containerLists->setObjectName(QStringLiteral("containerLists"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(containerLists->sizePolicy().hasHeightForWidth());
        containerLists->setSizePolicy(sizePolicy1);
        containerLists->setMinimumSize(QSize(880, 399));
        containerLists->setStyleSheet(QStringLiteral("background-color: #ffffff;"));
        horizontalLayout_3 = new QHBoxLayout(containerLists);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        leftPane = new QWidget(containerLists);
        leftPane->setObjectName(QStringLiteral("leftPane"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(leftPane->sizePolicy().hasHeightForWidth());
        leftPane->setSizePolicy(sizePolicy2);
        leftPane->setMinimumSize(QSize(505, 0));
        leftPane->setMaximumSize(QSize(505, 16777215));
        leftPane->setStyleSheet(QStringLiteral("border-right: 1px solid #DEE4E9;"));
        gridLayout = new QGridLayout(leftPane);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        signerState = new QLineEdit(leftPane);
        signerState->setObjectName(QStringLiteral("signerState"));
        signerState->setMinimumSize(QSize(300, 31));
        signerState->setMaximumSize(QSize(395, 31));
        signerState->setStyleSheet(QLatin1String("border: 1px solid #DEE4E9;\n"
"border-radius: 2px;\n"
"background-color: #FFFFFF;"));
        signerState->setReadOnly(true);

        gridLayout->addWidget(signerState, 14, 1, 1, 1);

        showErrors = new AccordionTitle(leftPane);
        showErrors->setObjectName(QStringLiteral("showErrors"));
        showErrors->setMinimumSize(QSize(0, 40));
        showErrors->setMaximumSize(QSize(16777215, 40));
        showErrors->setCursor(QCursor(Qt::PointingHandCursor));
        showErrors->setStyleSheet(QStringLiteral("border: none;"));

        gridLayout->addWidget(showErrors, 11, 0, 1, 2);

        signerRoles = new QLineEdit(leftPane);
        signerRoles->setObjectName(QStringLiteral("signerRoles"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(signerRoles->sizePolicy().hasHeightForWidth());
        signerRoles->setSizePolicy(sizePolicy3);
        signerRoles->setMinimumSize(QSize(481, 31));
        signerRoles->setMaximumSize(QSize(472, 31));
        signerRoles->setStyleSheet(QLatin1String("border: 1px solid #DEE4E9;\n"
"border-radius: 2px;\n"
"background-color: #FFFFFF;"));
        signerRoles->setReadOnly(true);

        gridLayout->addWidget(signerRoles, 18, 0, 1, 2);

        lblRole = new QLabel(leftPane);
        lblRole->setObjectName(QStringLiteral("lblRole"));
        lblRole->setMinimumSize(QSize(140, 16));
        lblRole->setMaximumSize(QSize(140, 16));
        QFont font;
        font.setFamily(QStringLiteral("Roboto"));
        font.setPointSize(14);
        lblRole->setFont(font);
        lblRole->setStyleSheet(QStringLiteral("border: none;"));

        gridLayout->addWidget(lblRole, 17, 0, 1, 2);

        signerCountry = new QLineEdit(leftPane);
        signerCountry->setObjectName(QStringLiteral("signerCountry"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(signerCountry->sizePolicy().hasHeightForWidth());
        signerCountry->setSizePolicy(sizePolicy4);
        signerCountry->setMinimumSize(QSize(300, 31));
        signerCountry->setMaximumSize(QSize(395, 31));
        signerCountry->setStyleSheet(QLatin1String("border: 1px solid #DEE4E9;\n"
"border-radius: 2px;\n"
"background-color: #FFFFFF;"));
        signerCountry->setReadOnly(true);

        gridLayout->addWidget(signerCountry, 15, 1, 1, 1);

        signerZip = new QLineEdit(leftPane);
        signerZip->setObjectName(QStringLiteral("signerZip"));
        sizePolicy3.setHeightForWidth(signerZip->sizePolicy().hasHeightForWidth());
        signerZip->setSizePolicy(sizePolicy3);
        signerZip->setMinimumSize(QSize(300, 31));
        signerZip->setMaximumSize(QSize(395, 31));
        signerZip->setStyleSheet(QLatin1String("border: 1px solid #DEE4E9;\n"
"border-radius: 2px;\n"
"background-color: #FFFFFF;"));
        signerZip->setReadOnly(true);

        gridLayout->addWidget(signerZip, 16, 1, 1, 1);

        lblSigningZipCode = new QLabel(leftPane);
        lblSigningZipCode->setObjectName(QStringLiteral("lblSigningZipCode"));
        lblSigningZipCode->setMinimumSize(QSize(120, 16));
        lblSigningZipCode->setMaximumSize(QSize(120, 16));
        lblSigningZipCode->setFont(font);
        lblSigningZipCode->setStyleSheet(QStringLiteral("border: none;"));

        gridLayout->addWidget(lblSigningZipCode, 16, 0, 1, 1);

        lblSigningCity = new QLabel(leftPane);
        lblSigningCity->setObjectName(QStringLiteral("lblSigningCity"));
        lblSigningCity->setMinimumSize(QSize(120, 16));
        lblSigningCity->setMaximumSize(QSize(120, 16));
        lblSigningCity->setFont(font);
        lblSigningCity->setStyleSheet(QStringLiteral("border: none;"));

        gridLayout->addWidget(lblSigningCity, 13, 0, 1, 1);

        lblSigningCounty = new QLabel(leftPane);
        lblSigningCounty->setObjectName(QStringLiteral("lblSigningCounty"));
        lblSigningCounty->setMinimumSize(QSize(120, 16));
        lblSigningCounty->setMaximumSize(QSize(120, 16));
        lblSigningCounty->setFont(font);
        lblSigningCounty->setStyleSheet(QStringLiteral("border: none;"));

        gridLayout->addWidget(lblSigningCounty, 14, 0, 1, 1);

        lblSignerHeader = new QLabel(leftPane);
        lblSignerHeader->setObjectName(QStringLiteral("lblSignerHeader"));
        lblSignerHeader->setMinimumSize(QSize(0, 25));
        lblSignerHeader->setMaximumSize(QSize(16777215, 25));
        QFont font1;
        font1.setFamily(QStringLiteral("Roboto"));
        font1.setPointSize(18);
        lblSignerHeader->setFont(font1);
        lblSignerHeader->setStyleSheet(QStringLiteral("border: none;"));
        lblSignerHeader->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblSignerHeader, 1, 0, 1, 2);

        verticalSpacer = new QSpacerItem(400, 12, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 19, 0, 2, 2);

        error = new QTextEdit(leftPane);
        error->setObjectName(QStringLiteral("error"));
        error->setStyleSheet(QLatin1String("QTextEdit {\n"
"	border: 1px solid #DEE4E9;\n"
"	border-radius: 2px;\n"
"	background-color: #FFFFFF;\n"
"}\n"
"QScrollBar {\n"
"	width: 10px;\n"
"	padding: 5px 5px 5px 0;\n"
"	margin: 2px 0px 2px 0;\n"
"	border: none;\n"
"	background: #FFFFFF;\n"
"}\n"
"QScrollBar::handle:vertical{\n"
"	background-color: #DEE4E9;\n"
"	margin: 0 0 0 0;\n"
"	border-radius: 2px;\n"
"	height: 145px;\n"
"}\n"
"QScrollBar::add-line:vertical {\n"
"      border: none;\n"
"      background: none;\n"
"}\n"
"QScrollBar::sub-line:vertical {\n"
"      border: none;\n"
"      background: none;\n"
"}"));
        error->setReadOnly(true);

        gridLayout->addWidget(error, 12, 0, 1, 2);

        lblNotice = new QLabel(leftPane);
        lblNotice->setObjectName(QStringLiteral("lblNotice"));
        lblNotice->setMinimumSize(QSize(140, 16));
        lblNotice->setMaximumSize(QSize(140, 16));
        lblNotice->setFont(font);
        lblNotice->setStyleSheet(QStringLiteral("border: none;"));

        gridLayout->addWidget(lblNotice, 3, 0, 1, 1);

        lblSigningCountry = new QLabel(leftPane);
        lblSigningCountry->setObjectName(QStringLiteral("lblSigningCountry"));
        lblSigningCountry->setMinimumSize(QSize(120, 16));
        lblSigningCountry->setMaximumSize(QSize(120, 16));
        lblSigningCountry->setFont(font);
        lblSigningCountry->setStyleSheet(QStringLiteral("border: none;"));

        gridLayout->addWidget(lblSigningCountry, 15, 0, 1, 1);

        signerCity = new QLineEdit(leftPane);
        signerCity->setObjectName(QStringLiteral("signerCity"));
        signerCity->setMinimumSize(QSize(300, 31));
        signerCity->setMaximumSize(QSize(395, 31));
        signerCity->setStyleSheet(QLatin1String("border: 1px solid #DEE4E9;\n"
"border-radius: 2px;\n"
"background-color: #FFFFFF;"));
        signerCity->setReadOnly(true);

        gridLayout->addWidget(signerCity, 13, 1, 1, 1);

        info = new QLabel(leftPane);
        info->setObjectName(QStringLiteral("info"));
        info->setStyleSheet(QStringLiteral("border: none;"));
        info->setWordWrap(true);
        info->setOpenExternalLinks(true);
        info->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(info, 9, 0, 1, 2);


        horizontalLayout_3->addWidget(leftPane);

        rightPane = new QWidget(containerLists);
        rightPane->setObjectName(QStringLiteral("rightPane"));
        sizePolicy.setHeightForWidth(rightPane->sizePolicy().hasHeightForWidth());
        rightPane->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(rightPane);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(9, -1, 9, 15);
        lblSignatureHeader = new QLabel(rightPane);
        lblSignatureHeader->setObjectName(QStringLiteral("lblSignatureHeader"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(lblSignatureHeader->sizePolicy().hasHeightForWidth());
        lblSignatureHeader->setSizePolicy(sizePolicy5);
        lblSignatureHeader->setMinimumSize(QSize(490, 25));
        lblSignatureHeader->setMaximumSize(QSize(16777215, 21));
        lblSignatureHeader->setFont(font1);
        lblSignatureHeader->setStyleSheet(QStringLiteral("border: none;"));
        lblSignatureHeader->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lblSignatureHeader);

        signatureView = new QTreeWidget(rightPane);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(1, QStringLiteral("Value"));
        __qtreewidgetitem->setText(0, QStringLiteral("Attribute"));
        signatureView->setHeaderItem(__qtreewidgetitem);
        signatureView->setObjectName(QStringLiteral("signatureView"));
        QFont font2;
        font2.setPointSize(13);
        signatureView->setFont(font2);
        signatureView->setStyleSheet(QLatin1String("#signatureView {\n"
"	border:none;\n"
"}\n"
"QHeaderView::section {\n"
"	border: 1px solid #D9D9D8;\n"
"	border-width: 0px 1px 1px 0px;\n"
"	padding: 2px 0px 3px 5px;\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                                      stop:0 #FFFFFF, stop:1 #FFFFFF);\n"
"}"));
        signatureView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        signatureView->setSelectionMode(QAbstractItemView::SingleSelection);
        signatureView->setSelectionBehavior(QAbstractItemView::SelectRows);
        signatureView->setColumnCount(2);

        verticalLayout_2->addWidget(signatureView);


        horizontalLayout_3->addWidget(rightPane);


        verticalLayout->addWidget(containerLists);

        navigationArea = new QWidget(SignatureDialog);
        navigationArea->setObjectName(QStringLiteral("navigationArea"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(1);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(navigationArea->sizePolicy().hasHeightForWidth());
        navigationArea->setSizePolicy(sizePolicy6);
        navigationArea->setMinimumSize(QSize(0, 40));
        navigationArea->setMaximumSize(QSize(16777215, 40));
        navigationArea->setStyleSheet(QLatin1String("border-top: 1px solid #DEE4E9;\n"
"background-color: #f7f7f7;"));
        horizontalLayout = new QHBoxLayout(navigationArea);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 1, 0, 3);
        horizontalSpacer_3 = new QSpacerItem(13, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        title = new QLabel(navigationArea);
        title->setObjectName(QStringLiteral("title"));
        sizePolicy5.setHeightForWidth(title->sizePolicy().hasHeightForWidth());
        title->setSizePolicy(sizePolicy5);
        title->setMinimumSize(QSize(750, 32));
        title->setMaximumSize(QSize(16777215, 32));
        title->setStyleSheet(QStringLiteral("border: none;"));
        title->setTextFormat(Qt::AutoText);

        horizontalLayout->addWidget(title);

        horizontalSpacer = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        close = new QPushButton(navigationArea);
        close->setObjectName(QStringLiteral("close"));
        sizePolicy4.setHeightForWidth(close->sizePolicy().hasHeightForWidth());
        close->setSizePolicy(sizePolicy4);
        close->setMinimumSize(QSize(120, 25));
        close->setMaximumSize(QSize(120, 20));
        close->setStyleSheet(QLatin1String("QPushButton {\n"
"	border-radius: 2px; \n"
"	border: none;\n"
"	color: #ffffff;\n"
"	background-color: #006EB5;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: #41B6E6;\n"
"}\n"
"QPushButton:hover:!pressed {\n"
"	background-color: #008DCF;\n"
"}\n"
"QPushButton:disabled {\n"
"	background-color: #BEDBED;\n"
"}"));

        horizontalLayout->addWidget(close);

        horizontalSpacer_2 = new QSpacerItem(30, 13, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(navigationArea);

        QWidget::setTabOrder(error, signerCity);
        QWidget::setTabOrder(signerCity, signerState);
        QWidget::setTabOrder(signerState, signerCountry);
        QWidget::setTabOrder(signerCountry, signerZip);
        QWidget::setTabOrder(signerZip, signerRoles);
        QWidget::setTabOrder(signerRoles, signatureView);
        QWidget::setTabOrder(signatureView, close);

        retranslateUi(SignatureDialog);

        QMetaObject::connectSlotsByName(SignatureDialog);
    } // setupUi

    void retranslateUi(QDialog *SignatureDialog)
    {
        lblRole->setText(QApplication::translate("SignatureDialog", "Role / resolution", Q_NULLPTR));
        lblSigningZipCode->setText(QApplication::translate("SignatureDialog", "Zip", Q_NULLPTR));
        lblSigningCity->setText(QApplication::translate("SignatureDialog", "City", Q_NULLPTR));
        lblSigningCounty->setText(QApplication::translate("SignatureDialog", "State", Q_NULLPTR));
        lblSignerHeader->setText(QApplication::translate("SignatureDialog", "Signer", Q_NULLPTR));
        lblNotice->setText(QApplication::translate("SignatureDialog", "Notice", Q_NULLPTR));
        lblSigningCountry->setText(QApplication::translate("SignatureDialog", "Country", Q_NULLPTR));
        lblSignatureHeader->setText(QApplication::translate("SignatureDialog", "Signature", Q_NULLPTR));
        title->setText(QApplication::translate("SignatureDialog", "TextLabel", Q_NULLPTR));
        close->setText(QApplication::translate("SignatureDialog", "CLOSE", Q_NULLPTR));
        Q_UNUSED(SignatureDialog);
    } // retranslateUi

};

namespace Ui {
    class SignatureDialog: public Ui_SignatureDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNATUREDIALOG_H
