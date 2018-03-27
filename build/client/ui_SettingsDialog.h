/********************************************************************************
** Form generated from reading UI file 'SettingsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *containerLists;
    QHBoxLayout *horizontalLayout_3;
    QWidget *leftPane;
    QVBoxLayout *verticalLayout_2;
    QLabel *lblMenuSettings;
    QPushButton *btnMenuGeneral;
    QPushButton *btnMenuSigning;
    QPushButton *btnMenuCertificate;
    QPushButton *btnMenuProxy;
    QPushButton *btnMenuDiagnostics;
    QPushButton *btnMenuInfo;
    QSpacerItem *verticalSpacer;
    QStackedWidget *stackedWidget;
    QWidget *pageGeneral;
    QLabel *lblGeneralLang;
    QLabel *lblDefaultDirectory;
    QLabel *lblGeneralCheckUpdatePeriod;
    QComboBox *cmbGeneralCheckUpdatePeriod;
    QCheckBox *chkGeneralTslRefresh;
    QGroupBox *groupBox;
    QRadioButton *rdGeneralEstonian;
    QRadioButton *rdGeneralEnglish;
    QRadioButton *rdGeneralRussian;
    QGroupBox *groupBox_2;
    QLineEdit *txtGeneralDirectory;
    QRadioButton *rdGeneralSameDirectory;
    QRadioButton *rdGeneralSpecifyDirectory;
    QToolButton *btGeneralChooseDirectory;
    QWidget *pageSigning;
    QLabel *lblSigningFileType;
    QGroupBox *groupBox_3;
    QRadioButton *rdSigningAsice;
    QRadioButton *rdSigningBdoc;
    QLabel *lblSigningExplained;
    QLabel *lblSigningRole;
    QLineEdit *txtSigningRole;
    QLabel *lblSigningAddress;
    QLineEdit *txtSigningCity;
    QLineEdit *txtSigningCounty;
    QLineEdit *txtSigningCountry;
    QLineEdit *txtSigningZipCode;
    QLabel *lblSigningCity;
    QLabel *lblSigningCounty;
    QLabel *lblSigningCountry;
    QLabel *lblSigningZipCode;
    QWidget *pageAccessCert;
    QLabel *txtAccessCert;
    QCheckBox *chkIgnoreAccessCert;
    QWidget *pageProxy;
    QGroupBox *groupBox_4;
    QRadioButton *rdProxyNone;
    QRadioButton *rdProxySystem;
    QRadioButton *rdProxyManual;
    QLineEdit *txtProxyHost;
    QLineEdit *txtProxyPort;
    QLineEdit *txtProxyUsername;
    QLineEdit *txtProxyPassword;
    QLabel *lblProxyHost;
    QLabel *lblProxyPort;
    QLabel *lblProxyUsername;
    QLabel *lblProxyPassword;
    QCheckBox *chkProxyEnableForSSL;
    QWidget *pageDiagnostics;
    QTextEdit *txtDiagnostics;
    QWidget *pageInfo;
    QTextBrowser *txtInfo;
    QWidget *structureFunds;
    QLabel *contact;
    QWidget *navigationArea;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *txtNavVersion;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnFirstRun;
    QPushButton *btnCheckConnection;
    QPushButton *btNavFromFile;
    QPushButton *btnNavSaveReport;
    QPushButton *btnNavFromHistory;
    QPushButton *btnNavUseByDefault;
    QPushButton *btnNavInstallManually;
    QPushButton *btnNavShowCertificate;
    QPushButton *btNavClose;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName(QStringLiteral("SettingsDialog"));
        SettingsDialog->resize(994, 570);
        SettingsDialog->setMinimumSize(QSize(994, 570));
        SettingsDialog->setMaximumSize(QSize(994, 570));
        verticalLayout = new QVBoxLayout(SettingsDialog);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        containerLists = new QWidget(SettingsDialog);
        containerLists->setObjectName(QStringLiteral("containerLists"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(containerLists->sizePolicy().hasHeightForWidth());
        containerLists->setSizePolicy(sizePolicy);
        containerLists->setMinimumSize(QSize(880, 399));
        containerLists->setStyleSheet(QLatin1String("#containerLists\n"
"{\n"
"background-color: #ffffff;\n"
"}"));
        horizontalLayout_3 = new QHBoxLayout(containerLists);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        leftPane = new QWidget(containerLists);
        leftPane->setObjectName(QStringLiteral("leftPane"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(leftPane->sizePolicy().hasHeightForWidth());
        leftPane->setSizePolicy(sizePolicy1);
        leftPane->setMinimumSize(QSize(205, 0));
        leftPane->setMaximumSize(QSize(205, 16777215));
        leftPane->setStyleSheet(QStringLiteral("border-right: 1px solid #DEE4E9;"));
        verticalLayout_2 = new QVBoxLayout(leftPane);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(2, 0, 1, 0);
        lblMenuSettings = new QLabel(leftPane);
        lblMenuSettings->setObjectName(QStringLiteral("lblMenuSettings"));
        lblMenuSettings->setMinimumSize(QSize(0, 55));
        lblMenuSettings->setMaximumSize(QSize(16777215, 55));
        lblMenuSettings->setStyleSheet(QStringLiteral("border: none;"));
        lblMenuSettings->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lblMenuSettings);

        btnMenuGeneral = new QPushButton(leftPane);
        btnMenuGeneral->setObjectName(QStringLiteral("btnMenuGeneral"));
        btnMenuGeneral->setMinimumSize(QSize(0, 35));
        btnMenuGeneral->setMaximumSize(QSize(16777215, 35));
        btnMenuGeneral->setStyleSheet(QLatin1String("QPushButton {\n"
"	border: none;\n"
"	background-color: #F4F5F6;\n"
"	color: #006EB5;\n"
"	text-align:left;\n"
"	padding-left: 21;\n"
"}\n"
"\n"
"QPushButton:!checked{\n"
"	background-color: #ffffff;\n"
"	color: #000000;\n"
"}\n"
""));
        btnMenuGeneral->setCheckable(true);
        btnMenuGeneral->setChecked(true);

        verticalLayout_2->addWidget(btnMenuGeneral);

        btnMenuSigning = new QPushButton(leftPane);
        btnMenuSigning->setObjectName(QStringLiteral("btnMenuSigning"));
        btnMenuSigning->setMinimumSize(QSize(0, 35));
        btnMenuSigning->setMaximumSize(QSize(16777215, 35));
        btnMenuSigning->setStyleSheet(QLatin1String("QPushButton {\n"
"	border: none;\n"
"	background-color: #F4F5F6;\n"
"	color: #006EB5;\n"
"	text-align:left;\n"
"	padding-left: 21;\n"
"}\n"
"\n"
"QPushButton:!checked{\n"
"	background-color: #ffffff;\n"
"	color: #000000;\n"
"}\n"
""));
        btnMenuSigning->setCheckable(true);
        btnMenuSigning->setChecked(false);

        verticalLayout_2->addWidget(btnMenuSigning);

        btnMenuCertificate = new QPushButton(leftPane);
        btnMenuCertificate->setObjectName(QStringLiteral("btnMenuCertificate"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnMenuCertificate->sizePolicy().hasHeightForWidth());
        btnMenuCertificate->setSizePolicy(sizePolicy2);
        btnMenuCertificate->setMinimumSize(QSize(0, 35));
        btnMenuCertificate->setMaximumSize(QSize(16777215, 35));
        btnMenuCertificate->setStyleSheet(QLatin1String("QPushButton {\n"
"	border: none;\n"
"	background-color: #F4F5F6;\n"
"	color: #006EB5;\n"
"	text-align:left;\n"
"	padding-left: 21;\n"
"}\n"
"\n"
"QPushButton:!checked{\n"
"	background-color: #ffffff;\n"
"	color: #000000;\n"
"}\n"
""));
        btnMenuCertificate->setCheckable(true);
        btnMenuCertificate->setFlat(true);

        verticalLayout_2->addWidget(btnMenuCertificate);

        btnMenuProxy = new QPushButton(leftPane);
        btnMenuProxy->setObjectName(QStringLiteral("btnMenuProxy"));
        btnMenuProxy->setMinimumSize(QSize(0, 35));
        btnMenuProxy->setMaximumSize(QSize(16777215, 35));
        btnMenuProxy->setStyleSheet(QLatin1String("QPushButton {\n"
"	border: none;\n"
"	background-color: #F4F5F6;\n"
"	color: #006EB5;\n"
"	text-align:left;\n"
"	padding-left: 21;\n"
"}\n"
"\n"
"QPushButton:!checked{\n"
"	background-color: #ffffff;\n"
"	color: #000000;\n"
"}\n"
""));
        btnMenuProxy->setCheckable(true);

        verticalLayout_2->addWidget(btnMenuProxy);

        btnMenuDiagnostics = new QPushButton(leftPane);
        btnMenuDiagnostics->setObjectName(QStringLiteral("btnMenuDiagnostics"));
        btnMenuDiagnostics->setMinimumSize(QSize(0, 35));
        btnMenuDiagnostics->setMaximumSize(QSize(16777215, 35));
        btnMenuDiagnostics->setStyleSheet(QLatin1String("QPushButton {\n"
"	border: none;\n"
"	background-color: #F4F5F6;\n"
"	color: #006EB5;\n"
"	text-align:left;\n"
"	padding-left: 21;\n"
"}\n"
"\n"
"QPushButton:!checked{\n"
"	background-color: #ffffff;\n"
"	color: #000000;\n"
"}\n"
""));
        btnMenuDiagnostics->setCheckable(true);

        verticalLayout_2->addWidget(btnMenuDiagnostics);

        btnMenuInfo = new QPushButton(leftPane);
        btnMenuInfo->setObjectName(QStringLiteral("btnMenuInfo"));
        btnMenuInfo->setMinimumSize(QSize(0, 35));
        btnMenuInfo->setMaximumSize(QSize(16777215, 35));
        btnMenuInfo->setStyleSheet(QLatin1String("QPushButton {\n"
"	border: none;\n"
"	background-color: #F4F5F6;\n"
"	color: #006EB5;\n"
"	text-align:left;\n"
"	padding-left: 21;\n"
"}\n"
"\n"
"QPushButton:!checked{\n"
"	background-color: #ffffff;\n"
"	color: #000000;\n"
"}\n"
""));
        btnMenuInfo->setCheckable(true);

        verticalLayout_2->addWidget(btnMenuInfo);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_3->addWidget(leftPane);

        stackedWidget = new QStackedWidget(containerLists);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        QFont font;
        font.setFamily(QStringLiteral("Roboto"));
        font.setPointSize(14);
        stackedWidget->setFont(font);
        pageGeneral = new QWidget();
        pageGeneral->setObjectName(QStringLiteral("pageGeneral"));
        lblGeneralLang = new QLabel(pageGeneral);
        lblGeneralLang->setObjectName(QStringLiteral("lblGeneralLang"));
        lblGeneralLang->setGeometry(QRect(21, 20, 700, 21));
        lblGeneralLang->setMinimumSize(QSize(700, 21));
        lblGeneralLang->setMaximumSize(QSize(700, 21));
        lblDefaultDirectory = new QLabel(pageGeneral);
        lblDefaultDirectory->setObjectName(QStringLiteral("lblDefaultDirectory"));
        lblDefaultDirectory->setGeometry(QRect(21, 220, 700, 21));
        lblDefaultDirectory->setMinimumSize(QSize(700, 21));
        lblDefaultDirectory->setMaximumSize(QSize(700, 21));
        lblGeneralCheckUpdatePeriod = new QLabel(pageGeneral);
        lblGeneralCheckUpdatePeriod->setObjectName(QStringLiteral("lblGeneralCheckUpdatePeriod"));
        lblGeneralCheckUpdatePeriod->setGeometry(QRect(21, 100, 700, 21));
        lblGeneralCheckUpdatePeriod->setMinimumSize(QSize(700, 21));
        lblGeneralCheckUpdatePeriod->setMaximumSize(QSize(700, 21));
        cmbGeneralCheckUpdatePeriod = new QComboBox(pageGeneral);
        cmbGeneralCheckUpdatePeriod->setObjectName(QStringLiteral("cmbGeneralCheckUpdatePeriod"));
        cmbGeneralCheckUpdatePeriod->setGeometry(QRect(21, 132, 145, 31));
        cmbGeneralCheckUpdatePeriod->setMinimumSize(QSize(145, 31));
        cmbGeneralCheckUpdatePeriod->setMaximumSize(QSize(145, 31));
        cmbGeneralCheckUpdatePeriod->setStyleSheet(QLatin1String("QComboBox {\n"
"    border: 1px solid #DEE4E9;\n"
"    border-radius: 2px;\n"
"    background-color: #FFFFFF;\n"
"	color: #353739;\n"
"}	\n"
"\n"
"/* list */\n"
"QComboBox QAbstractItemView {\n"
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
"    width: 28px;\n"
"	border: none;\n"
"}\n"
"\n"
"/* drop-down button image*/\n"
"QComboBox::down-arrow {\n"
"	image: url(:/images/arrow_down.svg);\n"
"}"));
        chkGeneralTslRefresh = new QCheckBox(pageGeneral);
        chkGeneralTslRefresh->setObjectName(QStringLiteral("chkGeneralTslRefresh"));
        chkGeneralTslRefresh->setGeometry(QRect(24, 178, 700, 16));
        chkGeneralTslRefresh->setMinimumSize(QSize(700, 16));
        chkGeneralTslRefresh->setMaximumSize(QSize(700, 16));
        chkGeneralTslRefresh->setStyleSheet(QLatin1String("QCheckBox::indicator {\n"
"    width: 14px;\n"
"    height: 14px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"    image: url(:/images/icon_checkbox.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"    image: url(:/images/icon_checkbox_check.png);\n"
"}\n"
""));
        chkGeneralTslRefresh->setChecked(true);
        groupBox = new QGroupBox(pageGeneral);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 53, 400, 16));
        groupBox->setMinimumSize(QSize(400, 16));
        groupBox->setMaximumSize(QSize(400, 16));
        groupBox->setStyleSheet(QStringLiteral("border: none;"));
        rdGeneralEstonian = new QRadioButton(groupBox);
        rdGeneralEstonian->setObjectName(QStringLiteral("rdGeneralEstonian"));
        rdGeneralEstonian->setGeometry(QRect(21, 0, 60, 16));
        rdGeneralEstonian->setMinimumSize(QSize(60, 16));
        rdGeneralEstonian->setMaximumSize(QSize(60, 16));
