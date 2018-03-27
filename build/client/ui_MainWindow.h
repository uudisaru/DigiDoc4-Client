/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/Accordion.h"
#include "widgets/CardWidget.h"
#include "widgets/ContainerPage.h"
#include "widgets/InfoStack.h"
#include "widgets/NoCardInfo.h"
#include "widgets/PageIcon.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *topBar;
    QHBoxLayout *horizontalLayout_2;
    QWidget *logo;
    QWidget *logoRightShadow;
    QWidget *fixed_idSelector;
    QWidget *idSelector;
    QHBoxLayout *horizontalLayout_3;
    CardWidget *cardInfo;
    QWidget *selector;
    NoCardInfo *noCardInfo;
    QHBoxLayout *tbRightExpandingHLayout;
    QSpacerItem *tbExpandingSpacer;
    QWidget *tbButtonWidget;
    QToolButton *help;
    QToolButton *settings;
    QSpacerItem *tbRightSpacer;
    QHBoxLayout *horizontalLayout;
    QFrame *leftBar;
    PageIcon *signature;
    PageIcon *crypto;
    PageIcon *myEid;
    QWidget *rightShadow;
    QWidget *myEidShadow;
    QWidget *cryptoShadow;
    QWidget *signatureShadow;
    QLabel *version;
    QWidget *page;
    QVBoxLayout *verticalLayout_1;
    QWidget *topBarShadow;
    QStackedWidget *startScreen;
    QWidget *signPage;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_6;
    QWidget *signIntroCentral;
    QGridLayout *gridLayout_2;
    QLabel *signIntroLabel;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *signIntroButton;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer;
    ContainerPage *signContainerPage;
    QWidget *cryptoPage;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_9;
    QWidget *cryptoIntroCentral;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *cryptoIntroButton;
    QSpacerItem *horizontalSpacer_8;
    QLabel *cryptoIntroLabel;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_4;
    ContainerPage *cryptoContainerPage;
    QWidget *eidPage;
    QVBoxLayout *verticalLayout_2;
    InfoStack *infoStack;
    Accordion *accordion;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1025, 600);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1024, 600));
        verticalLayout = new QVBoxLayout(MainWindow);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        topBar = new QFrame(MainWindow);
        topBar->setObjectName(QStringLiteral("topBar"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(topBar->sizePolicy().hasHeightForWidth());
        topBar->setSizePolicy(sizePolicy1);
        topBar->setMinimumSize(QSize(1024, 65));
        topBar->setMaximumSize(QSize(16777215, 65));
        topBar->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"background-color: #ffffff;\n"
"}\n"
"QPushButton:hover, QPushButton:focus\n"
"{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #F1C157, stop:0.28 #FADF91, stop:1 #EBA927);\n"
"color: #00355F;\n"
"}\n"
"\n"
"QPushButton:disabled\n"
"{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #A3AFC0, stop: 0.75 #80909D); }\n"
"\n"
"#settings, #help\n"
"{\n"
"background-color: transparent;\n"
"color: #000000;\n"
"font-size: 13px;\n"
"font-weight: 400;\n"
"width: 49px;\n"
"height: 14px;\n"
"min-width: 0px;\n"
"}"));
        topBar->setFrameShape(QFrame::NoFrame);
        topBar->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(topBar);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        logo = new QWidget(topBar);
        logo->setObjectName(QStringLiteral("logo"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(logo->sizePolicy().hasHeightForWidth());
        logo->setSizePolicy(sizePolicy2);
        logo->setMinimumSize(QSize(110, 65));
        logo->setCursor(QCursor(Qt::PointingHandCursor));
        logo->setStyleSheet(QLatin1String("background-color: #023565;\n"
"border: solid rgba(255, 255, 255, 0.1); border-width: 0px 0px 1px 0px"));
        logoRightShadow = new QWidget(logo);
        logoRightShadow->setObjectName(QStringLiteral("logoRightShadow"));
        logoRightShadow->setGeometry(QRect(105, 0, 5, 65));
        logoRightShadow->setStyleSheet(QLatin1String("background: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 rgba(0,0,0,0.0), stop: 1 rgba(0,0,0,0.65));\n"
""));

        horizontalLayout_2->addWidget(logo);

        fixed_idSelector = new QWidget(topBar);
        fixed_idSelector->setObjectName(QStringLiteral("fixed_idSelector"));
        sizePolicy2.setHeightForWidth(fixed_idSelector->sizePolicy().hasHeightForWidth());
        fixed_idSelector->setSizePolicy(sizePolicy2);
        fixed_idSelector->setMinimumSize(QSize(790, 65));
        fixed_idSelector->setStyleSheet(QLatin1String("background-color: #FFFFFF;\n"
""));
        idSelector = new QWidget(fixed_idSelector);
        idSelector->setObjectName(QStringLiteral("idSelector"));
        idSelector->setGeometry(QRect(0, 0, 790, 65));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(idSelector->sizePolicy().hasHeightForWidth());
        idSelector->setSizePolicy(sizePolicy3);
        idSelector->setMinimumSize(QSize(790, 65));
        idSelector->setMaximumSize(QSize(16777215, 65));
        horizontalLayout_3 = new QHBoxLayout(idSelector);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        cardInfo = new CardWidget(idSelector);
        cardInfo->setObjectName(QStringLiteral("cardInfo"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(cardInfo->sizePolicy().hasHeightForWidth());
        cardInfo->setSizePolicy(sizePolicy4);
        cardInfo->setMinimumSize(QSize(355, 0));
        cardInfo->setStyleSheet(QLatin1String("CardWidget#cardInfo:hover {\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 rgba(0, 118, 190, 0.15), stop: 1 rgba(255,255,255, 0.5));\n"
"}"));

        horizontalLayout_3->addWidget(cardInfo);

        selector = new QWidget(idSelector);
        selector->setObjectName(QStringLiteral("selector"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(selector->sizePolicy().hasHeightForWidth());
        selector->setSizePolicy(sizePolicy5);
        selector->setMinimumSize(QSize(20, 65));
        selector->setMaximumSize(QSize(16777215, 65));

        horizontalLayout_3->addWidget(selector);

        noCardInfo = new NoCardInfo(fixed_idSelector);
        noCardInfo->setObjectName(QStringLiteral("noCardInfo"));
        noCardInfo->setGeometry(QRect(0, 0, 561, 65));

        horizontalLayout_2->addWidget(fixed_idSelector);

        tbRightExpandingHLayout = new QHBoxLayout();
        tbRightExpandingHLayout->setSpacing(0);
        tbRightExpandingHLayout->setObjectName(QStringLiteral("tbRightExpandingHLayout"));
        tbExpandingSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        tbRightExpandingHLayout->addItem(tbExpandingSpacer);

        tbButtonWidget = new QWidget(topBar);
        tbButtonWidget->setObjectName(QStringLiteral("tbButtonWidget"));
        sizePolicy2.setHeightForWidth(tbButtonWidget->sizePolicy().hasHeightForWidth());
        tbButtonWidget->setSizePolicy(sizePolicy2);
        tbButtonWidget->setMinimumSize(QSize(112, 50));
        help = new QToolButton(tbButtonWidget);
        help->setObjectName(QStringLiteral("help"));
        help->setGeometry(QRect(0, 4, 54, 41));
        help->setMinimumSize(QSize(49, 41));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        help->setFont(font);
        help->setCursor(QCursor(Qt::PointingHandCursor));
        help->setStyleSheet(QLatin1String("QToolButton {\n"
"  border: none;\n"
"  color: #75787B;\n"
"  font-size: 11px;\n"
"}\n"
"QToolButton:hover {\n"
"  color: #006EB5;\n"
"}"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/icon_Abi.svg"), QSize(), QIcon::Normal, QIcon::On);
        icon.addFile(QStringLiteral(":/images/icon_Abi_hover.svg"), QSize(), QIcon::Selected, QIcon::On);
        help->setIcon(icon);
        help->setIconSize(QSize(20, 20));
        help->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        settings = new QToolButton(tbButtonWidget);
        settings->setObjectName(QStringLiteral("settings"));
        settings->setGeometry(QRect(54, 4, 58, 41));
        settings->setMinimumSize(QSize(49, 41));
        settings->setFont(font);
        settings->setCursor(QCursor(Qt::PointingHandCursor));
        settings->setStyleSheet(QLatin1String("QToolButton {\n"
"  border: none;\n"
"  color: #75787B;\n"
"  font-size: 11px;\n"
"}\n"
"QToolButton:hover {\n"
"  color: #006EB5;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/icon_Seaded.svg"), QSize(), QIcon::Normal, QIcon::On);
        settings->setIcon(icon1);
        settings->setIconSize(QSize(20, 20));
        settings->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        tbRightExpandingHLayout->addWidget(tbButtonWidget);

        tbRightSpacer = new QSpacerItem(7, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        tbRightExpandingHLayout->addItem(tbRightSpacer);


        horizontalLayout_2->addLayout(tbRightExpandingHLayout);


        verticalLayout->addWidget(topBar);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        leftBar = new QFrame(MainWindow);
        leftBar->setObjectName(QStringLiteral("leftBar"));
        leftBar->setMinimumSize(QSize(110, 520));
        leftBar->setMaximumSize(QSize(97, 16777215));
        leftBar->setStyleSheet(QLatin1String("border: none;\n"
"background-color: #023664;\n"
""));
        leftBar->setFrameShape(QFrame::StyledPanel);
        leftBar->setFrameShadow(QFrame::Raised);
        signature = new PageIcon(leftBar);
        signature->setObjectName(QStringLiteral("signature"));
        signature->setGeometry(QRect(0, 0, 110, 110));
        sizePolicy2.setHeightForWidth(signature->sizePolicy().hasHeightForWidth());
        signature->setSizePolicy(sizePolicy2);
        signature->setMinimumSize(QSize(110, 110));
        signature->setCursor(QCursor(Qt::PointingHandCursor));
        signature->setAutoFillBackground(false);
        signature->setStyleSheet(QStringLiteral("border: none;"));
        crypto = new PageIcon(leftBar);
        crypto->setObjectName(QStringLiteral("crypto"));
        crypto->setGeometry(QRect(0, 110, 110, 110));
        sizePolicy2.setHeightForWidth(crypto->sizePolicy().hasHeightForWidth());
        crypto->setSizePolicy(sizePolicy2);
        crypto->setMinimumSize(QSize(110, 110));
        crypto->setCursor(QCursor(Qt::PointingHandCursor));
        crypto->setAutoFillBackground(false);
        crypto->setStyleSheet(QStringLiteral("border: none;"));
        myEid = new PageIcon(leftBar);
        myEid->setObjectName(QStringLiteral("myEid"));
        myEid->setGeometry(QRect(0, 220, 110, 110));
        sizePolicy2.setHeightForWidth(myEid->sizePolicy().hasHeightForWidth());
        myEid->setSizePolicy(sizePolicy2);
        myEid->setMinimumSize(QSize(110, 110));
        myEid->setCursor(QCursor(Qt::PointingHandCursor));
        myEid->setAutoFillBackground(false);
        myEid->setStyleSheet(QLatin1String("border: none;\n"
""));
        rightShadow = new QWidget(leftBar);
        rightShadow->setObjectName(QStringLiteral("rightShadow"));
        rightShadow->setGeometry(QRect(105, 0, 5, 4000));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(rightShadow->sizePolicy().hasHeightForWidth());
        rightShadow->setSizePolicy(sizePolicy6);
        rightShadow->setMinimumSize(QSize(0, 4000));
        rightShadow->setStyleSheet(QLatin1String("background: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 rgba(0,0,0,0.0), stop: 1 rgba(0,0,0,0.65));\n"
""));
        myEidShadow = new QWidget(leftBar);
        myEidShadow->setObjectName(QStringLiteral("myEidShadow"));
        myEidShadow->setEnabled(true);
        myEidShadow->setGeometry(QRect(0, 330, 110, 5));
        myEidShadow->setStyleSheet(QStringLiteral("background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgba(0,0,0,0.65), stop: 1 rgba(0,0,0,0.0));"));
        cryptoShadow = new QWidget(leftBar);
        cryptoShadow->setObjectName(QStringLiteral("cryptoShadow"));
        cryptoShadow->setEnabled(true);
        cryptoShadow->setGeometry(QRect(0, 220, 110, 5));
        cryptoShadow->setStyleSheet(QStringLiteral("background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgba(0,0,0,0.65), stop: 1 rgba(0,0,0,0.0));"));
        signatureShadow = new QWidget(leftBar);
        signatureShadow->setObjectName(QStringLiteral("signatureShadow"));
        signatureShadow->setEnabled(true);
        signatureShadow->setGeometry(QRect(0, 110, 110, 5));
        signatureShadow->setStyleSheet(QStringLiteral("background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgba(0,0,0,0.65), stop: 1 rgba(0,0,0,0.0));"));
        version = new QLabel(leftBar);
        version->setObjectName(QStringLiteral("version"));
        version->setGeometry(QRect(5, 506, 100, 16));
        QFont font1;
        font1.setFamily(QStringLiteral("Roboto"));
        font1.setPointSize(12);
        version->setFont(font1);
        version->setContextMenuPolicy(Qt::NoContextMenu);
        version->setStyleSheet(QStringLiteral("color: #006EB5;"));
        version->setAlignment(Qt::AlignCenter);
        version->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse);

        horizontalLayout->addWidget(leftBar);

        page = new QWidget(MainWindow);
        page->setObjectName(QStringLiteral("page"));
        page->setMinimumSize(QSize(0, 65));
        page->setStyleSheet(QLatin1String("background-color: #023565;\n"
"border: none;"));
        verticalLayout_1 = new QVBoxLayout(page);
        verticalLayout_1->setSpacing(0);
        verticalLayout_1->setObjectName(QStringLiteral("verticalLayout_1"));
        verticalLayout_1->setContentsMargins(0, 0, 0, 0);
        topBarShadow = new QWidget(page);
        topBarShadow->setObjectName(QStringLiteral("topBarShadow"));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(1);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(topBarShadow->sizePolicy().hasHeightForWidth());
        topBarShadow->setSizePolicy(sizePolicy7);
        topBarShadow->setMinimumSize(QSize(914, 4));
        topBarShadow->setMaximumSize(QSize(16777215, 4));
        topBarShadow->setStyleSheet(QLatin1String("background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #c8c8c8, stop: 1 #F4F5F6);\n"
"border: none;"));

        verticalLayout_1->addWidget(topBarShadow);

        startScreen = new QStackedWidget(page);
        startScreen->setObjectName(QStringLiteral("startScreen"));
        startScreen->setMinimumSize(QSize(914, 350));
        startScreen->setMaximumSize(QSize(16777215, 16777215));
        startScreen->setStyleSheet(QLatin1String("border:none;\n"
"background-color: #ffffff;"));
        startScreen->setFrameShape(QFrame::StyledPanel);
        startScreen->setFrameShadow(QFrame::Raised);
        signPage = new QWidget();
        signPage->setObjectName(QStringLiteral("signPage"));
        signPage->setStyleSheet(QLatin1String("QWidget#signPage { background-image: url(:/images/bg_lovid.svg);\n"
"background-repeat: repeat-x;\n"
"background-position: bottom; }"));
        gridLayout_3 = new QGridLayout(signPage);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalSpacer_6 = new QSpacerItem(155, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_6, 2, 2, 1, 1);

        signIntroCentral = new QWidget(signPage);
        signIntroCentral->setObjectName(QStringLiteral("signIntroCentral"));
        sizePolicy2.setHeightForWidth(signIntroCentral->sizePolicy().hasHeightForWidth());
        signIntroCentral->setSizePolicy(sizePolicy2);
        signIntroCentral->setMinimumSize(QSize(520, 128));
        signIntroCentral->setStyleSheet(QStringLiteral("border: none;"));
        gridLayout_2 = new QGridLayout(signIntroCentral);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        signIntroLabel = new QLabel(signIntroCentral);
        signIntroLabel->setObjectName(QStringLiteral("signIntroLabel"));
        signIntroLabel->setMinimumSize(QSize(542, 0));
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setWeight(75);
        signIntroLabel->setFont(font2);
        signIntroLabel->setStyleSheet(QLatin1String("border: none;\n"
"color: #041E42;"));
        signIntroLabel->setLineWidth(0);
        signIntroLabel->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(signIntroLabel, 0, 0, 1, 3);

        horizontalSpacer_3 = new QSpacerItem(109, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        signIntroButton = new QPushButton(signIntroCentral);
        signIntroButton->setObjectName(QStringLiteral("signIntroButton"));
        signIntroButton->setMinimumSize(QSize(240, 45));
        signIntroButton->setMaximumSize(QSize(240, 45));
        QFont font3;
        font3.setPointSize(14);
        signIntroButton->setFont(font3);
        signIntroButton->setCursor(QCursor(Qt::PointingHandCursor));
        signIntroButton->setAutoFillBackground(false);
        signIntroButton->setStyleSheet(QLatin1String("QPushButton {\n"
"	padding: 6px 10px;\n"
"	border-radius: 2px;\n"
"	background-color: #006eb5;\n"
"	color: #ffffff;\n"
"	text-decoration: none solid rgb(255, 255, 255);\n"
"	text-align: center;\n"
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

        gridLayout_2->addWidget(signIntroButton, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(118, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 1, 2, 1, 1);


        gridLayout_3->addWidget(signIntroCentral, 2, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 230, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 3, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(155, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_5, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 1, 1, 1, 1);

        startScreen->addWidget(signPage);
        signContainerPage = new ContainerPage();
        signContainerPage->setObjectName(QStringLiteral("signContainerPage"));
        sizePolicy.setHeightForWidth(signContainerPage->sizePolicy().hasHeightForWidth());
        signContainerPage->setSizePolicy(sizePolicy);
        startScreen->addWidget(signContainerPage);
        cryptoPage = new QWidget();
        cryptoPage->setObjectName(QStringLiteral("cryptoPage"));
        cryptoPage->setStyleSheet(QLatin1String("QWidget#cryptoPage {\n"
"background-image: url(:/images/bg_lovid.svg);\n"
"background-repeat: repeat-x;\n"
"background-position: bottom;\n"
"}"));
        gridLayout = new QGridLayout(cryptoPage);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 0, 1, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(155, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_9, 1, 0, 1, 1);

        cryptoIntroCentral = new QWidget(cryptoPage);
        cryptoIntroCentral->setObjectName(QStringLiteral("cryptoIntroCentral"));
        sizePolicy2.setHeightForWidth(cryptoIntroCentral->sizePolicy().hasHeightForWidth());
        cryptoIntroCentral->setSizePolicy(sizePolicy2);
        cryptoIntroCentral->setMinimumSize(QSize(566, 128));
        cryptoIntroCentral->setStyleSheet(QStringLiteral("border: none;"));
        gridLayout_4 = new QGridLayout(cryptoIntroCentral);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalSpacer_7 = new QSpacerItem(118, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_7, 1, 2, 1, 1);

        cryptoIntroButton = new QPushButton(cryptoIntroCentral);
        cryptoIntroButton->setObjectName(QStringLiteral("cryptoIntroButton"));
        cryptoIntroButton->setMinimumSize(QSize(240, 45));
        cryptoIntroButton->setMaximumSize(QSize(228, 16777215));
        cryptoIntroButton->setFont(font3);
        cryptoIntroButton->setStyleSheet(QLatin1String("QPushButton {\n"
"	padding: 6px 10px;\n"
"	border-radius: 2px;\n"
"	background-color: #006eb5;\n"
"	color: #ffffff;\n"
"	text-decoration: none solid rgb(255, 255, 255);\n"
"	text-align: center;\n"
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

        gridLayout_4->addWidget(cryptoIntroButton, 1, 1, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(109, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_8, 1, 0, 1, 1);

        cryptoIntroLabel = new QLabel(cryptoIntroCentral);
        cryptoIntroLabel->setObjectName(QStringLiteral("cryptoIntroLabel"));
        cryptoIntroLabel->setMinimumSize(QSize(542, 0));
        cryptoIntroLabel->setFont(font2);
        cryptoIntroLabel->setStyleSheet(QLatin1String("border: none;\n"
"color: #041E42;"));
        cryptoIntroLabel->setLineWidth(0);
        cryptoIntroLabel->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(cryptoIntroLabel, 0, 0, 1, 3);


        gridLayout->addWidget(cryptoIntroCentral, 1, 1, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(155, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_10, 1, 2, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 230, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 2, 1, 1, 1);

        startScreen->addWidget(cryptoPage);
        cryptoContainerPage = new ContainerPage();
        cryptoContainerPage->setObjectName(QStringLiteral("cryptoContainerPage"));
        startScreen->addWidget(cryptoContainerPage);
        eidPage = new QWidget();
        eidPage->setObjectName(QStringLiteral("eidPage"));
        sizePolicy.setHeightForWidth(eidPage->sizePolicy().hasHeightForWidth());
        eidPage->setSizePolicy(sizePolicy);
        eidPage->setMinimumSize(QSize(0, 491));
        eidPage->setStyleSheet(QLatin1String("border: none;\n"
"background-color: #F4F5F6;"));
        verticalLayout_2 = new QVBoxLayout(eidPage);
        verticalLayout_2->setSpacing(3);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        infoStack = new InfoStack(eidPage);
        infoStack->setObjectName(QStringLiteral("infoStack"));
        sizePolicy6.setHeightForWidth(infoStack->sizePolicy().hasHeightForWidth());
        infoStack->setSizePolicy(sizePolicy6);
        infoStack->setMinimumSize(QSize(0, 172));
        infoStack->setMaximumSize(QSize(16777215, 186));
        infoStack->setStyleSheet(QStringLiteral("border: none;"));

        verticalLayout_2->addWidget(infoStack);

        accordion = new Accordion(eidPage);
        accordion->setObjectName(QStringLiteral("accordion"));

        verticalLayout_2->addWidget(accordion);

        startScreen->addWidget(eidPage);

        verticalLayout_1->addWidget(startScreen);


        horizontalLayout->addWidget(page);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(MainWindow);

        startScreen->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "DigiDoc4 client", Q_NULLPTR));
        help->setText(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
        settings->setText(QApplication::translate("MainWindow", "Settings", Q_NULLPTR));
        version->setText(QApplication::translate("MainWindow", "version", Q_NULLPTR));
        signIntroLabel->setText(QApplication::translate("MainWindow", "Drag file here for signing", Q_NULLPTR));
        signIntroButton->setText(QApplication::translate("MainWindow", "Open file for signing", Q_NULLPTR));
        cryptoIntroButton->setText(QApplication::translate("MainWindow", "Open file for encryption", Q_NULLPTR));
        cryptoIntroLabel->setText(QApplication::translate("MainWindow", "Drag file here for encryption", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
