/********************************************************************************
** Form generated from reading UI file 'CardWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARDWIDGET_H
#define UI_CARDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/LabelButton.h"

QT_BEGIN_NAMESPACE

class Ui_CardWidget
{
public:
    QHBoxLayout *horizontalLayout;
    LabelButton *cardPhoto;
    QLabel *load;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QLabel *cardName;
    QWidget *widget;
    QLabel *cardStatus;
    QLabel *cardCode;

    void setupUi(QWidget *CardWidget)
    {
        if (CardWidget->objectName().isEmpty())
            CardWidget->setObjectName(QStringLiteral("CardWidget"));
        CardWidget->resize(355, 65);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CardWidget->sizePolicy().hasHeightForWidth());
        CardWidget->setSizePolicy(sizePolicy);
        CardWidget->setMinimumSize(QSize(355, 65));
        CardWidget->setMaximumSize(QSize(16777215, 65));
        CardWidget->setCursor(QCursor(Qt::PointingHandCursor));
        CardWidget->setStyleSheet(QStringLiteral("QWidget:!hover { border:none; } QWidget:hover { border:none; background: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 rgba(0, 118, 190, 0.15), stop: 1 rgba(255,255,255, 0.5));}"));
        horizontalLayout = new QHBoxLayout(CardWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(10, 7, 0, 7);
        cardPhoto = new LabelButton(CardWidget);
        cardPhoto->setObjectName(QStringLiteral("cardPhoto"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cardPhoto->sizePolicy().hasHeightForWidth());
        cardPhoto->setSizePolicy(sizePolicy1);
        cardPhoto->setMinimumSize(QSize(34, 45));
        cardPhoto->setMaximumSize(QSize(34, 45));
        cardPhoto->setStyleSheet(QLatin1String("border: 1px solid #B1B3B3;\n"
"background-color: #FFFFFF;\n"
"opacity: 0.5;\n"
"border-radius: 3px;\n"
""));
        cardPhoto->setAlignment(Qt::AlignCenter);
        load = new QLabel(cardPhoto);
        load->setObjectName(QStringLiteral("load"));
        load->setGeometry(QRect(2, 8, 30, 32));
        QFont font;
        font.setPointSize(9);
        load->setFont(font);
        load->setStyleSheet(QStringLiteral("border: none; color: #006EB5;"));
        load->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(cardPhoto);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        widget_2 = new QWidget(CardWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy2);
        widget_2->setMinimumSize(QSize(301, 51));
        widget_2->setMaximumSize(QSize(16777215, 51));
        widget_2->setStyleSheet(QStringLiteral("background: none;"));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        cardName = new QLabel(widget_2);
        cardName->setObjectName(QStringLiteral("cardName"));
        sizePolicy.setHeightForWidth(cardName->sizePolicy().hasHeightForWidth());
        cardName->setSizePolicy(sizePolicy);
        cardName->setMinimumSize(QSize(273, 31));
        cardName->setMaximumSize(QSize(16777215, 31));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        cardName->setFont(font1);
        cardName->setStyleSheet(QStringLiteral("color: #041E42; background: none;"));
        cardName->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout->addWidget(cardName);

        widget = new QWidget(widget_2);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(301, 19));
        widget->setMaximumSize(QSize(301, 19));
        widget->setStyleSheet(QStringLiteral("background: none;"));
        cardStatus = new QLabel(widget);
        cardStatus->setObjectName(QStringLiteral("cardStatus"));
        cardStatus->setGeometry(QRect(138, 0, 160, 19));
        QFont font2;
        font2.setPointSize(16);
        cardStatus->setFont(font2);
        cardStatus->setStyleSheet(QStringLiteral("color: #75787B; background: none;"));
        cardCode = new QLabel(widget);
        cardCode->setObjectName(QStringLiteral("cardCode"));
        cardCode->setGeometry(QRect(0, 0, 116, 19));
        cardCode->setFont(font2);
        cardCode->setStyleSheet(QStringLiteral("color: #75787B; background: none;"));

        verticalLayout->addWidget(widget);


        horizontalLayout->addWidget(widget_2);


        retranslateUi(CardWidget);

        QMetaObject::connectSlotsByName(CardWidget);
    } // setupUi

    void retranslateUi(QWidget *CardWidget)
    {
        CardWidget->setWindowTitle(QApplication::translate("CardWidget", "Form", Q_NULLPTR));
        cardPhoto->setText(QString());
        load->setText(QApplication::translate("CardWidget", "LOAD", Q_NULLPTR));
        cardName->setText(QApplication::translate("CardWidget", "MARI MAASIKAS MUSTIKAS", Q_NULLPTR));
        cardStatus->setText(QApplication::translate("CardWidget", "ID card in reader", Q_NULLPTR));
        cardCode->setText(QApplication::translate("CardWidget", "48405050123 |", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CardWidget: public Ui_CardWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARDWIDGET_H