#ifndef QT_NO_ACCESSIBILITY
        rdGeneralEstonian->setAccessibleDescription(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        rdGeneralEstonian->setStyleSheet(QLatin1String("QRadioButton::indicator {\n"
"    width: 14px;\n"
"    height: 14px;\n"
"}\n"
"\n"
"QRadioButton::indicator::unchecked {\n"
"    image: url(:/images/icon_radio.png);\n"
"}\n"
"\n"
"QRadioButton::indicator::checked {\n"
"    image: url(:/images/icon_radio_checked.png);\n"
"}"));
        rdGeneralEstonian->setChecked(true);
        rdGeneralEnglish = new QRadioButton(groupBox);
        rdGeneralEnglish->setObjectName(QStringLiteral("rdGeneralEnglish"));
        rdGeneralEnglish->setGeometry(QRect(180, 0, 75, 16));
        rdGeneralEnglish->setMinimumSize(QSize(75, 16));
        rdGeneralEnglish->setMaximumSize(QSize(75, 16));
#ifndef QT_NO_ACCESSIBILITY
        rdGeneralEnglish->setAccessibleDescription(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        rdGeneralEnglish->setStyleSheet(QLatin1String("QRadioButton::indicator {\n"
"    width: 14px;\n"
"    height: 14px;\n"
"}\n"
"\n"
"QRadioButton::indicator::unchecked {\n"
"    image: url(:/images/icon_radio.png);\n"
"}\n"
"\n"
"QRadioButton::indicator::checked {\n"
"    image: url(:/images/icon_radio_checked.png);\n"
"}"));
        rdGeneralRussian = new QRadioButton(groupBox);
        rdGeneralRussian->setObjectName(QStringLiteral("rdGeneralRussian"));
        rdGeneralRussian->setGeometry(QRect(89, 0, 80, 16));
        rdGeneralRussian->setMinimumSize(QSize(80, 16));
        rdGeneralRussian->setMaximumSize(QSize(80, 16));
#ifndef QT_NO_ACCESSIBILITY
        rdGeneralRussian->setAccessibleDescription(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        rdGeneralRussian->setStyleSheet(QLatin1String("QRadioButton::indicator {\n"
"    width: 14px;\n"
"    height: 14px;\n"
"}\n"
"\n"
"QRadioButton::indicator::unchecked {\n"
"    image: url(:/images/icon_radio.png);\n"
"}\n"
"\n"
"QRadioButton::indicator::checked {\n"
"    image: url(:/images/icon_radio_checked.png);\n"
"}"));
        groupBox_2 = new QGroupBox(pageGeneral);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 241, 781, 71));
        groupBox_2->setStyleSheet(QStringLiteral("border: none;"));
        txtGeneralDirectory = new QLineEdit(groupBox_2);
        txtGeneralDirectory->setObjectName(QStringLiteral("txtGeneralDirectory"));
        txtGeneralDirectory->setGeometry(QRect(293, 40, 471, 31));
        txtGeneralDirectory->setMinimumSize(QSize(471, 31));
        txtGeneralDirectory->setMaximumSize(QSize(471, 31));
        txtGeneralDirectory->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"border: 1px solid #DEE4E9;\n"
"border-radius: 2px;\n"
"background-color: #FFFFFF;\n"
"}"));
        rdGeneralSameDirectory = new QRadioButton(groupBox_2);
        rdGeneralSameDirectory->setObjectName(QStringLiteral("rdGeneralSameDirectory"));
        rdGeneralSameDirectory->setGeometry(QRect(21, 12, 220, 16));
        rdGeneralSameDirectory->setMinimumSize(QSize(220, 16));
        rdGeneralSameDirectory->setMaximumSize(QSize(220, 16));
        rdGeneralSameDirectory->setStyleSheet(QLatin1String("QRadioButton::indicator {\n"
"    width: 14px;\n"
"    height: 14px;\n"
"}\n"
"\n"
"QRadioButton::indicator::unchecked {\n"
"    image: url(:/images/icon_radio.png);\n"
"}\n"
"\n"
"QRadioButton::indicator::checked {\n"
"    image: url(:/images/icon_radio_checked.png);\n"
"}"));
        rdGeneralSameDirectory->setChecked(true);
        rdGeneralSpecifyDirectory = new QRadioButton(groupBox_2);
        rdGeneralSpecifyDirectory->setObjectName(QStringLiteral("rdGeneralSpecifyDirectory"));
        rdGeneralSpecifyDirectory->setGeometry(QRect(21, 47, 228, 16));
        rdGeneralSpecifyDirectory->setMinimumSize(QSize(228, 16));
        rdGeneralSpecifyDirectory->setMaximumSize(QSize(220, 16));
        rdGeneralSpecifyDirectory->setStyleSheet(QLatin1String("QRadioButton::indicator {\n"
"    width: 14px;\n"
"    height: 14px;\n"
"}\n"
"\n"
"QRadioButton::indicator::unchecked {\n"
"    image: url(:/images/icon_radio.png);\n"
"}\n"
"\n"
"QRadioButton::indicator::checked {\n"
"    image: url(:/images/icon_radio_checked.png);\n"
"}"));
        btGeneralChooseDirectory = new QToolButton(groupBox_2);
        btGeneralChooseDirectory->setObjectName(QStringLiteral("btGeneralChooseDirectory"));
        btGeneralChooseDirectory->setGeometry(QRect(255, 40, 37, 31));
        btGeneralChooseDirectory->setMinimumSize(QSize(37, 31));
        btGeneralChooseDirectory->setMaximumSize(QSize(37, 31));
        btGeneralChooseDirectory->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"	border: 1px solid #DEE4E9;\n"
