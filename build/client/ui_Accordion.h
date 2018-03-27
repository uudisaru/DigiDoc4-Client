/********************************************************************************
** Form generated from reading UI file 'Accordion.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCORDION_H
#define UI_ACCORDION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/AccordionTitle.h"
#include "widgets/NoOtherId.h"
#include "widgets/OtherData.h"
#include "widgets/OtherId.h"
#include "widgets/VerifyCert.h"

QT_BEGIN_NAMESPACE

class Ui_Accordion
{
public:
    QVBoxLayout *verticalLayout;
    AccordionTitle *titleVerifyCert;
    QWidget *contentVerifyCert;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    VerifyCert *authBox;
    VerifyCert *signBox;
    VerifyCert *pukBox;
    AccordionTitle *titleOtherData;
    OtherData *contentOtherData;
    AccordionTitle *titleOtherEID;
    QWidget *contentOtherEID;
    QVBoxLayout *verticalLayout_3;
    QWidget *widgetOther;
    QHBoxLayout *horizontalLayout_2;
    OtherId *mobID;
    OtherId *digiID;
    NoOtherId *otherID;

    void setupUi(QWidget *Accordion)
    {
        if (Accordion->objectName().isEmpty())
            Accordion->setObjectName(QStringLiteral("Accordion"));
        Accordion->resize(554, 780);
        verticalLayout = new QVBoxLayout(Accordion);
        verticalLayout->setSpacing(1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        titleVerifyCert = new AccordionTitle(Accordion);
        titleVerifyCert->setObjectName(QStringLiteral("titleVerifyCert"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titleVerifyCert->sizePolicy().hasHeightForWidth());
        titleVerifyCert->setSizePolicy(sizePolicy);
        titleVerifyCert->setMinimumSize(QSize(0, 40));
        titleVerifyCert->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(titleVerifyCert);

        contentVerifyCert = new QWidget(Accordion);
        contentVerifyCert->setObjectName(QStringLiteral("contentVerifyCert"));
        contentVerifyCert->setMinimumSize(QSize(0, 140));
        verticalLayout_2 = new QVBoxLayout(contentVerifyCert);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(contentVerifyCert);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        authBox = new VerifyCert(widget);
        authBox->setObjectName(QStringLiteral("authBox"));

        horizontalLayout->addWidget(authBox);

        signBox = new VerifyCert(widget);
        signBox->setObjectName(QStringLiteral("signBox"));

        horizontalLayout->addWidget(signBox);

        pukBox = new VerifyCert(widget);
        pukBox->setObjectName(QStringLiteral("pukBox"));

        horizontalLayout->addWidget(pukBox);


        verticalLayout_2->addWidget(widget);


        verticalLayout->addWidget(contentVerifyCert);

        titleOtherData = new AccordionTitle(Accordion);
        titleOtherData->setObjectName(QStringLiteral("titleOtherData"));
        sizePolicy.setHeightForWidth(titleOtherData->sizePolicy().hasHeightForWidth());
        titleOtherData->setSizePolicy(sizePolicy);
        titleOtherData->setMinimumSize(QSize(0, 40));
        titleOtherData->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(titleOtherData);

        contentOtherData = new OtherData(Accordion);
        contentOtherData->setObjectName(QStringLiteral("contentOtherData"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(contentOtherData->sizePolicy().hasHeightForWidth());
        contentOtherData->setSizePolicy(sizePolicy1);
        contentOtherData->setMinimumSize(QSize(0, 140));

        verticalLayout->addWidget(contentOtherData);

        titleOtherEID = new AccordionTitle(Accordion);
        titleOtherEID->setObjectName(QStringLiteral("titleOtherEID"));
        sizePolicy.setHeightForWidth(titleOtherEID->sizePolicy().hasHeightForWidth());
        titleOtherEID->setSizePolicy(sizePolicy);
        titleOtherEID->setMinimumSize(QSize(0, 40));
        titleOtherEID->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(titleOtherEID);

        contentOtherEID = new QWidget(Accordion);
        contentOtherEID->setObjectName(QStringLiteral("contentOtherEID"));
        contentOtherEID->setMinimumSize(QSize(0, 140));
        contentOtherEID->setStyleSheet(QStringLiteral("background-color: white;"));
        verticalLayout_3 = new QVBoxLayout(contentOtherEID);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        widgetOther = new QWidget(contentOtherEID);
        widgetOther->setObjectName(QStringLiteral("widgetOther"));
        horizontalLayout_2 = new QHBoxLayout(widgetOther);
        horizontalLayout_2->setSpacing(1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        mobID = new OtherId(widgetOther);
        mobID->setObjectName(QStringLiteral("mobID"));

        horizontalLayout_2->addWidget(mobID);

        digiID = new OtherId(widgetOther);
        digiID->setObjectName(QStringLiteral("digiID"));
        mobID->raise();

        horizontalLayout_2->addWidget(digiID);

        otherID = new NoOtherId(widgetOther);
        otherID->setObjectName(QStringLiteral("otherID"));
        sizePolicy1.setHeightForWidth(otherID->sizePolicy().hasHeightForWidth());
        otherID->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(otherID);


        verticalLayout_3->addWidget(widgetOther);


        verticalLayout->addWidget(contentOtherEID);


        retranslateUi(Accordion);

        QMetaObject::connectSlotsByName(Accordion);
    } // setupUi

    void retranslateUi(QWidget *Accordion)
    {
        Q_UNUSED(Accordion);
    } // retranslateUi

};

namespace Ui {
    class Accordion: public Ui_Accordion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCORDION_H
