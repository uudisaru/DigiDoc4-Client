/********************************************************************************
** Form generated from reading UI file 'SignatureItem.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNATUREITEM_H
#define UI_SIGNATUREITEM_H

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

class Ui_SignatureItem
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *icon;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QWidget *line1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *name;
    QSpacerItem *horizontalSpacer;
    QWidget *line2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *idSignTime;
    QSpacerItem *verticalSpacer_2;
    LabelButton *remove;

    void setupUi(QWidget *SignatureItem)
    {
        if (SignatureItem->objectName().isEmpty())
            SignatureItem->setObjectName(QStringLiteral("SignatureItem"));
        SignatureItem->resize(465, 44);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SignatureItem->sizePolicy().hasHeightForWidth());
        SignatureItem->setSizePolicy(sizePolicy);
        SignatureItem->setMinimumSize(QSize(0, 44));
        SignatureItem->setMaximumSize(QSize(16777215, 44));
        QFont font;
        font.setPointSize(14);
        font.setBold(false);
        font.setWeight(50);
        SignatureItem->setFont(font);
        SignatureItem->setCursor(QCursor(Qt::PointingHandCursor));
        SignatureItem->setFocusPolicy(Qt::StrongFocus);
        SignatureItem->setStyleSheet(QLatin1String("border: solid rgba(217, 217, 216, 0.45);\n"
"border-width: 0px 0px 1px 0px; \n"
"background-color: #ffffff; \n"
"color: #000000; \n"
"text-decoration: none solid rgb(0, 0, 0);"));
        horizontalLayout = new QHBoxLayout(SignatureItem);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 2);
        icon = new QWidget(SignatureItem);
        icon->setObjectName(QStringLiteral("icon"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(icon->sizePolicy().hasHeightForWidth());
        icon->setSizePolicy(sizePolicy1);
        icon->setMinimumSize(QSize(25, 0));
        icon->setMaximumSize(QSize(25, 16777215));
        icon->setStyleSheet(QStringLiteral("border: none;"));

        horizontalLayout->addWidget(icon);

        widget = new QWidget(SignatureItem);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy2);
        widget->setMinimumSize(QSize(0, 38));
        widget->setStyleSheet(QStringLiteral("border: none;"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(1, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        line1 = new QWidget(widget);
        line1->setObjectName(QStringLiteral("line1"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(line1->sizePolicy().hasHeightForWidth());
        line1->setSizePolicy(sizePolicy3);
        line1->setMinimumSize(QSize(0, 16));
        line1->setMaximumSize(QSize(16777215, 36));
        line1->setStyleSheet(QStringLiteral("border: none;"));
        horizontalLayout_2 = new QHBoxLayout(line1);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        name = new QLabel(line1);
        name->setObjectName(QStringLiteral("name"));
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(name->sizePolicy().hasHeightForWidth());
        name->setSizePolicy(sizePolicy4);
        name->setMinimumSize(QSize(0, 16));
        name->setMaximumSize(QSize(16777215, 16));
        QFont font1;
        font1.setFamily(QStringLiteral("Roboto"));
        font1.setPointSize(14);
        name->setFont(font1);
        name->setWordWrap(true);
        name->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_2->addWidget(name);

        horizontalSpacer = new QSpacerItem(26, 16, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addWidget(line1);

        line2 = new QWidget(widget);
        line2->setObjectName(QStringLiteral("line2"));
        sizePolicy2.setHeightForWidth(line2->sizePolicy().hasHeightForWidth());
        line2->setSizePolicy(sizePolicy2);
        line2->setMinimumSize(QSize(0, 16));
        line2->setMaximumSize(QSize(16777215, 16));
        QFont font2;
        font2.setFamily(QStringLiteral("Roboto"));
        font2.setPointSize(11);
        line2->setFont(font2);
        line2->setStyleSheet(QStringLiteral("border: none;"));
        horizontalLayout_3 = new QHBoxLayout(line2);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        idSignTime = new QLabel(line2);
        idSignTime->setObjectName(QStringLiteral("idSignTime"));
        idSignTime->setMaximumSize(QSize(16777215, 16));

        horizontalLayout_3->addWidget(idSignTime);


        verticalLayout->addWidget(line2);

        verticalSpacer_2 = new QSpacerItem(1, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout->addWidget(widget);

        remove = new LabelButton(SignatureItem);
        remove->setObjectName(QStringLiteral("remove"));
        remove->setMinimumSize(QSize(19, 19));
        remove->setMaximumSize(QSize(19, 19));
        remove->setFont(font1);
        remove->setCursor(QCursor(Qt::PointingHandCursor));
        remove->setStyleSheet(QStringLiteral("border: none;"));

        horizontalLayout->addWidget(remove);


        retranslateUi(SignatureItem);

        QMetaObject::connectSlotsByName(SignatureItem);
    } // setupUi

    void retranslateUi(QWidget *SignatureItem)
    {
        SignatureItem->setWindowTitle(QApplication::translate("SignatureItem", "Form", Q_NULLPTR));
        name->setText(QApplication::translate("SignatureItem", "MARI MAASIKAS MUSTIKAS - <span style=\"color:#53c964\">Allkiri on kehtiv</span>", Q_NULLPTR));
        idSignTime->setText(QApplication::translate("SignatureItem", "48403123367 - Allkirjastatud 12. september 2017, kell 13:22", Q_NULLPTR));
        remove->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SignatureItem: public Ui_SignatureItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNATUREITEM_H