"	border-radius: 2px;\n"
"	background-color: #F4F5F6;\n"
"}"));
        stackedWidget->addWidget(pageGeneral);
        pageSigning = new QWidget();
        pageSigning->setObjectName(QStringLiteral("pageSigning"));
        lblSigningFileType = new QLabel(pageSigning);
        lblSigningFileType->setObjectName(QStringLiteral("lblSigningFileType"));
        lblSigningFileType->setGeometry(QRect(21, 20, 260, 21));
        lblSigningFileType->setMinimumSize(QSize(260, 21));
        lblSigningFileType->setMaximumSize(QSize(260, 21));
        groupBox_3 = new QGroupBox(pageSigning);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(0, 42, 771, 71));
        groupBox_3->setStyleSheet(QStringLiteral("border: none;"));
        rdSigningAsice = new QRadioButton(groupBox_3);
        rdSigningAsice->setObjectName(QStringLiteral("rdSigningAsice"));
        rdSigningAsice->setGeometry(QRect(21, 12, 749, 32));
        rdSigningAsice->setMinimumSize(QSize(749, 32));
        rdSigningAsice->setMaximumSize(QSize(749, 32));
        rdSigningAsice->setStyleSheet(QLatin1String("QRadioButton::indicator {\n"
"    width: 14px;\n"
"    height: 14px;\n"
"	subcontrol-position: left top;\n"
"}\n"
"\n"
"QRadioButton::indicator::unchecked {\n"
"    image: url(:/images/icon_radio.png);\n"
"}\n"
"\n"
"QRadioButton::indicator::checked {\n"
"    image: url(:/images/icon_radio_checked.png);\n"
"}"));
        rdSigningAsice->setChecked(true);
        rdSigningBdoc = new QRadioButton(groupBox_3);
        rdSigningBdoc->setObjectName(QStringLiteral("rdSigningBdoc"));
        rdSigningBdoc->setGeometry(QRect(21, 50, 749, 16));
        rdSigningBdoc->setMinimumSize(QSize(749, 16));
        rdSigningBdoc->setMaximumSize(QSize(749, 16));
        rdSigningBdoc->setStyleSheet(QLatin1String("QRadioButton::indicator {\n"
"    width: 14px;\n"
"    height: 14px;\n"
"}\n"
"\n"
"QRadioButton::indicator::unchecked {\n"
"    image: url(:/images/icon_radio.png);\n"
"}\n"
"\n"
"QRadioButton::indicator::checked {\n"
"    image: url(:/images/icon_radio_checked.png);\n"
"}"));
        lblSigningExplained = new QLabel(pageSigning);
        lblSigningExplained->setObjectName(QStringLiteral("lblSigningExplained"));
        lblSigningExplained->setGeometry(QRect(21, 130, 749, 70));
        lblSigningExplained->setMinimumSize(QSize(749, 70));
        lblSigningExplained->setMaximumSize(QSize(749, 70));
        lblSigningExplained->setTextFormat(Qt::AutoText);
        lblSigningExplained->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblSigningExplained->setWordWrap(true);
        lblSigningRole = new QLabel(pageSigning);
        lblSigningRole->setObjectName(QStringLiteral("lblSigningRole"));
        lblSigningRole->setGeometry(QRect(21, 220, 150, 21));
        lblSigningRole->setMinimumSize(QSize(150, 21));
        lblSigningRole->setMaximumSize(QSize(150, 21));
        txtSigningRole = new QLineEdit(pageSigning);
        txtSigningRole->setObjectName(QStringLiteral("txtSigningRole"));
        txtSigningRole->setGeometry(QRect(21, 248, 330, 31));
        txtSigningRole->setMinimumSize(QSize(330, 31));
        txtSigningRole->setMaximumSize(QSize(330, 31));
        txtSigningRole->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"border: 1px solid #DEE4E9;\n"
