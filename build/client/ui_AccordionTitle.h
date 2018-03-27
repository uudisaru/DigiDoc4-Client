/********************************************************************************
** Form generated from reading UI file 'AccordionTitle.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCORDIONTITLE_H
#define UI_ACCORDIONTITLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AccordionTitle
{
public:
    QLabel *label;

    void setupUi(QWidget *AccordionTitle)
    {
        if (AccordionTitle->objectName().isEmpty())
            AccordionTitle->setObjectName(QStringLiteral("AccordionTitle"));
        AccordionTitle->resize(400, 40);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AccordionTitle->sizePolicy().hasHeightForWidth());
        AccordionTitle->setSizePolicy(sizePolicy);
        AccordionTitle->setMinimumSize(QSize(0, 40));
        AccordionTitle->setMaximumSize(QSize(16777215, 40));
        AccordionTitle->setStyleSheet(QLatin1String("background-color: #FFFFFF;\n"
"border: solid #DFE5E9;\n"
"border-width: 1px 0px 0px 0px; "));
        label = new QLabel(AccordionTitle);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(36, 11, 390, 19));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(0, 19));
        label->setMaximumSize(QSize(16777215, 19));
        QFont font;
        font.setFamily(QStringLiteral("Roboto Condensed"));
        font.setPointSize(16);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("border: none;\n"
"color: #353739;"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        retranslateUi(AccordionTitle);

        QMetaObject::connectSlotsByName(AccordionTitle);
    } // setupUi

    void retranslateUi(QWidget *AccordionTitle)
    {
        label->setText(QApplication::translate("AccordionTitle", "TextLabel", Q_NULLPTR));
        Q_UNUSED(AccordionTitle);
    } // retranslateUi

};

namespace Ui {
    class AccordionTitle: public Ui_AccordionTitle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCORDIONTITLE_H
