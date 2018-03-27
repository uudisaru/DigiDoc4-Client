/********************************************************************************
** Form generated from reading UI file 'PinPopup.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PINPOPUP_H
#define UI_PINPOPUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_PinPopup
{
public:
    QLabel *labelNameId;
    QLabel *label;
    QLineEdit *pin;
    QPushButton *cancel;
    QPushButton *ok;

    void setupUi(QDialog *PinPopup)
    {
        if (PinPopup->objectName().isEmpty())
            PinPopup->setObjectName(QStringLiteral("PinPopup"));
        PinPopup->setWindowModality(Qt::ApplicationModal);
        PinPopup->resize(507, 232);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PinPopup->sizePolicy().hasHeightForWidth());
        PinPopup->setSizePolicy(sizePolicy);
        PinPopup->setMinimumSize(QSize(507, 232));
        PinPopup->setMaximumSize(QSize(507, 300));
        PinPopup->setStyleSheet(QLatin1String("QDialog\n"
"{\n"
"border-radius: 2px;\n"
"background-color: #FFFFFF;\n"
"}"));
        labelNameId = new QLabel(PinPopup);
        labelNameId->setObjectName(QStringLiteral("labelNameId"));
        labelNameId->setGeometry(QRect(103, 11, 300, 16));
        QFont font;
        font.setPointSize(14);
        labelNameId->setFont(font);
        labelNameId->setStyleSheet(QStringLiteral("color: #000000; border: none;"));
        labelNameId->setAlignment(Qt::AlignCenter);
        label = new QLabel(PinPopup);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 49, 426, 51));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(426, 35));
        label->setMaximumSize(QSize(426, 60));
        label->setStyleSheet(QLatin1String("color: #000000;\n"
"line-height: 15px;\n"
"border: none;"));
        label->setAlignment(Qt::AlignCenter);
        pin = new QLineEdit(PinPopup);
        pin->setObjectName(QStringLiteral("pin"));
        pin->setGeometry(QRect(182, 122, 141, 30));
        pin->setMinimumSize(QSize(123, 30));
        QFont font1;
        font1.setPointSize(11);
        pin->setFont(font1);
        pin->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"padding: 0px 10px;\n"
"border: 1px solid #DEE4E9;\n"
"border-radius: 2px;\n"
"background-color: #ffffff;\n"
"color: #000000;\n"
"line-height: 9px;\n"
"text-align: center;\n"
"}"));
        pin->setEchoMode(QLineEdit::Password);
        pin->setAlignment(Qt::AlignCenter);
        cancel = new QPushButton(PinPopup);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setEnabled(true);
        cancel->setGeometry(QRect(126, 172, 120, 32));
        cancel->setMinimumSize(QSize(120, 30));
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
        ok = new QPushButton(PinPopup);
        ok->setObjectName(QStringLiteral("ok"));
        ok->setEnabled(false);
        ok->setGeometry(QRect(261, 172, 120, 32));
        ok->setMinimumSize(QSize(120, 30));
        ok->setFont(font);
        ok->setStyleSheet(QLatin1String("QPushButton {\n"
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

        retranslateUi(PinPopup);

        ok->setDefault(true);


        QMetaObject::connectSlotsByName(PinPopup);
    } // setupUi

    void retranslateUi(QDialog *PinPopup)
    {
        PinPopup->setWindowTitle(QApplication::translate("PinPopup", "Dialog", Q_NULLPTR));
        labelNameId->setText(QApplication::translate("PinPopup", "<b>Mari Maasikas,</b> 48405050123", Q_NULLPTR));
        label->setText(QApplication::translate("PinPopup", "You need to use a personal identification certificate for the selected activity. Enter PIN1 to use the certificate", Q_NULLPTR));
        cancel->setText(QApplication::translate("PinPopup", "CANCEL", Q_NULLPTR));
        ok->setText(QApplication::translate("PinPopup", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PinPopup: public Ui_PinPopup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PINPOPUP_H