"border-radius: 2px;\n"
"background-color: #FFFFFF;\n"
"}"));
        lblSigningAddress = new QLabel(pageSigning);
        lblSigningAddress->setObjectName(QStringLiteral("lblSigningAddress"));
        lblSigningAddress->setGeometry(QRect(20, 300, 70, 21));
        lblSigningAddress->setMinimumSize(QSize(70, 21));
        lblSigningAddress->setMaximumSize(QSize(70, 21));
        txtSigningCity = new QLineEdit(pageSigning);
        txtSigningCity->setObjectName(QStringLiteral("txtSigningCity"));
        txtSigningCity->setGeometry(QRect(100, 330, 670, 31));
        txtSigningCity->setMinimumSize(QSize(670, 31));
        txtSigningCity->setMaximumSize(QSize(670, 31));
        txtSigningCity->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"border: 1px solid #DEE4E9;\n"
"border-radius: 2px;\n"
"background-color: #FFFFFF;\n"
"}"));
        txtSigningCounty = new QLineEdit(pageSigning);
        txtSigningCounty->setObjectName(QStringLiteral("txtSigningCounty"));
        txtSigningCounty->setGeometry(QRect(100, 365, 670, 31));
        txtSigningCounty->setMinimumSize(QSize(670, 31));
        txtSigningCounty->setMaximumSize(QSize(670, 31));
        txtSigningCounty->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"border: 1px solid #DEE4E9;\n"
"border-radius: 2px;\n"
"background-color: #FFFFFF;\n"
"}"));
        txtSigningCountry = new QLineEdit(pageSigning);
        txtSigningCountry->setObjectName(QStringLiteral("txtSigningCountry"));
        txtSigningCountry->setGeometry(QRect(100, 400, 670, 31));
        txtSigningCountry->setMinimumSize(QSize(670, 31));
        txtSigningCountry->setMaximumSize(QSize(670, 31));
        txtSigningCountry->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"border: 1px solid #DEE4E9;\n"
"border-radius: 2px;\n"
"background-color: #FFFFFF;\n"
"}"));
        txtSigningZipCode = new QLineEdit(pageSigning);
        txtSigningZipCode->setObjectName(QStringLiteral("txtSigningZipCode"));
        txtSigningZipCode->setGeometry(QRect(100, 435, 670, 31));
        txtSigningZipCode->setMinimumSize(QSize(670, 31));
        txtSigningZipCode->setMaximumSize(QSize(670, 31));
        txtSigningZipCode->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"border: 1px solid #DEE4E9;\n"
