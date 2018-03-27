/********************************************************************************
** Form generated from reading UI file 'MobileDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOBILEDIALOG_H
#define UI_MOBILEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MobileDialog
{
public:
    QPushButton *cancel;
    QPushButton *sign;
    QLineEdit *phoneNo;
    QLabel *labelPhone;
    QLabel *labelNameId;
    QCheckBox *cbRemember;
    QLabel *labelIdCode;
    QLineEdit *idCode;

    void setupUi(QDialog *MobileDialog)
    {
        if (MobileDialog->objectName().isEmpty())
            MobileDialog->setObjectName(QStringLiteral("MobileDialog"));
        MobileDialog->resize(380, 282);
        MobileDialog->setStyleSheet(QLatin1String("QDialog\n"
"{\n"
"border-radius: 2px;\n"
"background-color: #FFFFFF;\n"
"}"));
        cancel = new QPushButton(MobileDialog);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setEnabled(true);
        cancel->setGeometry(QRect(50, 218, 120, 32));
        cancel->setMinimumSize(QSize(120, 30));
        QFont font;
        font.setPointSize(14);
        cancel->setFont(font);
        cancel->setCursor(QCursor(Qt::PointingHandCursor));
        cancel->setStyleSheet(QLatin1String("QPushButton {\n"
"	border-radius: 2px; \n"
"	border: none;\n"
"	color: #ffffff;\n"
"	background-color: #981E32;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: #F24A66;\n"
"}\n"
"QPushButton:hover:!pressed {\n"
"	background-color: #CD2541;\n"
"}"));
        cancel->setAutoDefault(false);
        sign = new QPushButton(MobileDialog);
        sign->setObjectName(QStringLiteral("sign"));
        sign->setEnabled(false);
        sign->setGeometry(QRect(210, 218, 120, 32));
        sign->setMinimumSize(QSize(120, 30));
        sign->setFont(font);
        sign->setStyleSheet(QLatin1String("QPushButton {\n"
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
        phoneNo = new QLineEdit(MobileDialog);
        phoneNo->setObjectName(QStringLiteral("phoneNo"));
        phoneNo->setGeometry(QRect(50, 76, 280, 34));
        phoneNo->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"padding: 0px 10px;\n"
"border: 1px solid #DEE4E9;\n"
"border-radius: 2px;\n"
"}\n"
""));
        phoneNo->setEchoMode(QLineEdit::Normal);
        labelPhone = new QLabel(MobileDialog);
        labelPhone->setObjectName(QStringLiteral("labelPhone"));
        labelPhone->setGeometry(QRect(50, 60, 241, 16));
        QFont font1;
        font1.setFamily(QStringLiteral("Roboto Condensed"));
        font1.setPointSize(12);
        labelPhone->setFont(font1);
        labelPhone->setStyleSheet(QStringLiteral("color: #353739;"));
        labelNameId = new QLabel(MobileDialog);
        labelNameId->setObjectName(QStringLiteral("labelNameId"));
        labelNameId->setGeometry(QRect(10, 8, 360, 38));
        labelNameId->setFont(font);
        labelNameId->setStyleSheet(QStringLiteral("color: #041E42; border: none;"));
        labelNameId->setAlignment(Qt::AlignCenter);
        cbRemember = new QCheckBox(MobileDialog);
        cbRemember->setObjectName(QStringLiteral("cbRemember"));
        cbRemember->setGeometry(QRect(50, 181, 241, 20));
        cbRemember->setStyleSheet(QLatin1String("color: #353739;\n"
"QCheckBox::indicator {\n"
"    width: 6px;\n"
"    height: 6px;\n"
"}"));
        labelIdCode = new QLabel(MobileDialog);
        labelIdCode->setObjectName(QStringLiteral("labelIdCode"));
        labelIdCode->setGeometry(QRect(50, 118, 241, 16));
        labelIdCode->setFont(font1);
        labelIdCode->setStyleSheet(QStringLiteral("color: #353739;"));
        idCode = new QLineEdit(MobileDialog);
        idCode->setObjectName(QStringLiteral("idCode"));
        idCode->setGeometry(QRect(50, 134, 280, 34));
        idCode->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"padding: 0px 10px;\n"
"border: 1px solid #DEE4E9;\n"
"border-radius: 2px;\n"
"}"));
        idCode->setEchoMode(QLineEdit::Normal);
        QWidget::setTabOrder(phoneNo, idCode);
        QWidget::setTabOrder(idCode, cbRemember);
        QWidget::setTabOrder(cbRemember, cancel);
        QWidget::setTabOrder(cancel, sign);

        retranslateUi(MobileDialog);

        sign->setDefault(true);


        QMetaObject::connectSlotsByName(MobileDialog);
    } // setupUi

    void retranslateUi(QDialog *MobileDialog)
    {
        MobileDialog->setWindowTitle(QApplication::translate("MobileDialog", "Dialog", Q_NULLPTR));
        cancel->setText(QApplication::translate("MobileDialog", "CANCEL", Q_NULLPTR));
        sign->setText(QApplication::translate("MobileDialog", "SIGN", Q_NULLPTR));
        phoneNo->setText(QString());
        phoneNo->setPlaceholderText(QApplication::translate("MobileDialog", "37254321", Q_NULLPTR));
        labelPhone->setText(QApplication::translate("MobileDialog", "COUNTRY CODE AND PHONE NUMBER", Q_NULLPTR));
        labelNameId->setText(QApplication::translate("MobileDialog", "Enter your phone number to sign with Mobile ID", Q_NULLPTR));
        cbRemember->setText(QApplication::translate("MobileDialog", "Remember me", Q_NULLPTR));
        labelIdCode->setText(QApplication::translate("MobileDialog", "PERSONAL CODE", Q_NULLPTR));
        idCode->setText(QString());
        idCode->setPlaceholderText(QApplication::translate("MobileDialog", "47101010033", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MobileDialog: public Ui_MobileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOBILEDIALOG_H
