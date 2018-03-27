/********************************************************************************
** Form generated from reading UI file 'PinUnblock.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PINUNBLOCK_H
#define UI_PINUNBLOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PinUnblock
{
public:
    QPushButton *cancel;
    QPushButton *unblock;
    QLabel *labelNameId;
    QLabel *label;
    QWidget *widgetLabelPuk;
    QHBoxLayout *horizontalLayout;
    QLabel *labelPuk;
    QWidget *iconLabelPuk;
    QSpacerItem *spacerLabelPuk;
    QLineEdit *puk;
    QWidget *widgetLabelPin;
    QHBoxLayout *horizontalLayout2;
    QLabel *labelPin;
    QWidget *iconLabelPin;
    QSpacerItem *spacerLabelPin;
    QLineEdit *pin;
    QWidget *widgetLabelRepeat;
    QHBoxLayout *horizontalLayout3;
    QLabel *labelRepeat;
    QWidget *iconLabelRepeat;
    QSpacerItem *spacerLabelRepeat;
    QLineEdit *repeat;
    QLabel *labelAttemptsLeft;

    void setupUi(QDialog *PinUnblock)
    {
        if (PinUnblock->objectName().isEmpty())
            PinUnblock->setObjectName(QStringLiteral("PinUnblock"));
        PinUnblock->resize(460, 464);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PinUnblock->sizePolicy().hasHeightForWidth());
        PinUnblock->setSizePolicy(sizePolicy);
        PinUnblock->setMinimumSize(QSize(460, 464));
        PinUnblock->setStyleSheet(QLatin1String("QDialog\n"
"{\n"
"   border-radius: 2px;\n"
"   background-color: #FFFFFF;\n"
"}"));
        cancel = new QPushButton(PinUnblock);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setGeometry(QRect(90, 404, 120, 34));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cancel->sizePolicy().hasHeightForWidth());
        cancel->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QStringLiteral("Roboto Condensed"));
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
        unblock = new QPushButton(PinUnblock);
        unblock->setObjectName(QStringLiteral("unblock"));
        unblock->setGeometry(QRect(250, 404, 120, 34));
        unblock->setFont(font);
        unblock->setCursor(QCursor(Qt::PointingHandCursor));
        unblock->setStyleSheet(QLatin1String("QPushButton {\n"
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
        unblock->setAutoDefault(false);
        labelNameId = new QLabel(PinUnblock);
        labelNameId->setObjectName(QStringLiteral("labelNameId"));
        labelNameId->setGeometry(QRect(108, 10, 245, 24));
        QFont font1;
        font1.setFamily(QStringLiteral("Roboto"));
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setWeight(50);
        labelNameId->setFont(font1);
        labelNameId->setStyleSheet(QLatin1String("border: none;\n"
"color: #041E42;\n"
"line-height: 24px;\n"
"text-align: center;"));
        labelNameId->setAlignment(Qt::AlignCenter);
        label = new QLabel(PinUnblock);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 60, 430, 150));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        QFont font2;
        font2.setFamily(QStringLiteral("Roboto"));
        font2.setPointSize(14);
        label->setFont(font2);
        label->setStyleSheet(QLatin1String("border: none;\n"
"color: #353739;\n"
"line-height: 16px;"));
        label->setOpenExternalLinks(true);
        label->setTextInteractionFlags(Qt::TextBrowserInteraction);
        widgetLabelPuk = new QWidget(PinUnblock);
        widgetLabelPuk->setObjectName(QStringLiteral("widgetLabelPuk"));
        widgetLabelPuk->setGeometry(QRect(91, 214, 279, 16));
        widgetLabelPuk->setStyleSheet(QStringLiteral("border: none;"));
        horizontalLayout = new QHBoxLayout(widgetLabelPuk);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labelPuk = new QLabel(widgetLabelPuk);
        labelPuk->setObjectName(QStringLiteral("labelPuk"));
        QFont font3;
        font3.setFamily(QStringLiteral("Roboto Condensed"));
        font3.setPointSize(12);
        labelPuk->setFont(font3);
        labelPuk->setStyleSheet(QStringLiteral("color: #353739;"));

        horizontalLayout->addWidget(labelPuk);

        iconLabelPuk = new QWidget(widgetLabelPuk);
        iconLabelPuk->setObjectName(QStringLiteral("iconLabelPuk"));
        sizePolicy1.setHeightForWidth(iconLabelPuk->sizePolicy().hasHeightForWidth());
        iconLabelPuk->setSizePolicy(sizePolicy1);
        iconLabelPuk->setMinimumSize(QSize(15, 15));

        horizontalLayout->addWidget(iconLabelPuk);

        spacerLabelPuk = new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacerLabelPuk);

        puk = new QLineEdit(PinUnblock);
        puk->setObjectName(QStringLiteral("puk"));
        puk->setGeometry(QRect(91, 230, 279, 34));
        puk->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"border: 1px solid #DEE4E9;\n"
"border-radius: 2px;\n"
"padding: 0px 10px;\n"
"background-color: #ffffff;\n"
"font-size: 16px;\n"
"color: #000000;\n"
"font-weight: 400;\n"
"line-height: 14px;\n"
"}"));
        puk->setEchoMode(QLineEdit::Password);
        widgetLabelPin = new QWidget(PinUnblock);
        widgetLabelPin->setObjectName(QStringLiteral("widgetLabelPin"));
        widgetLabelPin->setGeometry(QRect(91, 274, 279, 16));
        widgetLabelPin->setStyleSheet(QStringLiteral("border: none;"));
        horizontalLayout2 = new QHBoxLayout(widgetLabelPin);
        horizontalLayout2->setSpacing(2);
        horizontalLayout2->setObjectName(QStringLiteral("horizontalLayout2"));
        horizontalLayout2->setContentsMargins(0, 0, 0, 0);
        labelPin = new QLabel(widgetLabelPin);
        labelPin->setObjectName(QStringLiteral("labelPin"));
        labelPin->setFont(font3);
        labelPin->setStyleSheet(QStringLiteral("color: #353739;"));

        horizontalLayout2->addWidget(labelPin);

        iconLabelPin = new QWidget(widgetLabelPin);
        iconLabelPin->setObjectName(QStringLiteral("iconLabelPin"));
        sizePolicy1.setHeightForWidth(iconLabelPin->sizePolicy().hasHeightForWidth());
        iconLabelPin->setSizePolicy(sizePolicy1);
        iconLabelPin->setMinimumSize(QSize(15, 15));

        horizontalLayout2->addWidget(iconLabelPin);

        spacerLabelPin = new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout2->addItem(spacerLabelPin);

        pin = new QLineEdit(PinUnblock);
        pin->setObjectName(QStringLiteral("pin"));
        pin->setGeometry(QRect(91, 290, 279, 34));
        pin->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"border: 1px solid #DEE4E9;\n"
"border-radius: 2px;\n"
"padding: 0px 10px;\n"
"background-color: #ffffff;\n"
"font-size: 16px;\n"
"color: #000000;\n"
"font-weight: 400;\n"
"line-height: 14px;\n"
"}"));
        pin->setEchoMode(QLineEdit::Password);
        widgetLabelRepeat = new QWidget(PinUnblock);
        widgetLabelRepeat->setObjectName(QStringLiteral("widgetLabelRepeat"));
        widgetLabelRepeat->setGeometry(QRect(91, 334, 279, 16));
        widgetLabelRepeat->setStyleSheet(QStringLiteral("border: none;"));
        horizontalLayout3 = new QHBoxLayout(widgetLabelRepeat);
        horizontalLayout3->setSpacing(2);
        horizontalLayout3->setObjectName(QStringLiteral("horizontalLayout3"));
        horizontalLayout3->setContentsMargins(0, 0, 0, 0);
        labelRepeat = new QLabel(widgetLabelRepeat);
        labelRepeat->setObjectName(QStringLiteral("labelRepeat"));
        labelRepeat->setFont(font3);
        labelRepeat->setStyleSheet(QStringLiteral("color: #353739;"));

        horizontalLayout3->addWidget(labelRepeat);

        iconLabelRepeat = new QWidget(widgetLabelRepeat);
        iconLabelRepeat->setObjectName(QStringLiteral("iconLabelRepeat"));
        sizePolicy1.setHeightForWidth(iconLabelRepeat->sizePolicy().hasHeightForWidth());
        iconLabelRepeat->setSizePolicy(sizePolicy1);
        iconLabelRepeat->setMinimumSize(QSize(15, 15));

        horizontalLayout3->addWidget(iconLabelRepeat);

        spacerLabelRepeat = new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout3->addItem(spacerLabelRepeat);

        repeat = new QLineEdit(PinUnblock);
        repeat->setObjectName(QStringLiteral("repeat"));
        repeat->setGeometry(QRect(91, 350, 279, 34));
        repeat->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"border: 1px solid #DEE4E9;\n"
"border-radius: 2px;\n"
"padding: 0px 10px;\n"
"background-color: #ffffff;\n"
"font-size: 16px;\n"
"color: #000000;\n"
"font-weight: 400;\n"
"line-height: 14px;\n"
"}"));
        repeat->setEchoMode(QLineEdit::Password);
        labelAttemptsLeft = new QLabel(PinUnblock);
        labelAttemptsLeft->setObjectName(QStringLiteral("labelAttemptsLeft"));
        labelAttemptsLeft->setGeometry(QRect(40, 40, 381, 20));
        labelAttemptsLeft->setStyleSheet(QLatin1String("border: none;\n"
"height: 14px;\n"
"font-size: 13px;\n"
"color: #c53e3e;\n"
"font-weight: 400;\n"
"text-align: cente"));
        labelAttemptsLeft->setAlignment(Qt::AlignCenter);
        QWidget::setTabOrder(puk, pin);
        QWidget::setTabOrder(pin, repeat);
        QWidget::setTabOrder(repeat, cancel);
        QWidget::setTabOrder(cancel, unblock);

        retranslateUi(PinUnblock);

        unblock->setDefault(true);


        QMetaObject::connectSlotsByName(PinUnblock);
    } // setupUi

    void retranslateUi(QDialog *PinUnblock)
    {
        cancel->setText(QApplication::translate("PinUnblock", "CANCEL", Q_NULLPTR));
        unblock->setText(QApplication::translate("PinUnblock", "UNBLOCK", Q_NULLPTR));
        labelNameId->setText(QApplication::translate("PinUnblock", "TextLabel", Q_NULLPTR));
        label->setText(QApplication::translate("PinUnblock", "TextLabel", Q_NULLPTR));
        labelPuk->setText(QApplication::translate("PinUnblock", "VALID PUK CODE", Q_NULLPTR));
        puk->setText(QString());
        labelPin->setText(QApplication::translate("PinUnblock", "pin", Q_NULLPTR));
        labelRepeat->setText(QApplication::translate("PinUnblock", "repeat", Q_NULLPTR));
        labelAttemptsLeft->setText(QApplication::translate("PinUnblock", "Katseid j\303\244\303\244nud:", Q_NULLPTR));
        Q_UNUSED(PinUnblock);
    } // retranslateUi

};

namespace Ui {
    class PinUnblock: public Ui_PinUnblock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PINUNBLOCK_H
