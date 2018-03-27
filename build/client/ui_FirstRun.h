/********************************************************************************
** Form generated from reading UI file 'FirstRun.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRSTRUN_H
#define UI_FIRSTRUN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FirstRun
{
public:
    QStackedWidget *stack;
    QWidget *langPage;
    QComboBox *lang;
    QPushButton *continueBtn;
    QWidget *leaves;
    QWidget *coatOfArms;
    QLabel *title;
    QLabel *welcome;
    QLabel *intro;
    QLabel *langLabel;
    QWidget *structureFunds;
    QWidget *introPage;
    QPushButton *viewSigning;
    QPushButton *viewEncryption;
    QPushButton *viewEid;
    QLabel *labelSign;
    QLabel *labelCrypto;
    QLabel *labelEid;
    QWidget *signWidget;
    QWidget *cryptoWidget;
    QWidget *eidWidget;
    QLabel *signIntro;
    QLabel *cryptoIntro;
    QLabel *eidIntro;
    QPushButton *skip;
    QLabel *introTitle;
    QWidget *signPage;
    QLabel *signTitle;
    QLabel *signImage2;
    QLabel *signImage1;
    QLabel *signImage3;
    QPushButton *next;
    QPushButton *skip_2;
    QToolButton *gotoSigning;
    QToolButton *gotoEid;
    QToolButton *gotoEncryption;
    QLabel *signOne;
    QLabel *signTwo;
    QLabel *signThree;
    QLabel *labelSign1;
    QLabel *labelSign2;
    QLabel *textSign1;
    QLabel *textSign2;
    QLabel *labelSign3;
    QLabel *textSign3;
    QWidget *cryptoPage;
    QToolButton *gotoSigning_2;
    QToolButton *gotoEid_2;
    QToolButton *gotoEncryption_2;
    QLabel *cryptoOne;
    QLabel *cryptoTwo;
    QLabel *cryptoThree;
    QLabel *labelCrypto1;
    QLabel *labelCrypto2;
    QLabel *textCrypto1;
    QLabel *textCrypto2;
    QLabel *labelCrypto3;
    QLabel *textCrypto3;
    QPushButton *skip_3;
    QPushButton *next_2;
    QLabel *cryptoTitle;
    QLabel *cryptoImage3;
    QLabel *cryptoImage1;
    QLabel *cryptoImage2;
    QWidget *eidPage;
    QToolButton *gotoSigning_3;
    QToolButton *gotoEncryption_3;
    QToolButton *gotoEid_3;
    QLabel *labelEid1;
    QLabel *labelEid2;
    QLabel *labelEid3;
    QLabel *textEid1;
    QLabel *textEid2;
    QLabel *textEid3;
    QPushButton *enter;
    QLabel *eidTitle;
    QLabel *eidImage3;
    QLabel *eidImage1;
    QLabel *eidImage2;

    void setupUi(QDialog *FirstRun)
    {
        if (FirstRun->objectName().isEmpty())
            FirstRun->setObjectName(QStringLiteral("FirstRun"));
        FirstRun->resize(1024, 600);
        FirstRun->setStyleSheet(QStringLiteral(""));
        stack = new QStackedWidget(FirstRun);
        stack->setObjectName(QStringLiteral("stack"));
        stack->setGeometry(QRect(0, 0, 1024, 600));
        langPage = new QWidget();
        langPage->setObjectName(QStringLiteral("langPage"));
        langPage->setStyleSheet(QStringLiteral("#langPage { background: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:1, stop:0 white, stop:0.59 white, stop:1 #B9D9EB) }"));
        lang = new QComboBox(langPage);
        lang->setObjectName(QStringLiteral("lang"));
        lang->setGeometry(QRect(412, 417, 201, 35));
        lang->setMinimumSize(QSize(201, 35));
        lang->setMaximumSize(QSize(201, 35));
        lang->setStyleSheet(QLatin1String("QComboBox {\n"
"	image: none;\n"
"    border: 1px solid #DEE4E9;\n"
"    border-radius: 2px;\n"
"    background-color: #FFFFFF;\n"
"	color: #353739;\n"
"}	\n"
"\n"
"/* list */\n"
"QComboBox QAbstractItemView {\n"
"	image: none;\n"
"    border: 1px solid #DEE4E9;\n"
"    border-radius: 2px;\n"
"	padding: 3px 3px 3px 3px;\n"
"    background-color: #FFFFFF;\n"
"}\n"
"\n"
"/* rows */\n"
"QComboBox:item {\n"
"    background-color: #FFFFFF;\n"
"	color: #353739;\n"
"}\n"
"\n"
"/* selected row */\n"
"QComboBox:item:selected {\n"
"    background-color: #006EB5;\n"
"    color: #FFFFFF;\n"
"}\n"
"\n"
"/* drop-down button*/\n"
"QComboBox::drop-down {\n"
"    width: 0px;\n"
"	border: none;\n"
"}\n"
"\n"
"/* drop-down button image*/\n"
"QComboBox::down-arrow {\n"
"	border: none;\n"
"    image: none;\n"
"}"));
        lang->setMaxVisibleItems(3);
        lang->setMaxCount(3);
        continueBtn = new QPushButton(langPage);
        continueBtn->setObjectName(QStringLiteral("continueBtn"));
        continueBtn->setGeometry(QRect(412, 458, 200, 34));
        continueBtn->setMinimumSize(QSize(200, 34));
        continueBtn->setMaximumSize(QSize(200, 34));
        continueBtn->setCursor(QCursor(Qt::PointingHandCursor));
        continueBtn->setStyleSheet(QLatin1String("QPushButton {\n"
"	image: none;\n"
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
        leaves = new QWidget(langPage);
        leaves->setObjectName(QStringLiteral("leaves"));
        leaves->setGeometry(QRect(0, 0, 1024, 343));
        leaves->setStyleSheet(QStringLiteral("border: none;"));
        coatOfArms = new QWidget(langPage);
        coatOfArms->setObjectName(QStringLiteral("coatOfArms"));
        coatOfArms->setGeometry(QRect(440, 40, 144, 133));
        coatOfArms->setStyleSheet(QStringLiteral("border: none;"));
        title = new QLabel(langPage);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(470, 198, 86, 20));
        QFont font;
        font.setFamily(QStringLiteral("Roboto"));
        font.setPointSize(22);
        title->setFont(font);
        title->setAlignment(Qt::AlignCenter);
        welcome = new QLabel(langPage);
        welcome->setObjectName(QStringLiteral("welcome"));
        welcome->setGeometry(QRect(210, 276, 620, 24));
        QFont font1;
        font1.setFamily(QStringLiteral("Roboto"));
        font1.setPointSize(20);
        welcome->setFont(font1);
        welcome->setStyleSheet(QLatin1String("border: none;\n"
"text-align: center;\n"
"color: #041E42;"));
        welcome->setAlignment(Qt::AlignCenter);
        intro = new QLabel(langPage);
        intro->setObjectName(QStringLiteral("intro"));
        intro->setGeometry(QRect(262, 320, 500, 40));
        QFont font2;
        font2.setFamily(QStringLiteral("Roboto"));
        font2.setPointSize(14);
        intro->setFont(font2);
        intro->setStyleSheet(QLatin1String("color: #353739;\n"
"line-height: 16px;\n"
"text-align: center;\n"
"border: none;"));
        intro->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        intro->setWordWrap(true);
        langLabel = new QLabel(langPage);
        langLabel->setObjectName(QStringLiteral("langLabel"));
        langLabel->setGeometry(QRect(345, 394, 334, 14));
        QFont font3;
        font3.setFamily(QStringLiteral("Roboto"));
        font3.setPointSize(12);
        langLabel->setFont(font3);
        langLabel->setStyleSheet(QLatin1String("border: none;\n"
"color: #353739;\n"
"text-align: center;"));
        langLabel->setAlignment(Qt::AlignCenter);
        structureFunds = new QWidget(langPage);
        structureFunds->setObjectName(QStringLiteral("structureFunds"));
        structureFunds->setGeometry(QRect(883, 509, 111, 61));
        structureFunds->setStyleSheet(QStringLiteral("border: none;"));
        stack->addWidget(langPage);
        leaves->raise();
        lang->raise();
        continueBtn->raise();
        coatOfArms->raise();
        title->raise();
        welcome->raise();
        intro->raise();
        langLabel->raise();
        structureFunds->raise();
        introPage = new QWidget();
        introPage->setObjectName(QStringLiteral("introPage"));
        introPage->setStyleSheet(QStringLiteral("#introPage { background: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:1, stop:0 white, stop:0.59 white, stop:1 #B9D9EB) }"));
        viewSigning = new QPushButton(introPage);
        viewSigning->setObjectName(QStringLiteral("viewSigning"));
        viewSigning->setGeometry(QRect(30, 460, 298, 34));
        viewSigning->setMinimumSize(QSize(298, 34));
        viewSigning->setMaximumSize(QSize(298, 34));
        viewSigning->setCursor(QCursor(Qt::PointingHandCursor));
        viewSigning->setStyleSheet(QLatin1String("QPushButton {\n"
"	image: none;\n"
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
        viewSigning->setAutoDefault(true);
        viewEncryption = new QPushButton(introPage);
        viewEncryption->setObjectName(QStringLiteral("viewEncryption"));
        viewEncryption->setGeometry(QRect(363, 460, 298, 34));
        viewEncryption->setMinimumSize(QSize(298, 34));
        viewEncryption->setMaximumSize(QSize(298, 34));
        viewEncryption->setCursor(QCursor(Qt::PointingHandCursor));
        viewEncryption->setStyleSheet(QLatin1String("QPushButton {\n"
"	image: none;\n"
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
        viewEid = new QPushButton(introPage);
        viewEid->setObjectName(QStringLiteral("viewEid"));
        viewEid->setGeometry(QRect(696, 460, 298, 34));
        viewEid->setMinimumSize(QSize(298, 34));
        viewEid->setMaximumSize(QSize(298, 34));
        viewEid->setCursor(QCursor(Qt::PointingHandCursor));
        viewEid->setStyleSheet(QLatin1String("QPushButton {\n"
"	image: none;\n"
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
        labelSign = new QLabel(introPage);
        labelSign->setObjectName(QStringLiteral("labelSign"));
        labelSign->setGeometry(QRect(30, 299, 298, 21));
        QFont font4;
        font4.setFamily(QStringLiteral("Roboto"));
        font4.setPointSize(18);
        labelSign->setFont(font4);
        labelSign->setStyleSheet(QLatin1String("border: none;\n"
"color: #041E42;"));
        labelSign->setAlignment(Qt::AlignCenter);
        labelCrypto = new QLabel(introPage);
        labelCrypto->setObjectName(QStringLiteral("labelCrypto"));
        labelCrypto->setGeometry(QRect(363, 299, 298, 21));
        labelCrypto->setFont(font4);
        labelCrypto->setStyleSheet(QLatin1String("border: none;\n"
"color: #041E42;"));
        labelCrypto->setAlignment(Qt::AlignCenter);
        labelEid = new QLabel(introPage);
        labelEid->setObjectName(QStringLiteral("labelEid"));
        labelEid->setGeometry(QRect(696, 299, 298, 21));
        labelEid->setFont(font4);
        labelEid->setStyleSheet(QLatin1String("border: none;\n"
"color: #041E42;"));
        labelEid->setAlignment(Qt::AlignCenter);
        signWidget = new QWidget(introPage);
        signWidget->setObjectName(QStringLiteral("signWidget"));
        signWidget->setGeometry(QRect(104, 155, 150, 110));
        signWidget->setStyleSheet(QStringLiteral("border: none;"));
        cryptoWidget = new QWidget(introPage);
        cryptoWidget->setObjectName(QStringLiteral("cryptoWidget"));
        cryptoWidget->setGeometry(QRect(459, 157, 106, 117));
        cryptoWidget->setStyleSheet(QStringLiteral("border:none;"));
        eidWidget = new QWidget(introPage);
        eidWidget->setObjectName(QStringLiteral("eidWidget"));
        eidWidget->setGeometry(QRect(776, 167, 138, 97));
        eidWidget->setStyleSheet(QStringLiteral("border: none;"));
        signIntro = new QLabel(introPage);
        signIntro->setObjectName(QStringLiteral("signIntro"));
        signIntro->setGeometry(QRect(30, 340, 298, 120));
        signIntro->setFont(font2);
        signIntro->setStyleSheet(QLatin1String("border: none;\n"
"color: #353739;\n"
"line-height: 16px;"));
        signIntro->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        signIntro->setWordWrap(true);
        cryptoIntro = new QLabel(introPage);
        cryptoIntro->setObjectName(QStringLiteral("cryptoIntro"));
        cryptoIntro->setGeometry(QRect(363, 340, 298, 120));
        cryptoIntro->setFont(font2);
        cryptoIntro->setStyleSheet(QLatin1String("border: none;\n"
"color: #353739;\n"
"line-height: 16px;"));
        cryptoIntro->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        cryptoIntro->setWordWrap(true);
        eidIntro = new QLabel(introPage);
        eidIntro->setObjectName(QStringLiteral("eidIntro"));
        eidIntro->setGeometry(QRect(696, 340, 298, 120));
        eidIntro->setFont(font2);
        eidIntro->setStyleSheet(QLatin1String("border: none;\n"
"color: #353739;\n"
"line-height: 16px;"));
        eidIntro->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        eidIntro->setWordWrap(true);
        skip = new QPushButton(introPage);
        skip->setObjectName(QStringLiteral("skip"));
        skip->setGeometry(QRect(436, 525, 151, 25));
        skip->setMinimumSize(QSize(151, 25));
        skip->setMaximumSize(QSize(151, 25));
        skip->setCursor(QCursor(Qt::PointingHandCursor));
        skip->setStyleSheet(QLatin1String("QPushButton {\n"
"	image: none;\n"
"	border-radius: 2px; \n"
"	border: none;\n"
"	color: #006EB5;\n"
"}\n"
"QPushButton:pressed {\n"
"	color: #FFFFFF;\n"
"	background-color: #006EB5;\n"
"}\n"
"QPushButton:hover:!pressed {\n"
"	border: 1px solid #006EB5;\n"
"	color: #006EB5;\n"
"}\n"
"QPushButton:disabled {\n"
"	color: #75787B;\n"
"	background-color: #BEDBED;\n"
"}"));
        skip->setAutoDefault(true);
        introTitle = new QLabel(introPage);
        introTitle->setObjectName(QStringLiteral("introTitle"));
        introTitle->setGeometry(QRect(270, 50, 500, 24));
        introTitle->setFont(font1);
        introTitle->setStyleSheet(QLatin1String("border: none;\n"
"text-align: center;\n"
"color: #041E42;"));
        introTitle->setAlignment(Qt::AlignCenter);
        stack->addWidget(introPage);
        viewSigning->raise();
        viewEncryption->raise();
        viewEid->raise();
        labelSign->raise();
        labelCrypto->raise();
        labelEid->raise();
        signIntro->raise();
        cryptoIntro->raise();
        eidIntro->raise();
        skip->raise();
        signWidget->raise();
        cryptoWidget->raise();
        eidWidget->raise();
        introTitle->raise();
        signPage = new QWidget();
        signPage->setObjectName(QStringLiteral("signPage"));
        signPage->setStyleSheet(QStringLiteral("#signPage { background: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:1, stop:0 white, stop:0.59 white, stop:1 #B9D9EB) }"));
        signTitle = new QLabel(signPage);
        signTitle->setObjectName(QStringLiteral("signTitle"));
        signTitle->setGeometry(QRect(260, 50, 500, 24));
        signTitle->setFont(font1);
        signTitle->setStyleSheet(QLatin1String("border: none;\n"
"text-align: center;\n"
"color: #041E42;"));
        signTitle->setAlignment(Qt::AlignCenter);
        signImage2 = new QLabel(signPage);
        signImage2->setObjectName(QStringLiteral("signImage2"));
        signImage2->setGeometry(QRect(363, 104, 298, 216));
        signImage2->setStyleSheet(QLatin1String("border: 1px solid #DEE4E9;\n"
"border-radius: 3px;"));
        signImage1 = new QLabel(signPage);
        signImage1->setObjectName(QStringLiteral("signImage1"));
        signImage1->setGeometry(QRect(30, 104, 298, 216));
        signImage1->setStyleSheet(QLatin1String("border: 1px solid #DEE4E9;\n"
"border-radius: 3px;"));
        signImage3 = new QLabel(signPage);
        signImage3->setObjectName(QStringLiteral("signImage3"));
        signImage3->setGeometry(QRect(696, 104, 298, 216));
        signImage3->setStyleSheet(QLatin1String("border: 1px solid #DEE4E9;\n"
"border-radius: 3px;"));
        next = new QPushButton(signPage);
        next->setObjectName(QStringLiteral("next"));
        next->setGeometry(QRect(363, 500, 298, 34));
        next->setMinimumSize(QSize(298, 34));
        next->setMaximumSize(QSize(298, 34));
        next->setCursor(QCursor(Qt::PointingHandCursor));
        next->setStyleSheet(QLatin1String("QPushButton {\n"
"	image: none;\n"
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
        skip_2 = new QPushButton(signPage);
        skip_2->setObjectName(QStringLiteral("skip_2"));
        skip_2->setGeometry(QRect(436, 540, 151, 25));
        skip_2->setMinimumSize(QSize(151, 25));
        skip_2->setMaximumSize(QSize(151, 25));
        skip_2->setCursor(QCursor(Qt::PointingHandCursor));
        skip_2->setStyleSheet(QLatin1String("QPushButton {\n"
"	image: none;\n"
"	border-radius: 2px; \n"
"	border: none;\n"
"	color: #006EB5;\n"
"}\n"
"QPushButton:pressed {\n"
"	color: #FFFFFF;\n"
"	background-color: #006EB5;\n"
"}\n"
"QPushButton:hover:!pressed {\n"
"	border: 1px solid #006EB5;\n"
"	color: #006EB5;\n"
"}\n"
"QPushButton:disabled {\n"
"	color: #75787B;\n"
"	background-color: #BEDBED;\n"
"}"));
        skip_2->setAutoDefault(true);
        gotoSigning = new QToolButton(signPage);
        gotoSigning->setObjectName(QStringLiteral("gotoSigning"));
        gotoSigning->setGeometry(QRect(490, 573, 15, 15));
        gotoSigning->setMinimumSize(QSize(15, 15));
        gotoSigning->setMaximumSize(QSize(15, 15));
        gotoSigning->setCursor(QCursor(Qt::PointingHandCursor));
        gotoSigning->setStyleSheet(QLatin1String("border: none;\n"
"image: url(:/images/icon_dot_active.png);"));
        gotoEid = new QToolButton(signPage);
        gotoEid->setObjectName(QStringLiteral("gotoEid"));
        gotoEid->setGeometry(QRect(520, 573, 15, 15));
        gotoEid->setMinimumSize(QSize(15, 15));
        gotoEid->setMaximumSize(QSize(15, 15));
        gotoEid->setCursor(QCursor(Qt::PointingHandCursor));
        gotoEid->setStyleSheet(QLatin1String("border: none;\n"
"image: url(:/images/icon_dot.png);"));
        gotoEncryption = new QToolButton(signPage);
        gotoEncryption->setObjectName(QStringLiteral("gotoEncryption"));
        gotoEncryption->setGeometry(QRect(505, 573, 15, 15));
        gotoEncryption->setMinimumSize(QSize(15, 15));
        gotoEncryption->setMaximumSize(QSize(15, 15));
        gotoEncryption->setCursor(QCursor(Qt::PointingHandCursor));
        gotoEncryption->setStyleSheet(QLatin1String("border: none;\n"
"image: url(:/images/icon_dot.png);"));
        signOne = new QLabel(signPage);
        signOne->setObjectName(QStringLiteral("signOne"));
        signOne->setGeometry(QRect(29, 339, 32, 32));
        signOne->setStyleSheet(QStringLiteral("border: none;"));
        signTwo = new QLabel(signPage);
        signTwo->setObjectName(QStringLiteral("signTwo"));
        signTwo->setGeometry(QRect(362, 339, 32, 32));
        signTwo->setStyleSheet(QStringLiteral("border: none;"));
        signThree = new QLabel(signPage);
        signThree->setObjectName(QStringLiteral("signThree"));
        signThree->setGeometry(QRect(695, 339, 32, 32));
        signThree->setStyleSheet(QStringLiteral("border: none;"));
        labelSign1 = new QLabel(signPage);
        labelSign1->setObjectName(QStringLiteral("labelSign1"));
        labelSign1->setGeometry(QRect(70, 345, 258, 21));
        labelSign1->setFont(font4);
        labelSign1->setStyleSheet(QLatin1String("border: none;\n"
"color: #041E42;"));
        labelSign2 = new QLabel(signPage);
        labelSign2->setObjectName(QStringLiteral("labelSign2"));
        labelSign2->setGeometry(QRect(403, 345, 258, 21));
        labelSign2->setFont(font4);
        labelSign2->setStyleSheet(QLatin1String("border: none;\n"
"color: #041E42;"));
        textSign1 = new QLabel(signPage);
        textSign1->setObjectName(QStringLiteral("textSign1"));
        textSign1->setGeometry(QRect(30, 386, 298, 150));
        textSign1->setFont(font2);
        textSign1->setStyleSheet(QLatin1String("border: none;\n"
"color: #353739;\n"
"line-height: 16px;"));
        textSign1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        textSign1->setWordWrap(true);
        textSign2 = new QLabel(signPage);
        textSign2->setObjectName(QStringLiteral("textSign2"));
        textSign2->setGeometry(QRect(363, 386, 298, 110));
        textSign2->setFont(font2);
        textSign2->setStyleSheet(QLatin1String("border: none;\n"
"color: #353739;\n"
"line-height: 16px;"));
        textSign2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        textSign2->setWordWrap(true);
        labelSign3 = new QLabel(signPage);
        labelSign3->setObjectName(QStringLiteral("labelSign3"));
        labelSign3->setGeometry(QRect(736, 345, 258, 21));
        labelSign3->setFont(font4);
        labelSign3->setStyleSheet(QLatin1String("border: none;\n"
"color: #041E42;"));
        textSign3 = new QLabel(signPage);
        textSign3->setObjectName(QStringLiteral("textSign3"));
        textSign3->setGeometry(QRect(696, 386, 298, 150));
        textSign3->setFont(font2);
        textSign3->setStyleSheet(QLatin1String("border: none;\n"
"color: #353739;\n"
"line-height: 16px;"));
        textSign3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        textSign3->setWordWrap(true);
        stack->addWidget(signPage);
        cryptoPage = new QWidget();
        cryptoPage->setObjectName(QStringLiteral("cryptoPage"));
        cryptoPage->setStyleSheet(QStringLiteral("#cryptoPage { background: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:1, stop:0 white, stop:0.59 white, stop:1 #B9D9EB) }"));
        gotoSigning_2 = new QToolButton(cryptoPage);
        gotoSigning_2->setObjectName(QStringLiteral("gotoSigning_2"));
        gotoSigning_2->setGeometry(QRect(490, 573, 15, 15));
        gotoSigning_2->setMinimumSize(QSize(15, 15));
        gotoSigning_2->setMaximumSize(QSize(15, 15));
        gotoSigning_2->setCursor(QCursor(Qt::PointingHandCursor));
        gotoSigning_2->setStyleSheet(QLatin1String("border: none;\n"
"image: url(:/images/icon_dot.png);"));
        gotoEid_2 = new QToolButton(cryptoPage);
        gotoEid_2->setObjectName(QStringLiteral("gotoEid_2"));
        gotoEid_2->setGeometry(QRect(520, 573, 15, 15));
        gotoEid_2->setMinimumSize(QSize(15, 15));
        gotoEid_2->setMaximumSize(QSize(15, 15));
        gotoEid_2->setCursor(QCursor(Qt::PointingHandCursor));
        gotoEid_2->setStyleSheet(QLatin1String("border: none;\n"
"image: url(:/images/icon_dot.png);"));
        gotoEncryption_2 = new QToolButton(cryptoPage);
        gotoEncryption_2->setObjectName(QStringLiteral("gotoEncryption_2"));
        gotoEncryption_2->setGeometry(QRect(505, 573, 15, 15));
        gotoEncryption_2->setMinimumSize(QSize(15, 15));
        gotoEncryption_2->setMaximumSize(QSize(15, 15));
        gotoEncryption_2->setCursor(QCursor(Qt::PointingHandCursor));
        gotoEncryption_2->setStyleSheet(QLatin1String("border: none;\n"
"image: url(:/images/icon_dot_active.png);"));
        cryptoOne = new QLabel(cryptoPage);
        cryptoOne->setObjectName(QStringLiteral("cryptoOne"));
        cryptoOne->setGeometry(QRect(29, 339, 32, 32));
        cryptoOne->setStyleSheet(QStringLiteral("border: none;"));
        cryptoTwo = new QLabel(cryptoPage);
        cryptoTwo->setObjectName(QStringLiteral("cryptoTwo"));
        cryptoTwo->setGeometry(QRect(362, 339, 32, 32));
        cryptoTwo->setStyleSheet(QStringLiteral("border: none;"));
        cryptoThree = new QLabel(cryptoPage);
        cryptoThree->setObjectName(QStringLiteral("cryptoThree"));
        cryptoThree->setGeometry(QRect(695, 339, 32, 32));
        cryptoThree->setStyleSheet(QStringLiteral("border: none;"));
        labelCrypto1 = new QLabel(cryptoPage);
        labelCrypto1->setObjectName(QStringLiteral("labelCrypto1"));
        labelCrypto1->setGeometry(QRect(70, 345, 258, 21));
        labelCrypto1->setFont(font4);
        labelCrypto1->setStyleSheet(QLatin1String("border: none;\n"
"color: #041E42;"));
        labelCrypto2 = new QLabel(cryptoPage);
        labelCrypto2->setObjectName(QStringLiteral("labelCrypto2"));
        labelCrypto2->setGeometry(QRect(403, 345, 258, 21));
        labelCrypto2->setFont(font4);
        labelCrypto2->setStyleSheet(QLatin1String("border: none;\n"
"color: #041E42;"));
        textCrypto1 = new QLabel(cryptoPage);
        textCrypto1->setObjectName(QStringLiteral("textCrypto1"));
        textCrypto1->setGeometry(QRect(30, 386, 298, 160));
        textCrypto1->setFont(font2);
        textCrypto1->setStyleSheet(QLatin1String("border: none;\n"
"color: #353739;\n"
"line-height: 16px;"));
        textCrypto1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        textCrypto1->setWordWrap(true);
        textCrypto2 = new QLabel(cryptoPage);
        textCrypto2->setObjectName(QStringLiteral("textCrypto2"));
        textCrypto2->setGeometry(QRect(363, 386, 298, 110));
        textCrypto2->setFont(font2);
        textCrypto2->setStyleSheet(QLatin1String("border: none;\n"
"color: #353739;\n"
"line-height: 16px;"));
        textCrypto2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        textCrypto2->setWordWrap(true);
        labelCrypto3 = new QLabel(cryptoPage);
        labelCrypto3->setObjectName(QStringLiteral("labelCrypto3"));
        labelCrypto3->setGeometry(QRect(736, 345, 258, 21));
        labelCrypto3->setFont(font4);
        labelCrypto3->setStyleSheet(QLatin1String("border: none;\n"
"color: #041E42;"));
        textCrypto3 = new QLabel(cryptoPage);
        textCrypto3->setObjectName(QStringLiteral("textCrypto3"));
        textCrypto3->setGeometry(QRect(696, 386, 298, 140));
        textCrypto3->setFont(font2);
        textCrypto3->setStyleSheet(QLatin1String("border: none;\n"
"color: #353739;\n"
"line-height: 16px;"));
        textCrypto3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        textCrypto3->setWordWrap(true);
        skip_3 = new QPushButton(cryptoPage);
        skip_3->setObjectName(QStringLiteral("skip_3"));
        skip_3->setGeometry(QRect(436, 540, 151, 25));
        skip_3->setMinimumSize(QSize(151, 25));
        skip_3->setMaximumSize(QSize(151, 25));
        skip_3->setCursor(QCursor(Qt::PointingHandCursor));
        skip_3->setStyleSheet(QLatin1String("QPushButton {\n"
"	image: none;\n"
"	border-radius: 2px; \n"
"	border: none;\n"
"	color: #006EB5;\n"
"}\n"
"QPushButton:pressed {\n"
"	color: #FFFFFF;\n"
"	background-color: #006EB5;\n"
"}\n"
"QPushButton:hover:!pressed {\n"
"	border: 1px solid #006EB5;\n"
"	color: #006EB5;\n"
"}\n"
"QPushButton:disabled {\n"
"	color: #75787B;\n"
"	background-color: #BEDBED;\n"
"}"));
        skip_3->setAutoDefault(true);
        next_2 = new QPushButton(cryptoPage);
        next_2->setObjectName(QStringLiteral("next_2"));
        next_2->setGeometry(QRect(363, 500, 298, 34));
        next_2->setMinimumSize(QSize(298, 34));
        next_2->setMaximumSize(QSize(298, 34));
        next_2->setCursor(QCursor(Qt::PointingHandCursor));
        next_2->setStyleSheet(QLatin1String("QPushButton {\n"
"	image: none;\n"
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
        cryptoTitle = new QLabel(cryptoPage);
        cryptoTitle->setObjectName(QStringLiteral("cryptoTitle"));
        cryptoTitle->setGeometry(QRect(270, 50, 500, 24));
        cryptoTitle->setFont(font1);
        cryptoTitle->setStyleSheet(QLatin1String("border: none;\n"
"text-align: center;\n"
"color: #041E42;"));
        cryptoTitle->setAlignment(Qt::AlignCenter);
        cryptoImage3 = new QLabel(cryptoPage);
        cryptoImage3->setObjectName(QStringLiteral("cryptoImage3"));
        cryptoImage3->setGeometry(QRect(696, 104, 298, 216));
        cryptoImage3->setStyleSheet(QLatin1String("border: 1px solid #DEE4E9;\n"
"border-radius: 3px;"));
        cryptoImage1 = new QLabel(cryptoPage);
        cryptoImage1->setObjectName(QStringLiteral("cryptoImage1"));
        cryptoImage1->setGeometry(QRect(30, 104, 298, 216));
        cryptoImage1->setStyleSheet(QLatin1String("border: 1px solid #DEE4E9;\n"
"border-radius: 3px;"));
        cryptoImage2 = new QLabel(cryptoPage);
        cryptoImage2->setObjectName(QStringLiteral("cryptoImage2"));
        cryptoImage2->setGeometry(QRect(363, 104, 298, 216));
        cryptoImage2->setStyleSheet(QLatin1String("border: 1px solid #DEE4E9;\n"
"border-radius: 3px;"));
        stack->addWidget(cryptoPage);
        eidPage = new QWidget();
        eidPage->setObjectName(QStringLiteral("eidPage"));
        eidPage->setStyleSheet(QStringLiteral("#eidPage { background: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:1, stop:0 white, stop:0.59 white, stop:1 #B9D9EB) }"));
        gotoSigning_3 = new QToolButton(eidPage);
        gotoSigning_3->setObjectName(QStringLiteral("gotoSigning_3"));
        gotoSigning_3->setGeometry(QRect(490, 570, 15, 15));
        gotoSigning_3->setMinimumSize(QSize(15, 15));
        gotoSigning_3->setMaximumSize(QSize(15, 15));
        gotoSigning_3->setCursor(QCursor(Qt::PointingHandCursor));
        gotoSigning_3->setStyleSheet(QLatin1String("border: none;\n"
"image: url(:/images/icon_dot.png);"));
        gotoEncryption_3 = new QToolButton(eidPage);
        gotoEncryption_3->setObjectName(QStringLiteral("gotoEncryption_3"));
        gotoEncryption_3->setGeometry(QRect(505, 570, 15, 15));
        gotoEncryption_3->setMinimumSize(QSize(15, 15));
        gotoEncryption_3->setMaximumSize(QSize(15, 15));
        gotoEncryption_3->setCursor(QCursor(Qt::PointingHandCursor));
        gotoEncryption_3->setStyleSheet(QLatin1String("border: none;\n"
"image: url(:/images/icon_dot.png);"));
        gotoEid_3 = new QToolButton(eidPage);
        gotoEid_3->setObjectName(QStringLiteral("gotoEid_3"));
        gotoEid_3->setGeometry(QRect(520, 570, 15, 15));
        gotoEid_3->setMinimumSize(QSize(15, 15));
        gotoEid_3->setMaximumSize(QSize(15, 15));
        gotoEid_3->setCursor(QCursor(Qt::PointingHandCursor));
        gotoEid_3->setStyleSheet(QLatin1String("border: none;\n"
"image: url(:/images/icon_dot_active.png);"));
        labelEid1 = new QLabel(eidPage);
        labelEid1->setObjectName(QStringLiteral("labelEid1"));
        labelEid1->setGeometry(QRect(30, 345, 300, 21));
        labelEid1->setFont(font4);
        labelEid1->setStyleSheet(QLatin1String("border: none;\n"
"color: #041E42;"));
        labelEid2 = new QLabel(eidPage);
        labelEid2->setObjectName(QStringLiteral("labelEid2"));
        labelEid2->setGeometry(QRect(363, 345, 300, 21));
        labelEid2->setFont(font4);
        labelEid2->setStyleSheet(QLatin1String("border: none;\n"
"color: #041E42;"));
        labelEid3 = new QLabel(eidPage);
        labelEid3->setObjectName(QStringLiteral("labelEid3"));
        labelEid3->setGeometry(QRect(696, 345, 280, 21));
        labelEid3->setFont(font4);
        labelEid3->setStyleSheet(QLatin1String("border: none;\n"
"color: #041E42;"));
        textEid1 = new QLabel(eidPage);
        textEid1->setObjectName(QStringLiteral("textEid1"));
        textEid1->setGeometry(QRect(30, 386, 298, 150));
        textEid1->setFont(font2);
        textEid1->setStyleSheet(QLatin1String("border: none;\n"
"color: #353739;\n"
"line-height: 16px;"));
        textEid1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        textEid1->setWordWrap(true);
        textEid2 = new QLabel(eidPage);
        textEid2->setObjectName(QStringLiteral("textEid2"));
        textEid2->setGeometry(QRect(363, 386, 298, 110));
        textEid2->setFont(font2);
        textEid2->setStyleSheet(QLatin1String("border: none;\n"
"color: #353739;\n"
"line-height: 16px;"));
        textEid2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        textEid2->setWordWrap(true);
        textEid3 = new QLabel(eidPage);
        textEid3->setObjectName(QStringLiteral("textEid3"));
        textEid3->setGeometry(QRect(696, 386, 298, 140));
        textEid3->setFont(font2);
        textEid3->setStyleSheet(QLatin1String("border: none;\n"
"color: #353739;\n"
"line-height: 16px;"));
        textEid3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        textEid3->setWordWrap(true);
        enter = new QPushButton(eidPage);
        enter->setObjectName(QStringLiteral("enter"));
        enter->setGeometry(QRect(363, 500, 298, 34));
        enter->setMinimumSize(QSize(298, 34));
        enter->setMaximumSize(QSize(298, 34));
        enter->setCursor(QCursor(Qt::PointingHandCursor));
        enter->setStyleSheet(QLatin1String("QPushButton {\n"
"	image: none;\n"
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
        eidTitle = new QLabel(eidPage);
        eidTitle->setObjectName(QStringLiteral("eidTitle"));
        eidTitle->setGeometry(QRect(220, 50, 600, 24));
        eidTitle->setFont(font1);
        eidTitle->setStyleSheet(QLatin1String("border: none;\n"
"text-align: center;\n"
"color: #041E42;"));
        eidTitle->setAlignment(Qt::AlignCenter);
        eidImage3 = new QLabel(eidPage);
        eidImage3->setObjectName(QStringLiteral("eidImage3"));
        eidImage3->setGeometry(QRect(696, 104, 298, 216));
        eidImage3->setStyleSheet(QLatin1String("border: 1px solid #DEE4E9;\n"
"border-radius: 3px;"));
        eidImage1 = new QLabel(eidPage);
        eidImage1->setObjectName(QStringLiteral("eidImage1"));
        eidImage1->setGeometry(QRect(30, 104, 298, 216));
        eidImage1->setStyleSheet(QLatin1String("border: 1px solid #DEE4E9;\n"
"border-radius: 3px;"));
        eidImage2 = new QLabel(eidPage);
        eidImage2->setObjectName(QStringLiteral("eidImage2"));
        eidImage2->setGeometry(QRect(363, 104, 298, 216));
        eidImage2->setStyleSheet(QLatin1String("border: 1px solid #DEE4E9;\n"
"border-radius: 3px;"));
        stack->addWidget(eidPage);

        retranslateUi(FirstRun);

        stack->setCurrentIndex(0);
        skip->setDefault(false);
        skip_2->setDefault(false);
        skip_3->setDefault(false);


        QMetaObject::connectSlotsByName(FirstRun);
    } // setupUi

    void retranslateUi(QDialog *FirstRun)
    {
        FirstRun->setWindowTitle(QApplication::translate("FirstRun", "Dialog", Q_NULLPTR));
        continueBtn->setText(QApplication::translate("FirstRun", "CONTINUE", Q_NULLPTR));
        title->setText(QApplication::translate("FirstRun", "DIGIDOC", Q_NULLPTR));
        welcome->setText(QApplication::translate("FirstRun", "Welcome to the Estonian eID application DigiDoc!", Q_NULLPTR));
        intro->setText(QApplication::translate("FirstRun", "DigiDoc is created for managing Estonian eIDs and is the official digital signing and encryption application", Q_NULLPTR));
        langLabel->setText(QApplication::translate("FirstRun", "Vali suhtluskeel / \320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\217\320\267\321\213\320\272 / Select language:", Q_NULLPTR));
        viewSigning->setText(QApplication::translate("FirstRun", "VIEW INTRODUCTION", Q_NULLPTR));
        viewEncryption->setText(QApplication::translate("FirstRun", "VIEW INTRODUCTION", Q_NULLPTR));
        viewEid->setText(QApplication::translate("FirstRun", "VIEW INTRODUCTION", Q_NULLPTR));
        labelSign->setText(QApplication::translate("FirstRun", "Sign documents", Q_NULLPTR));
        labelCrypto->setText(QApplication::translate("FirstRun", "Encrypt documents", Q_NULLPTR));
        labelEid->setText(QApplication::translate("FirstRun", "Manage your eID-s", Q_NULLPTR));
        signIntro->setText(QApplication::translate("FirstRun", "DigiDoc Client can be used to sign digitally with ID-card and Mobile-ID, check the validity of digital signatures and open and save documents inside the signature container.", Q_NULLPTR));
        cryptoIntro->setText(QApplication::translate("FirstRun", "DigiDoc Client can also be used to encrypt data and decrypt the previously encrypted data. For encryption the program uses the authentication certificate of the ID-card.", Q_NULLPTR));
        eidIntro->setText(QApplication::translate("FirstRun", "Manage your ID-card\342\200\231s PIN/PUK codes and handle certificate renewals. View and manage your other electronic identities.", Q_NULLPTR));
        skip->setText(QApplication::translate("FirstRun", "Skip introductions", Q_NULLPTR));
        introTitle->setText(QApplication::translate("FirstRun", "The DigiDoc application allows you to:", Q_NULLPTR));
        signTitle->setText(QApplication::translate("FirstRun", "How to sign document digitally?", Q_NULLPTR));
        next->setText(QApplication::translate("FirstRun", "VIEW NEXT INTRO", Q_NULLPTR));
        skip_2->setText(QApplication::translate("FirstRun", "Skip introductions", Q_NULLPTR));
        gotoSigning->setText(QString());
        gotoEid->setText(QString());
        gotoEncryption->setText(QString());
        labelSign1->setText(QApplication::translate("FirstRun", "Select file", Q_NULLPTR));
        labelSign2->setText(QApplication::translate("FirstRun", "Choose the signing method", Q_NULLPTR));
        textSign1->setText(QApplication::translate("FirstRun", "To sign the file, drag it from your computer to the DigiDoc application or click the \"... or load a file from disk\" button. You can drag or select multiple files at a time.", Q_NULLPTR));
        textSign2->setText(QApplication::translate("FirstRun", "Once the files have been selected, check them and choose whether you want to sign with ID-card or Mobile-ID. You can also save the container without signing.", Q_NULLPTR));
        labelSign3->setText(QApplication::translate("FirstRun", "Enter PIN2", Q_NULLPTR));
        textSign3->setText(QApplication::translate("FirstRun", "By entering the PIN2 code, you will have signed the document with digital signature that by law is equal to the signature signed by hand. You will find the PIN2 code in the envelope that came with your ID-card or Mobile-ID.", Q_NULLPTR));
        gotoSigning_2->setText(QString());
        gotoEid_2->setText(QString());
        gotoEncryption_2->setText(QString());
        labelCrypto1->setText(QApplication::translate("FirstRun", "Select file", Q_NULLPTR));
        labelCrypto2->setText(QApplication::translate("FirstRun", "Add recipients", Q_NULLPTR));
        textCrypto1->setText(QApplication::translate("FirstRun", "A recipient must be selected in order to encrypt data. Drag the file to be encrypted from your computer to the DigiDoc application or select a file from the disk. You can drag or select multiple files at a time.", Q_NULLPTR));
        textCrypto2->setText(QApplication::translate("FirstRun", "Select people who can open the container. You have already been added to the address list by default so that you can also open your encrypted container.", Q_NULLPTR));
        labelCrypto3->setText(QApplication::translate("FirstRun", "Encrypt", Q_NULLPTR));
        textCrypto3->setText(QApplication::translate("FirstRun", "Click the \"Encrypt\" button and the file is now encrypted. You now have the option to open the location of the container or forward the file by e-mail.", Q_NULLPTR));
        skip_3->setText(QApplication::translate("FirstRun", "Skip introductions", Q_NULLPTR));
        next_2->setText(QApplication::translate("FirstRun", "VIEW NEXT INTRO", Q_NULLPTR));
        cryptoTitle->setText(QApplication::translate("FirstRun", "How to encrypt documents?", Q_NULLPTR));
        gotoSigning_3->setText(QString());
        gotoEncryption_3->setText(QString());
        gotoEid_3->setText(QString());
        labelEid1->setText(QApplication::translate("FirstRun", "Manage PIN and PUK codes", Q_NULLPTR));
        labelEid2->setText(QApplication::translate("FirstRun", "Manage Mobile-ID or Digi-ID", Q_NULLPTR));
        labelEid3->setText(QApplication::translate("FirstRun", "Check personal data", Q_NULLPTR));
        textEid1->setText(QApplication::translate("FirstRun", "Under \"My eID\", you will find the option to modify your PIN1, PIN2 and PUK, and the details of the certificates. Here you can also unlock the PUK code of your blocked PIN.", Q_NULLPTR));
        textEid2->setText(QApplication::translate("FirstRun", "To view information about Mobile-ID and Digi-ID, you must first enter the PIN1 code. The page shows details about the validity of these certificates.", Q_NULLPTR));
        textEid3->setText(QApplication::translate("FirstRun", "\"My eID\" also provides a good overview of your contact information and offers the opportunity to forward your email to @eesti.ee address.", Q_NULLPTR));
        enter->setText(QApplication::translate("FirstRun", "ENTER THE APPLICATION", Q_NULLPTR));
        eidTitle->setText(QApplication::translate("FirstRun", "How to manage your electronic identities?", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FirstRun: public Ui_FirstRun {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRSTRUN_H
