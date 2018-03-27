/********************************************************************************
** Form generated from reading UI file 'Updater.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATER_H
#define UI_UPDATER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Updater
{
public:
    QVBoxLayout *UpdaterLayout;
    QStackedWidget *stackedWidget;
    QWidget *processPage;
    QVBoxLayout *processPageLayout;
    QLabel *label;
    QProgressBar *progressBar;
    QPlainTextEdit *log;
    QLabel *progressRunning;
    QWidget *pageMessage;
    QVBoxLayout *pageMessageLayout;
    QLabel *lblHeader;
    QLabel *message;
    QCheckBox *messageAgree;
    QWidget *envelopePage;
    QVBoxLayout *envelopePageLayout;
    QLabel *envelopeLabel;
    QLabel *envelope;
    QCheckBox *envelopeAgree;
    QWidget *pinPage;
    QVBoxLayout *pinPageLayout;
    QSpacerItem *pinBottomSpacer;
    QLabel *pinLabel;
    QHBoxLayout *pinLayout;
    QSpacerItem *pinLeftSpacer;
    QLabel *pinType;
    QLineEdit *pinInput;
    QSpacerItem *pinRightSpacer;
    QProgressBar *pinProgress;
    QSpacerItem *pinTopSpacer;
    QFrame *line;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Updater)
    {
        if (Updater->objectName().isEmpty())
            Updater->setObjectName(QStringLiteral("Updater"));
        Updater->resize(438, 363);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Updater->sizePolicy().hasHeightForWidth());
        Updater->setSizePolicy(sizePolicy);
        Updater->setStyleSheet(QLatin1String("QDialog\n"
"{\n"
"border-radius: 2px;\n"
"background-color: #FFFFFF;\n"
"}"));
        UpdaterLayout = new QVBoxLayout(Updater);
        UpdaterLayout->setObjectName(QStringLiteral("UpdaterLayout"));
        stackedWidget = new QStackedWidget(Updater);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        processPage = new QWidget();
        processPage->setObjectName(QStringLiteral("processPage"));
        processPageLayout = new QVBoxLayout(processPage);
        processPageLayout->setObjectName(QStringLiteral("processPageLayout"));
        processPageLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(processPage);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(0, 40));
        label->setWordWrap(true);
        label->setOpenExternalLinks(true);

        processPageLayout->addWidget(label);

        progressBar = new QProgressBar(processPage);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMaximum(0);
        progressBar->setTextVisible(false);

        processPageLayout->addWidget(progressBar);

        log = new QPlainTextEdit(processPage);
        log->setObjectName(QStringLiteral("log"));
        log->setStyleSheet(QLatin1String("QPlainTextEdit {\n"
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
        log->setUndoRedoEnabled(false);
        log->setReadOnly(true);

        processPageLayout->addWidget(log);

        progressRunning = new QLabel(processPage);
        progressRunning->setObjectName(QStringLiteral("progressRunning"));
        progressRunning->setWordWrap(true);

        processPageLayout->addWidget(progressRunning);

        processPageLayout->setStretch(3, 1);
        stackedWidget->addWidget(processPage);
        pageMessage = new QWidget();
        pageMessage->setObjectName(QStringLiteral("pageMessage"));
        pageMessageLayout = new QVBoxLayout(pageMessage);
        pageMessageLayout->setObjectName(QStringLiteral("pageMessageLayout"));
        pageMessageLayout->setContentsMargins(0, 0, 0, 0);
        lblHeader = new QLabel(pageMessage);
        lblHeader->setObjectName(QStringLiteral("lblHeader"));
        lblHeader->setMinimumSize(QSize(0, 0));
        lblHeader->setMaximumSize(QSize(16777215, 20));
        lblHeader->setStyleSheet(QLatin1String("font-family: Open Sans;\n"
"font-size: 16px;\n"
"color: #000000;\n"
"font-weight: 700;\n"
""));
        lblHeader->setAlignment(Qt::AlignCenter);

        pageMessageLayout->addWidget(lblHeader);

        message = new QLabel(pageMessage);
        message->setObjectName(QStringLiteral("message"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(message->sizePolicy().hasHeightForWidth());
        message->setSizePolicy(sizePolicy1);
        message->setMinimumSize(QSize(420, 195));
        message->setMaximumSize(QSize(420, 300));
        message->setWordWrap(true);
        message->setOpenExternalLinks(true);

        pageMessageLayout->addWidget(message);

        messageAgree = new QCheckBox(pageMessage);
        messageAgree->setObjectName(QStringLiteral("messageAgree"));
        sizePolicy1.setHeightForWidth(messageAgree->sizePolicy().hasHeightForWidth());
        messageAgree->setSizePolicy(sizePolicy1);
        messageAgree->setMinimumSize(QSize(0, 20));
        messageAgree->setMaximumSize(QSize(16777215, 20));
        messageAgree->setLayoutDirection(Qt::LeftToRight);
        messageAgree->setStyleSheet(QStringLiteral(""));
        messageAgree->setTristate(false);

        pageMessageLayout->addWidget(messageAgree);

        stackedWidget->addWidget(pageMessage);
        envelopePage = new QWidget();
        envelopePage->setObjectName(QStringLiteral("envelopePage"));
        envelopePageLayout = new QVBoxLayout(envelopePage);
        envelopePageLayout->setObjectName(QStringLiteral("envelopePageLayout"));
        envelopePageLayout->setContentsMargins(0, 0, 0, 0);
        envelopeLabel = new QLabel(envelopePage);
        envelopeLabel->setObjectName(QStringLiteral("envelopeLabel"));

        envelopePageLayout->addWidget(envelopeLabel);

        envelope = new QLabel(envelopePage);
        envelope->setObjectName(QStringLiteral("envelope"));

        envelopePageLayout->addWidget(envelope);

        envelopeAgree = new QCheckBox(envelopePage);
        envelopeAgree->setObjectName(QStringLiteral("envelopeAgree"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(envelopeAgree->sizePolicy().hasHeightForWidth());
        envelopeAgree->setSizePolicy(sizePolicy2);
        envelopeAgree->setLayoutDirection(Qt::RightToLeft);

        envelopePageLayout->addWidget(envelopeAgree);

        envelopePageLayout->setStretch(1, 1);
        stackedWidget->addWidget(envelopePage);
        pinPage = new QWidget();
        pinPage->setObjectName(QStringLiteral("pinPage"));
        pinPageLayout = new QVBoxLayout(pinPage);
        pinPageLayout->setObjectName(QStringLiteral("pinPageLayout"));
        pinPageLayout->setContentsMargins(0, 0, 0, 0);
        pinBottomSpacer = new QSpacerItem(20, 63, QSizePolicy::Minimum, QSizePolicy::Expanding);

        pinPageLayout->addItem(pinBottomSpacer);

        pinLabel = new QLabel(pinPage);
        pinLabel->setObjectName(QStringLiteral("pinLabel"));
        pinLabel->setStyleSheet(QLatin1String("font-size: 16px;\n"
"color: #000000;\n"
"\n"
""));
        pinLabel->setAlignment(Qt::AlignCenter);

        pinPageLayout->addWidget(pinLabel);

        pinLayout = new QHBoxLayout();
        pinLayout->setObjectName(QStringLiteral("pinLayout"));
        pinLeftSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        pinLayout->addItem(pinLeftSpacer);

        pinType = new QLabel(pinPage);
        pinType->setObjectName(QStringLiteral("pinType"));
        pinType->setStyleSheet(QLatin1String("font-size: 16px;\n"
"color: #000000;\n"
""));

        pinLayout->addWidget(pinType);

        pinInput = new QLineEdit(pinPage);
        pinInput->setObjectName(QStringLiteral("pinInput"));
        pinInput->setMinimumSize(QSize(0, 34));
        pinInput->setMaximumSize(QSize(16777215, 34));
        QFont font;
        font.setPointSize(11);
        pinInput->setFont(font);
        pinInput->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"padding: 0px 10px;\n"
"border: 1px solid #DEE4E9;\n"
"border-radius: 2px;\n"
"}"));
        pinInput->setMaxLength(12);
        pinInput->setEchoMode(QLineEdit::Password);

        pinLayout->addWidget(pinInput);

        pinRightSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        pinLayout->addItem(pinRightSpacer);


        pinPageLayout->addLayout(pinLayout);

        pinProgress = new QProgressBar(pinPage);
        pinProgress->setObjectName(QStringLiteral("pinProgress"));
        pinProgress->setMaximum(30);
        pinProgress->setValue(30);
        pinProgress->setTextVisible(false);

        pinPageLayout->addWidget(pinProgress);

        pinTopSpacer = new QSpacerItem(20, 63, QSizePolicy::Minimum, QSizePolicy::Expanding);

        pinPageLayout->addItem(pinTopSpacer);

        stackedWidget->addWidget(pinPage);

        UpdaterLayout->addWidget(stackedWidget);

        line = new QFrame(Updater);
        line->setObjectName(QStringLiteral("line"));
        line->setEnabled(true);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        UpdaterLayout->addWidget(line);

        buttonBox = new QDialogButtonBox(Updater);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        sizePolicy1.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy1);
        buttonBox->setMinimumSize(QSize(0, 45));
        buttonBox->setMaximumSize(QSize(16777215, 45));
        QFont font1;
        font1.setPointSize(14);
        buttonBox->setFont(font1);
        buttonBox->setCursor(QCursor(Qt::PointingHandCursor));
        buttonBox->setFocusPolicy(Qt::StrongFocus);
        buttonBox->setStyleSheet(QStringLiteral(""));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);
        buttonBox->setCenterButtons(true);

        UpdaterLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        pinLabel->setBuddy(pinInput);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(pinInput, buttonBox);
        QWidget::setTabOrder(buttonBox, log);
        QWidget::setTabOrder(log, messageAgree);
        QWidget::setTabOrder(messageAgree, envelopeAgree);

        retranslateUi(Updater);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Updater);
    } // setupUi

    void retranslateUi(QDialog *Updater)
    {
        Updater->setWindowTitle(QApplication::translate("Updater", "Certificate update", Q_NULLPTR));
        progressRunning->setText(QApplication::translate("Updater", "Update in progress. The process may take up to 10 minutes. Do not remove the card from reader!", Q_NULLPTR));
        lblHeader->setText(QApplication::translate("Updater", "Certificate renewal", Q_NULLPTR));
        messageAgree->setText(QApplication::translate("Updater", "I agree to the terms of use of certificates.", Q_NULLPTR));
        envelopeAgree->setText(QApplication::translate("Updater", "I confirm I have saved new PIN1, PIN2 and PUK code.", Q_NULLPTR));
        pinLabel->setText(QApplication::translate("Updater", "Enter PIN", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Updater: public Ui_Updater {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATER_H
