/********************************************************************************
** Form generated from reading UI file 'OtherData.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OTHERDATA_H
#define UI_OTHERDATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OtherData
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QPushButton *btnCheckEMail;
    QLabel *lblEMail;
    QWidget *activateEMail;
    QVBoxLayout *verticalLayout;
    QLabel *lblNoForwarding;
    QLineEdit *inputEMail;
    QPushButton *activate;
    QSpacerItem *verticalSpacer;
    QLabel *labelEestiEe;

    void setupUi(QWidget *OtherData)
    {
        if (OtherData->objectName().isEmpty())
            OtherData->setObjectName(QStringLiteral("OtherData"));
        OtherData->resize(863, 304);
        OtherData->setStyleSheet(QLatin1String("background-color: white;\n"
"border: solid #DFE5E9;\n"
"border-width: 1px 0px 0px 0px; "));
        verticalLayout_2 = new QVBoxLayout(OtherData);
        verticalLayout_2->setSpacing(9);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(OtherData);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Roboto"));
        font.setPointSize(14);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("border: none;\n"
"color: #353739;"));

        verticalLayout_2->addWidget(label);

        btnCheckEMail = new QPushButton(OtherData);
        btnCheckEMail->setObjectName(QStringLiteral("btnCheckEMail"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnCheckEMail->sizePolicy().hasHeightForWidth());
        btnCheckEMail->setSizePolicy(sizePolicy);
        btnCheckEMail->setMinimumSize(QSize(267, 0));
        QFont font1;
        font1.setFamily(QStringLiteral("Roboto Condensed"));
        font1.setPointSize(14);
        btnCheckEMail->setFont(font1);
        btnCheckEMail->setStyleSheet(QLatin1String("QPushButton { padding: 6px 9px; border-radius: 2px; border: 1px solid #006EB5; color: #006EB5; background-color: #FFFFFF;}\n"
"QPushButton:pressed {  border: none; background-color: #006EB5; color: #FFFFFF;}\n"
"QPushButton:hover:!pressed { border: 1px solid #008DCF; color: #008DCF;}\n"
"QPushButton:disabled { border: 1px solid #BEDBED; color: #BEDBED;};\n"
""));

        verticalLayout_2->addWidget(btnCheckEMail);

        lblEMail = new QLabel(OtherData);
        lblEMail->setObjectName(QStringLiteral("lblEMail"));
        QFont font2;
        font2.setFamily(QStringLiteral("Roboto"));
        lblEMail->setFont(font2);
        lblEMail->setStyleSheet(QLatin1String("border: none;\n"
"color: #353739;"));

        verticalLayout_2->addWidget(lblEMail);

        activateEMail = new QWidget(OtherData);
        activateEMail->setObjectName(QStringLiteral("activateEMail"));
        activateEMail->setMinimumSize(QSize(0, 0));
        verticalLayout = new QVBoxLayout(activateEMail);
        verticalLayout->setSpacing(9);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lblNoForwarding = new QLabel(activateEMail);
        lblNoForwarding->setObjectName(QStringLiteral("lblNoForwarding"));
        lblNoForwarding->setFont(font2);
        lblNoForwarding->setStyleSheet(QLatin1String("border: none;\n"
"color: #353739;"));
        lblNoForwarding->setWordWrap(true);

        verticalLayout->addWidget(lblNoForwarding);

        inputEMail = new QLineEdit(activateEMail);
        inputEMail->setObjectName(QStringLiteral("inputEMail"));
        sizePolicy.setHeightForWidth(inputEMail->sizePolicy().hasHeightForWidth());
        inputEMail->setSizePolicy(sizePolicy);
        inputEMail->setMinimumSize(QSize(300, 30));
        inputEMail->setStyleSheet(QLatin1String("border: 1px solid #c8c8c8;\n"
"font-size: 14px;\n"
"color: #000000;\n"
"font-weight: 400;\n"
"text-decoration: underline;\n"
""));

        verticalLayout->addWidget(inputEMail);

        activate = new QPushButton(activateEMail);
        activate->setObjectName(QStringLiteral("activate"));
        activate->setMinimumSize(QSize(220, 0));
        activate->setMaximumSize(QSize(220, 16777215));
        activate->setFont(font1);
        activate->setStyleSheet(QLatin1String("QPushButton { padding: 6px 9px; border-radius: 2px; border: 1px solid #006EB5; color: #006EB5; background-color: #FFFFFF;}\n"
"QPushButton:pressed { border: 1px solid #41B6E6; color: #41B6E6;}\n"
"QPushButton:hover:!pressed { border: 1px solid #008DCF; color: #008DCF;}\n"
"QPushButton:disabled { border: 1px solid #BEDBED; color: #BEDBED;};\n"
""));

        verticalLayout->addWidget(activate);


        verticalLayout_2->addWidget(activateEMail);

        verticalSpacer = new QSpacerItem(20, 106, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        labelEestiEe = new QLabel(OtherData);
        labelEestiEe->setObjectName(QStringLiteral("labelEestiEe"));
        QFont font3;
        font3.setFamily(QStringLiteral("Roboto"));
        font3.setPointSize(12);
        labelEestiEe->setFont(font3);
        labelEestiEe->setStyleSheet(QLatin1String("border: none;\n"
"color: #75787B;"));
        labelEestiEe->setOpenExternalLinks(true);
        labelEestiEe->setTextInteractionFlags(Qt::TextBrowserInteraction);

        verticalLayout_2->addWidget(labelEestiEe);


        retranslateUi(OtherData);

        QMetaObject::connectSlotsByName(OtherData);
    } // setupUi

    void retranslateUi(QWidget *OtherData)
    {
        OtherData->setWindowTitle(QApplication::translate("OtherData", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("OtherData", "@eesti.ee post", Q_NULLPTR));
        btnCheckEMail->setText(QApplication::translate("OtherData", "CHECK @EESTI.EE E-MAIL STATUS", Q_NULLPTR));
        lblEMail->setText(QApplication::translate("OtherData", "TextLabel", Q_NULLPTR));
        lblNoForwarding->setText(QApplication::translate("OtherData", "No official email redirects found. To send email to @eesti.ee, please enter your email address:", Q_NULLPTR));
        activate->setText(QApplication::translate("OtherData", "ACTIVATE REDIRECTION", Q_NULLPTR));
        labelEestiEe->setText(QApplication::translate("OtherData", "For more detailed official email address forwarding, please visit <a href='http://www.eesti.ee'><span style='color: #006EB5; text-decoration: none; font-weight: 900;'>eesti.ee</span></a>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OtherData: public Ui_OtherData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OTHERDATA_H