"border-radius: 2px;\n"
"background-color: #FFFFFF;\n"
"}"));
        lblSigningCity = new QLabel(pageSigning);
        lblSigningCity->setObjectName(QStringLiteral("lblSigningCity"));
        lblSigningCity->setGeometry(QRect(21, 337, 65, 16));
        lblSigningCity->setMinimumSize(QSize(65, 16));
        lblSigningCity->setMaximumSize(QSize(65, 16));
        lblSigningCounty = new QLabel(pageSigning);
        lblSigningCounty->setObjectName(QStringLiteral("lblSigningCounty"));
        lblSigningCounty->setGeometry(QRect(21, 372, 65, 16));
        lblSigningCounty->setMinimumSize(QSize(65, 16));
        lblSigningCounty->setMaximumSize(QSize(65, 16));
        lblSigningCountry = new QLabel(pageSigning);
        lblSigningCountry->setObjectName(QStringLiteral("lblSigningCountry"));
        lblSigningCountry->setGeometry(QRect(21, 407, 65, 16));
        lblSigningCountry->setMinimumSize(QSize(65, 16));
        lblSigningCountry->setMaximumSize(QSize(65, 16));
        lblSigningZipCode = new QLabel(pageSigning);
        lblSigningZipCode->setObjectName(QStringLiteral("lblSigningZipCode"));
        lblSigningZipCode->setGeometry(QRect(21, 442, 75, 16));
        lblSigningZipCode->setMinimumSize(QSize(75, 16));
        lblSigningZipCode->setMaximumSize(QSize(75, 16));
        stackedWidget->addWidget(pageSigning);
        pageAccessCert = new QWidget();
        pageAccessCert->setObjectName(QStringLiteral("pageAccessCert"));
        txtAccessCert = new QLabel(pageAccessCert);
        txtAccessCert->setObjectName(QStringLiteral("txtAccessCert"));
        txtAccessCert->setGeometry(QRect(21, 20, 749, 120));
        txtAccessCert->setMinimumSize(QSize(749, 120));
        txtAccessCert->setMaximumSize(QSize(749, 130));
        txtAccessCert->setTextFormat(Qt::AutoText);
        txtAccessCert->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        txtAccessCert->setWordWrap(true);
        txtAccessCert->setOpenExternalLinks(true);
        txtAccessCert->setTextInteractionFlags(Qt::TextBrowserInteraction);
        chkIgnoreAccessCert = new QCheckBox(pageAccessCert);
        chkIgnoreAccessCert->setObjectName(QStringLiteral("chkIgnoreAccessCert"));
        chkIgnoreAccessCert->setGeometry(QRect(21, 160, 700, 16));
        chkIgnoreAccessCert->setMinimumSize(QSize(700, 16));
        chkIgnoreAccessCert->setMaximumSize(QSize(700, 16));
        chkIgnoreAccessCert->setStyleSheet(QLatin1String("QCheckBox::indicator {\n"
"    width: 14px;\n"
"    height: 14px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"    image: url(:/images/icon_checkbox.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"    image: url(:/images/icon_checkbox_check.png);\n"
"}"));
        stackedWidget->addWidget(pageAccessCert);
        pageProxy = new QWidget();
        pageProxy->setObjectName(QStringLiteral("pageProxy"));
        groupBox_4 = new QGroupBox(pageProxy);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(0, 0, 421, 111));
        groupBox_4->setStyleSheet(QStringLiteral("border: none;"));
        rdProxyNone = new QRadioButton(groupBox_4);
        rdProxyNone->setObjectName(QStringLiteral("rdProxyNone"));
        rdProxyNone->setGeometry(QRect(21, 20, 700, 16));
        rdProxyNone->setMinimumSize(QSize(700, 16));
        rdProxyNone->setMaximumSize(QSize(700, 16));
        rdProxyNone->setStyleSheet(QLatin1String("QRadioButton::indicator {\n"
"    width: 14px;\n"
"    height: 14px;\n"
"}\n"
"\n"
"QRadioButton::indicator::unchecked {\n"
"    image: url(:/images/icon_radio.png);\n"
"}\n"
"\n"
"QRadioButton::indicator::checked {\n"
"    image: url(:/images/icon_radio_checked.png);\n"
"}"));
        rdProxyNone->setChecked(true);
        rdProxySystem = new QRadioButton(groupBox_4);
        rdProxySystem->setObjectName(QStringLiteral("rdProxySystem"));
        rdProxySystem->setGeometry(QRect(21, 55, 700, 16));
        rdProxySystem->setMinimumSize(QSize(700, 16));
        rdProxySystem->setMaximumSize(QSize(700, 16));
        rdProxySystem->setStyleSheet(QLatin1String("QRadioButton::indicator {\n"
"    width: 14px;\n"
"    height: 14px;\n"
"}\n"
"\n"
"QRadioButton::indicator::unchecked {\n"
"    image: url(:/images/icon_radio.png);\n"
"}\n"
"\n"
"QRadioButton::indicator::checked {\n"
"    image: url(:/images/icon_radio_checked.png);\n"
"}"));
        rdProxyManual = new QRadioButton(groupBox_4);
        rdProxyManual->setObjectName(QStringLiteral("rdProxyManual"));
        rdProxyManual->setGeometry(QRect(21, 90, 700, 16));
        rdProxyManual->setMinimumSize(QSize(700, 16));
        rdProxyManual->setMaximumSize(QSize(700, 16));
        rdProxyManual->setStyleSheet(QLatin1String("QRadioButton::indicator {\n"
"    width: 14px;\n"
"    height: 14px;\n"
"}\n"
"\n"
"QRadioButton::indicator::unchecked {\n"
"    image: url(:/images/icon_radio.png);\n"
"}\n"
"\n"
"QRadioButton::indicator::checked {\n"
"    image: url(:/images/icon_radio_checked.png);\n"
"}"));
        txtProxyHost = new QLineEdit(pageProxy);
        txtProxyHost->setObjectName(QStringLiteral("txtProxyHost"));
        txtProxyHost->setGeometry(QRect(170, 130, 600, 31));
        txtProxyHost->setMinimumSize(QSize(600, 31));
        txtProxyHost->setMaximumSize(QSize(600, 31));
        txtProxyPort = new QLineEdit(pageProxy);
        txtProxyPort->setObjectName(QStringLiteral("txtProxyPort"));
        txtProxyPort->setGeometry(QRect(170, 165, 600, 31));
        txtProxyPort->setMinimumSize(QSize(600, 31));
        txtProxyPort->setMaximumSize(QSize(600, 31));
        txtProxyUsername = new QLineEdit(pageProxy);
        txtProxyUsername->setObjectName(QStringLiteral("txtProxyUsername"));
        txtProxyUsername->setGeometry(QRect(170, 200, 600, 31));
        txtProxyUsername->setMinimumSize(QSize(600, 31));
        txtProxyUsername->setMaximumSize(QSize(600, 31));
        txtProxyPassword = new QLineEdit(pageProxy);
        txtProxyPassword->setObjectName(QStringLiteral("txtProxyPassword"));
        txtProxyPassword->setGeometry(QRect(170, 235, 600, 31));
        txtProxyPassword->setMinimumSize(QSize(600, 31));
        txtProxyPassword->setMaximumSize(QSize(600, 31));
        txtProxyPassword->setEchoMode(QLineEdit::Password);
        lblProxyHost = new QLabel(pageProxy);
        lblProxyHost->setObjectName(QStringLiteral("lblProxyHost"));
        lblProxyHost->setGeometry(QRect(20, 137, 140, 16));
        lblProxyHost->setMinimumSize(QSize(140, 16));
        lblProxyHost->setMaximumSize(QSize(140, 16));
        lblProxyPort = new QLabel(pageProxy);
        lblProxyPort->setObjectName(QStringLiteral("lblProxyPort"));
        lblProxyPort->setGeometry(QRect(20, 172, 140, 16));
        lblProxyPort->setMinimumSize(QSize(140, 16));
        lblProxyPort->setMaximumSize(QSize(140, 16));
        lblProxyUsername = new QLabel(pageProxy);
        lblProxyUsername->setObjectName(QStringLiteral("lblProxyUsername"));
        lblProxyUsername->setGeometry(QRect(20, 207, 140, 16));
        lblProxyUsername->setMinimumSize(QSize(140, 16));
        lblProxyUsername->setMaximumSize(QSize(140, 16));
        lblProxyPassword = new QLabel(pageProxy);
        lblProxyPassword->setObjectName(QStringLiteral("lblProxyPassword"));
        lblProxyPassword->setGeometry(QRect(20, 242, 140, 16));
        lblProxyPassword->setMinimumSize(QSize(140, 16));
        lblProxyPassword->setMaximumSize(QSize(140, 16));
        chkProxyEnableForSSL = new QCheckBox(pageProxy);
        chkProxyEnableForSSL->setObjectName(QStringLiteral("chkProxyEnableForSSL"));
        chkProxyEnableForSSL->setGeometry(QRect(20, 277, 751, 23));
        stackedWidget->addWidget(pageProxy);
        pageDiagnostics = new QWidget();
        pageDiagnostics->setObjectName(QStringLiteral("pageDiagnostics"));
        txtDiagnostics = new QTextEdit(pageDiagnostics);
        txtDiagnostics->setObjectName(QStringLiteral("txtDiagnostics"));
        txtDiagnostics->setGeometry(QRect(10, 10, 771, 511));
        txtDiagnostics->setMinimumSize(QSize(771, 511));
        txtDiagnostics->setMaximumSize(QSize(771, 511));
        txtDiagnostics->setStyleSheet(QLatin1String("QTextEdit {\n"
"	color: #363739;\n"
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
"}\n"
""));
        txtDiagnostics->setReadOnly(true);
        stackedWidget->addWidget(pageDiagnostics);
        pageInfo = new QWidget();
        pageInfo->setObjectName(QStringLiteral("pageInfo"));
        txtInfo = new QTextBrowser(pageInfo);
        txtInfo->setObjectName(QStringLiteral("txtInfo"));
        txtInfo->setGeometry(QRect(10, 191, 771, 330));
        txtInfo->setMinimumSize(QSize(771, 330));
        txtInfo->setMaximumSize(QSize(771, 330));
        txtInfo->setFont(font);
        txtInfo->setStyleSheet(QLatin1String("QTextEdit {\n"
"	color: #363739;\n"
"}\n"
"QScrollBar{\n"
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
        txtInfo->setReadOnly(true);
        txtInfo->setTextInteractionFlags(Qt::TextBrowserInteraction);
        txtInfo->setOpenExternalLinks(true);
        structureFunds = new QWidget(pageInfo);
        structureFunds->setObjectName(QStringLiteral("structureFunds"));
        structureFunds->setGeometry(QRect(339, 31, 111, 61));
        structureFunds->setMinimumSize(QSize(111, 61));
        structureFunds->setMaximumSize(QSize(111, 61));
        contact = new QLabel(pageInfo);
        contact->setObjectName(QStringLiteral("contact"));
        contact->setGeometry(QRect(10, 100, 771, 86));
        contact->setAlignment(Qt::AlignCenter);
        contact->setWordWrap(true);
        contact->setOpenExternalLinks(true);
        stackedWidget->addWidget(pageInfo);

        horizontalLayout_3->addWidget(stackedWidget);


        verticalLayout->addWidget(containerLists);

        navigationArea = new QWidget(SettingsDialog);
        navigationArea->setObjectName(QStringLiteral("navigationArea"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(navigationArea->sizePolicy().hasHeightForWidth());
        navigationArea->setSizePolicy(sizePolicy3);
        navigationArea->setMinimumSize(QSize(0, 46));
        navigationArea->setMaximumSize(QSize(16777215, 46));
        navigationArea->setStyleSheet(QLatin1String("border-top: 1px solid #DEE4E9;\n"
"background-color: #f7f7f7;"));
        horizontalLayout = new QHBoxLayout(navigationArea);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        txtNavVersion = new QLabel(navigationArea);
        txtNavVersion->setObjectName(QStringLiteral("txtNavVersion"));
        txtNavVersion->setMinimumSize(QSize(119, 14));
        txtNavVersion->setMaximumSize(QSize(350, 14));
        txtNavVersion->setStyleSheet(QStringLiteral("border: none;"));

        horizontalLayout->addWidget(txtNavVersion);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnFirstRun = new QPushButton(navigationArea);
        btnFirstRun->setObjectName(QStringLiteral("btnFirstRun"));
        btnFirstRun->setMinimumSize(QSize(120, 25));
        btnFirstRun->setMaximumSize(QSize(16777215, 25));
        btnFirstRun->setStyleSheet(QLatin1String("QPushButton {\n"
"	border-radius: 2px; \n"
"	border: none;\n"
"	color: #006EB5;\n"
"	padding-left: 6px;\n"
"	padding-right: 6px;\n"
"}\n"
"QPushButton:pressed {\n"
"	color: #FFFFFF;\n"
"	background-color: #006EB5;\n"
"}\n"
"QPushButton:hover:!pressed {\n"
"	border: 1px solid #006EB5;\n"
"	padding-left: 5px;\n"
"	padding-right: 5px;\n"
"	color: #006EB5;\n"
"}\n"
"QPushButton:disabled {\n"
"	color: #75787B;\n"
"}"));

        horizontalLayout->addWidget(btnFirstRun);

        btnCheckConnection = new QPushButton(navigationArea);
        btnCheckConnection->setObjectName(QStringLiteral("btnCheckConnection"));
        btnCheckConnection->setMinimumSize(QSize(120, 25));
        btnCheckConnection->setMaximumSize(QSize(210, 25));
        btnCheckConnection->setStyleSheet(QLatin1String("QPushButton {\n"
"	border-radius: 2px; \n"
"	border: none;\n"
"	color: #006EB5;\n"
"	padding-left: 6px;\n"
"	padding-right: 6px;\n"
"}\n"
"QPushButton:pressed {\n"
"	color: #FFFFFF;\n"
"	background-color: #006EB5;\n"
"}\n"
"QPushButton:hover:!pressed {\n"
"	border: 1px solid #006EB5;\n"
"	padding-left: 5px;\n"
"	padding-right: 5px;\n"
"	color: #006EB5;\n"
"}\n"
"QPushButton:disabled {\n"
"	color: #75787B;\n"
"}"));

        horizontalLayout->addWidget(btnCheckConnection);

        btNavFromFile = new QPushButton(navigationArea);
        btNavFromFile->setObjectName(QStringLiteral("btNavFromFile"));
        btNavFromFile->setMinimumSize(QSize(120, 25));
        btNavFromFile->setMaximumSize(QSize(16777215, 25));
        btNavFromFile->setStyleSheet(QLatin1String("QPushButton {\n"
"	border-radius: 2px; \n"
"	border: none;\n"
"	color: #006EB5;\n"
"	padding-left: 6px;\n"
"	padding-right: 6px;\n"
"}\n"
"QPushButton:pressed {\n"
"	color: #FFFFFF;\n"
"	background-color: #006EB5;\n"
"}\n"
"QPushButton:hover:!pressed {\n"
"	border: 1px solid #006EB5;\n"
"	padding-left: 5px;\n"
"	padding-right: 5px;\n"
"	color: #006EB5;\n"
"}\n"
"QPushButton:disabled {\n"
"	color: #75787B;\n"
"}"));
        btNavFromFile->setAutoDefault(false);

        horizontalLayout->addWidget(btNavFromFile);

        btnNavSaveReport = new QPushButton(navigationArea);
        btnNavSaveReport->setObjectName(QStringLiteral("btnNavSaveReport"));
        btnNavSaveReport->setMinimumSize(QSize(120, 25));
        btnNavSaveReport->setMaximumSize(QSize(16777215, 25));
        btnNavSaveReport->setStyleSheet(QLatin1String("QPushButton {\n"
"	border-radius: 2px; \n"
"	border: none;\n"
"	color: #006EB5;\n"
"	padding-left: 6px;\n"
"	padding-right: 6px;\n"
"}\n"
"QPushButton:pressed {\n"
"	color: #FFFFFF;\n"
"	background-color: #006EB5;\n"
"}\n"
"QPushButton:hover:!pressed {\n"
"	border: 1px solid #006EB5;\n"
"	padding-left: 5px;\n"
"	padding-right: 5px;\n"
"	color: #006EB5;\n"
"}\n"
"QPushButton:disabled {\n"
"	color: #75787B;\n"
"}"));
        btnNavSaveReport->setAutoDefault(false);

        horizontalLayout->addWidget(btnNavSaveReport);

        btnNavFromHistory = new QPushButton(navigationArea);
        btnNavFromHistory->setObjectName(QStringLiteral("btnNavFromHistory"));
        btnNavFromHistory->setMinimumSize(QSize(120, 25));
        btnNavFromHistory->setMaximumSize(QSize(16777215, 25));
        btnNavFromHistory->setStyleSheet(QLatin1String("QPushButton {\n"
"	border-radius: 2px; \n"
"	border: none;\n"
"	color: #006EB5;\n"
"	padding-left: 6px;\n"
"	padding-right: 6px;\n"
"}\n"
"QPushButton:pressed {\n"
"	color: #FFFFFF;\n"
"	background-color: #006EB5;\n"
"}\n"
"QPushButton:hover:!pressed {\n"
"	border: 1px solid #006EB5;\n"
"	padding-left: 5px;\n"
"	padding-right: 5px;\n"
"	color: #006EB5;\n"
"}\n"
"QPushButton:disabled {\n"
"	color: #75787B;\n"
"}"));
        btnNavFromHistory->setAutoDefault(false);

        horizontalLayout->addWidget(btnNavFromHistory);

        btnNavUseByDefault = new QPushButton(navigationArea);
        btnNavUseByDefault->setObjectName(QStringLiteral("btnNavUseByDefault"));
        btnNavUseByDefault->setMinimumSize(QSize(120, 25));
        btnNavUseByDefault->setMaximumSize(QSize(16777215, 25));
        btnNavUseByDefault->setStyleSheet(QLatin1String("QPushButton {\n"
"	border-radius: 2px; \n"
"	border: none;\n"
"	color: #006EB5;\n"
"	padding-left: 6px;\n"
"	padding-right: 6px;\n"
"}\n"
"QPushButton:pressed {\n"
"	color: #FFFFFF;\n"
"	background-color: #006EB5;\n"
"}\n"
"QPushButton:hover:!pressed {\n"
"	border: 1px solid #006EB5;\n"
"	padding-left: 5px;\n"
"	padding-right: 5px;\n"
"	color: #006EB5;\n"
"}\n"
"QPushButton:disabled {\n"
"	color: #75787B;\n"
"}"));
        btnNavUseByDefault->setAutoDefault(false);

        horizontalLayout->addWidget(btnNavUseByDefault);

        btnNavInstallManually = new QPushButton(navigationArea);
        btnNavInstallManually->setObjectName(QStringLiteral("btnNavInstallManually"));
        sizePolicy2.setHeightForWidth(btnNavInstallManually->sizePolicy().hasHeightForWidth());
        btnNavInstallManually->setSizePolicy(sizePolicy2);
        btnNavInstallManually->setMinimumSize(QSize(120, 25));
        btnNavInstallManually->setMaximumSize(QSize(16777215, 25));
        btnNavInstallManually->setStyleSheet(QLatin1String("QPushButton {\n"
"	border-radius: 2px; \n"
"	border: none;\n"
"	color: #006EB5;\n"
"	padding-left: 6px;\n"
"	padding-right: 6px;\n"
"}\n"
"QPushButton:pressed {\n"
"	color: #FFFFFF;\n"
"	background-color: #006EB5;\n"
"}\n"
"QPushButton:hover:!pressed {\n"
"	border: 1px solid #006EB5;\n"
"	padding-left: 5px;\n"
"	padding-right: 5px;\n"
"	color: #006EB5;\n"
"}\n"
"QPushButton:disabled {\n"
"	color: #75787B;\n"
"}"));
        btnNavInstallManually->setAutoDefault(false);

        horizontalLayout->addWidget(btnNavInstallManually);

        btnNavShowCertificate = new QPushButton(navigationArea);
        btnNavShowCertificate->setObjectName(QStringLiteral("btnNavShowCertificate"));
        sizePolicy2.setHeightForWidth(btnNavShowCertificate->sizePolicy().hasHeightForWidth());
        btnNavShowCertificate->setSizePolicy(sizePolicy2);
        btnNavShowCertificate->setMinimumSize(QSize(120, 25));
        btnNavShowCertificate->setMaximumSize(QSize(16777215, 25));
        btnNavShowCertificate->setStyleSheet(QLatin1String("QPushButton {\n"
"	border-radius: 2px; \n"
"	border: none;\n"
"	color: #006EB5;\n"
"	padding-left: 6px;\n"
"	padding-right: 6px;\n"
"}\n"
"QPushButton:pressed {\n"
"	color: #FFFFFF;\n"
"	background-color: #006EB5;\n"
"}\n"
"QPushButton:hover:!pressed {\n"
"	border: 1px solid #006EB5;\n"
"	padding-left: 5px;\n"
"	padding-right: 5px;\n"
"	color: #006EB5;\n"
"}\n"
"QPushButton:disabled {\n"
"	color: #75787B;\n"
"}"));
        btnNavShowCertificate->setAutoDefault(false);

        horizontalLayout->addWidget(btnNavShowCertificate);

        btNavClose = new QPushButton(navigationArea);
        btNavClose->setObjectName(QStringLiteral("btNavClose"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(btNavClose->sizePolicy().hasHeightForWidth());
        btNavClose->setSizePolicy(sizePolicy4);
        btNavClose->setMinimumSize(QSize(120, 30));
        btNavClose->setMaximumSize(QSize(120, 30));
        QFont font1;
        font1.setPointSize(14);
        btNavClose->setFont(font1);
        btNavClose->setStyleSheet(QLatin1String("QPushButton {\n"
"	border-radius: 2px; \n"
"	border: none;\n"
"	color: #ffffff;\n"
"	background-color: #006EB5;\n"
"	padding-left: 6px;\n"
"	padding-right: 6px;\n"
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
        btNavClose->setAutoDefault(false);

        horizontalLayout->addWidget(btNavClose);

        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(navigationArea);

        QWidget::setTabOrder(btnMenuGeneral, btnMenuSigning);
        QWidget::setTabOrder(btnMenuSigning, btnMenuCertificate);
        QWidget::setTabOrder(btnMenuCertificate, btnMenuProxy);
        QWidget::setTabOrder(btnMenuProxy, btnMenuDiagnostics);
        QWidget::setTabOrder(btnMenuDiagnostics, btnMenuInfo);
        QWidget::setTabOrder(btnMenuInfo, btNavFromFile);
        QWidget::setTabOrder(btNavFromFile, btnNavSaveReport);
        QWidget::setTabOrder(btnNavSaveReport, btnNavFromHistory);
        QWidget::setTabOrder(btnNavFromHistory, btnNavUseByDefault);
        QWidget::setTabOrder(btnNavUseByDefault, btnNavInstallManually);
        QWidget::setTabOrder(btnNavInstallManually, btnNavShowCertificate);
        QWidget::setTabOrder(btnNavShowCertificate, btNavClose);
        QWidget::setTabOrder(btNavClose, rdGeneralEstonian);
        QWidget::setTabOrder(rdGeneralEstonian, rdGeneralRussian);
        QWidget::setTabOrder(rdGeneralRussian, rdGeneralEnglish);
        QWidget::setTabOrder(rdGeneralEnglish, cmbGeneralCheckUpdatePeriod);
        QWidget::setTabOrder(cmbGeneralCheckUpdatePeriod, chkGeneralTslRefresh);
        QWidget::setTabOrder(chkGeneralTslRefresh, rdGeneralSameDirectory);
        QWidget::setTabOrder(rdGeneralSameDirectory, rdGeneralSpecifyDirectory);
        QWidget::setTabOrder(rdGeneralSpecifyDirectory, btGeneralChooseDirectory);
        QWidget::setTabOrder(btGeneralChooseDirectory, txtGeneralDirectory);
        QWidget::setTabOrder(txtGeneralDirectory, rdSigningAsice);
        QWidget::setTabOrder(rdSigningAsice, rdSigningBdoc);
        QWidget::setTabOrder(rdSigningBdoc, txtSigningRole);
        QWidget::setTabOrder(txtSigningRole, txtSigningCity);
        QWidget::setTabOrder(txtSigningCity, txtSigningCounty);
        QWidget::setTabOrder(txtSigningCounty, txtSigningCountry);
        QWidget::setTabOrder(txtSigningCountry, txtSigningZipCode);
        QWidget::setTabOrder(txtSigningZipCode, chkIgnoreAccessCert);
        QWidget::setTabOrder(chkIgnoreAccessCert, rdProxyNone);
        QWidget::setTabOrder(rdProxyNone, rdProxySystem);
        QWidget::setTabOrder(rdProxySystem, rdProxyManual);
        QWidget::setTabOrder(rdProxyManual, txtProxyHost);
        QWidget::setTabOrder(txtProxyHost, txtProxyPort);
        QWidget::setTabOrder(txtProxyPort, txtProxyUsername);
        QWidget::setTabOrder(txtProxyUsername, txtProxyPassword);
        QWidget::setTabOrder(txtProxyPassword, chkProxyEnableForSSL);
        QWidget::setTabOrder(chkProxyEnableForSSL, txtDiagnostics);
        QWidget::setTabOrder(txtDiagnostics, txtInfo);

        retranslateUi(SettingsDialog);

        stackedWidget->setCurrentIndex(0);
        btNavClose->setDefault(true);


        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        lblMenuSettings->setText(QApplication::translate("SettingsDialog", "Settings", Q_NULLPTR));
        btnMenuGeneral->setText(QApplication::translate("SettingsDialog", "GENERAL", Q_NULLPTR));
        btnMenuSigning->setText(QApplication::translate("SettingsDialog", "SIGNING", Q_NULLPTR));
        btnMenuCertificate->setText(QApplication::translate("SettingsDialog", "ACCESS CERTIFICATE", Q_NULLPTR));
        btnMenuProxy->setText(QApplication::translate("SettingsDialog", "PROXY", Q_NULLPTR));
        btnMenuDiagnostics->setText(QApplication::translate("SettingsDialog", "DIAGNOSTICS", Q_NULLPTR));
        btnMenuInfo->setText(QApplication::translate("SettingsDialog", "INFO", Q_NULLPTR));
        lblGeneralLang->setText(QApplication::translate("SettingsDialog", "Language", Q_NULLPTR));
        lblDefaultDirectory->setText(QApplication::translate("SettingsDialog", "Container default location", Q_NULLPTR));
        lblGeneralCheckUpdatePeriod->setText(QApplication::translate("SettingsDialog", "Check for updates", Q_NULLPTR));
        chkGeneralTslRefresh->setText(QApplication::translate("SettingsDialog", "Online TSL digest check", Q_NULLPTR));
        groupBox->setTitle(QString());
        rdGeneralEstonian->setText(QApplication::translate("SettingsDialog", "Eesti", Q_NULLPTR));
        rdGeneralEnglish->setText(QApplication::translate("SettingsDialog", "English", Q_NULLPTR));
        rdGeneralRussian->setText(QApplication::translate("SettingsDialog", "\320\240\321\203\321\201\321\201\320\272\320\270\320\271", Q_NULLPTR));
        rdGeneralSameDirectory->setText(QApplication::translate("SettingsDialog", "Same folder", Q_NULLPTR));
        rdGeneralSpecifyDirectory->setText(QApplication::translate("SettingsDialog", "Select the default directory", Q_NULLPTR));
        btGeneralChooseDirectory->setText(QApplication::translate("SettingsDialog", "...", Q_NULLPTR));
        lblSigningFileType->setText(QApplication::translate("SettingsDialog", "Default file type", Q_NULLPTR));
        groupBox_3->setTitle(QString());
        rdSigningAsice->setText(QApplication::translate("SettingsDialog", "ASiC-E \342\200\223 international digital signature format that will be used across European countries\n"
"", Q_NULLPTR));
        rdSigningBdoc->setText(QApplication::translate("SettingsDialog", "BDOC \342\200\223 default digital signature format in Estonia.", Q_NULLPTR));
        lblSigningExplained->setText(QApplication::translate("SettingsDialog", "If you want to change the digital signature format then it should be done before adding signable files to the container. Otherwise the document will be created in the previous default format. When adding signatures, it is no longer possible to change the format of the document.", Q_NULLPTR));
        lblSigningRole->setText(QApplication::translate("SettingsDialog", "Role", Q_NULLPTR));
        lblSigningAddress->setText(QApplication::translate("SettingsDialog", "Address", Q_NULLPTR));
        lblSigningCity->setText(QApplication::translate("SettingsDialog", "City", Q_NULLPTR));
        lblSigningCounty->setText(QApplication::translate("SettingsDialog", "State", Q_NULLPTR));
        lblSigningCountry->setText(QApplication::translate("SettingsDialog", "Country", Q_NULLPTR));
        lblSigningZipCode->setText(QApplication::translate("SettingsDialog", "Zip", Q_NULLPTR));
        txtAccessCert->setText(QString());
        chkIgnoreAccessCert->setText(QApplication::translate("SettingsDialog", "Ignore server access certificate (IP based access)", Q_NULLPTR));
        groupBox_4->setTitle(QString());
        rdProxyNone->setText(QApplication::translate("SettingsDialog", "No proxy", Q_NULLPTR));
        rdProxySystem->setText(QApplication::translate("SettingsDialog", "Use system proxy settings", Q_NULLPTR));
        rdProxyManual->setText(QApplication::translate("SettingsDialog", "Manual proxy configuration", Q_NULLPTR));
        lblProxyHost->setText(QApplication::translate("SettingsDialog", "Host", Q_NULLPTR));
        lblProxyPort->setText(QApplication::translate("SettingsDialog", "Port", Q_NULLPTR));
        lblProxyUsername->setText(QApplication::translate("SettingsDialog", "Username", Q_NULLPTR));
        lblProxyPassword->setText(QApplication::translate("SettingsDialog", "Password", Q_NULLPTR));
        chkProxyEnableForSSL->setText(QApplication::translate("SettingsDialog", "Enable proxy for SSL connections", Q_NULLPTR));
        txtDiagnostics->setHtml(QApplication::translate("SettingsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        txtInfo->setHtml(QApplication::translate("SettingsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Roboto'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Qt cross-platform application and UI framework</span><br />GNU Lesser General Public License (LGPL) version 2.1<br /><a href=\"https://www.qt.io/licensing/\"><span style=\" text-decoration: underline; color:#006eb5;\">https://www.qt.io/licensing/</span></a></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">The OpenSSL project</span><br />This product includes software developed by t"
                        "he OpenSSL Project for use in the OpenSSL Toolkit (http://www.openssl.org/)<br /><a href=\"http://www.openssl.org/source/license.html\"><span style=\" text-decoration: underline; color:#006eb5;\">http://www.openssl.org/source/license.html</span></a> </p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">OpenLDAP community developed LDAP software</span><br />The OpenLDAP Public License<br /><a href=\"http://www.openldap.org/software/release/license.html\"><span style=\" text-decoration: underline; color:#006eb5;\">http://www.openldap.org/software/release/license.html</span></a> </p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">libdigidoc</span><br />GNU Lesser General Public License (LGPL) version 2.1<br /><a href=\"http://www.gnu.org/licenses/old-license"
                        "s/lgpl-2.1.html\"><span style=\" text-decoration: underline; color:#006eb5;\">http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html</span></a> </p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">libdigidocpp</span><br />GNU Lesser General Public License (LGPL) version 2.1<br /><a href=\"http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html\"><span style=\" text-decoration: underline; color:#006eb5;\">http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html</span></a> </p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">qdigidoc</span><br />GNU Lesser General Public License (LGPL) version 2.1<br /><a href=\"http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html\"><span style=\" text-decoration: underline; color:#006eb5;\">http://www.gnu.org/licenses/old-l"
                        "icenses/lgpl-2.1.html</span></a> </p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">libxml The XML C parser and toolkit of Gnome</span><br />MIT License<br /><a href=\"http://www.opensource.org/licenses/mit-license.html\"><span style=\" text-decoration: underline; color:#006eb5;\">http://www.opensource.org/licenses/mit-license.html</span></a> </p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">zlib A Massively Spiffy Yet Delicately Unobtrusive Compression Library</span><br /><a href=\"http://zlib.net/zlib_license.html\"><span style=\" text-decoration: underline; color:#006eb5;\">http://zlib.net/zlib_license.html</span></a> </p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; t"
                        "ext-indent:0px;\"><span style=\" font-weight:600;\">Xerces-C++ is a validating XML parser written in a portable subset of C++</span><br />Apache Software License, Version 2.0<br /><a href=\"http://www.apache.org/licenses/LICENSE-2.0.html\"><span style=\" text-decoration: underline; color:#006eb5;\">http://www.apache.org/licenses/LICENSE-2.0.html</span></a> </p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Apache XML Security for C++</span><br />Apache Software License, Version 2.0<br /><a href=\"http://www.apache.org/licenses/LICENSE-2.0.html\"><span style=\" text-decoration: underline; color:#006eb5;\">http://www.apache.org/licenses/LICENSE-2.0.html</span></a> </p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">XSD: XML Data Binding for C++</span><br"
                        " />GNU General Public License (GPL), version 2<br />Free/Libre and Open Source Software (FLOSS) exception<br /><a href=\"http://www.codesynthesis.com/products/xsd/license.xhtml\"><span style=\" text-decoration: underline; color:#006eb5;\">http://www.codesynthesis.com/products/xsd/license.xhtml</span></a><br /><a href=\"http://www.codesynthesis.com/projects/xsd/FLOSSE\"><span style=\" text-decoration: underline; color:#006eb5;\">http://www.codesynthesis.com/projects/xsd/FLOSSE</span></a></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Roboto: Google\342\200\231s signature family of fonts</span><br />Apache Software License, Version 2.0<br /><a href=\"https://github.com/google/roboto/blob/master/LICENSE\"><span style=\" text-decoration: underline; color:#006eb5;\">https://github.com/google/roboto/blob/master/LICENSE</span></a> </p></body></html>", Q_NULLPTR));
        contact->setText(QApplication::translate("SettingsDialog", "<p>Estonian ID-software is released by Information Systems's Authority<br />\n"
"Contact for assistance by email <a href=\"mailto:abi@id.ee\">abi@id.ee</a> or call 1777 (only from Estonia), (+372) 677 3377 when calling from abroad.</p>\n"
"Additional licenses and components", Q_NULLPTR));
        txtNavVersion->setText(QApplication::translate("SettingsDialog", "<b>DigiDoc4</b> klient 4.0.1.0", Q_NULLPTR));
        btnFirstRun->setText(QApplication::translate("SettingsDialog", "FIRST RUN", Q_NULLPTR));
        btnCheckConnection->setText(QApplication::translate("SettingsDialog", "CHECK CONNECTIONS", Q_NULLPTR));
        btNavFromFile->setText(QApplication::translate("SettingsDialog", "CHECK FOR UPDATES", Q_NULLPTR));
        btnNavSaveReport->setText(QApplication::translate("SettingsDialog", "SAVE DIAGNOSTICS REPORT TO DISK", Q_NULLPTR));
        btnNavFromHistory->setText(QApplication::translate("SettingsDialog", "REMOVE OLD CERTIFICATES", Q_NULLPTR));
        btnNavUseByDefault->setText(QApplication::translate("SettingsDialog", "USE DEFAULT", Q_NULLPTR));
        btnNavInstallManually->setText(QApplication::translate("SettingsDialog", "INSTALL MANUALLY", Q_NULLPTR));
        btnNavShowCertificate->setText(QApplication::translate("SettingsDialog", "SHOW CERTIFICATE", Q_NULLPTR));
        btNavClose->setText(QApplication::translate("SettingsDialog", "CLOSE", Q_NULLPTR));
        Q_UNUSED(SettingsDialog);
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
