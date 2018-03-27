/********************************************************************************
** Form generated from reading UI file 'AddressItem.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRESSITEM_H
#define UI_ADDRESSITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/LabelButton.h"

QT_BEGIN_NAMESPACE

class Ui_AddressItem
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
    QWidget *line2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *idType;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    LabelButton *remove;
    QToolButton *added;
    QToolButton *add;

    void setupUi(QWidget *AddressItem)
    {
        if (AddressItem->objectName().isEmpty())
            AddressItem->setObjectName(QStringLiteral("AddressItem"));
        AddressItem->resize(633, 44);
        AddressItem->setMinimumSize(QSize(0, 44));
        AddressItem->setMaximumSize(QSize(16777215, 44));
        QFont font;
        font.setPointSize(14);
        font.setBold(false);
        font.setWeight(50);
        AddressItem->setFont(font);
        AddressItem->setCursor(QCursor(Qt::PointingHandCursor));
        AddressItem->setFocusPolicy(Qt::StrongFocus);
        AddressItem->setStyleSheet(QLatin1String("border: solid rgba(217, 217, 216, 0.45);\n"
"border-width: 0px 0px 1px 0px;\n"
"background-color: #ffffff;\n"
"color: #000000;\n"
"text-decoration: none solid rgb(0, 0, 0);\n"
""));
        horizontalLayout = new QHBoxLayout(AddressItem);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 2);
        icon = new QWidget(AddressItem);
        icon->setObjectName(QStringLiteral("icon"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(icon->sizePolicy().hasHeightForWidth());
        icon->setSizePolicy(sizePolicy);
        icon->setMinimumSize(QSize(25, 0));
        icon->setMaximumSize(QSize(25, 16777215));
        icon->setStyleSheet(QStringLiteral("border: none;"));

        horizontalLayout->addWidget(icon);

        widget = new QWidget(AddressItem);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        widget->setMinimumSize(QSize(0, 38));
        widget->setStyleSheet(QStringLiteral("border: none;"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(1, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        line1 = new QWidget(widget);
        line1->setObjectName(QStringLiteral("line1"));
        sizePolicy1.setHeightForWidth(line1->sizePolicy().hasHeightForWidth());
        line1->setSizePolicy(sizePolicy1);
        line1->setMinimumSize(QSize(0, 16));
        line1->setMaximumSize(QSize(16777215, 32));
        line1->setStyleSheet(QStringLiteral("border: none;"));
        horizontalLayout_2 = new QHBoxLayout(line1);
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        name = new QLabel(line1);
        name->setObjectName(QStringLiteral("name"));
        sizePolicy1.setHeightForWidth(name->sizePolicy().hasHeightForWidth());
        name->setSizePolicy(sizePolicy1);
        name->setMinimumSize(QSize(334, 0));
        name->setMaximumSize(QSize(16777215, 16));
        QFont font1;
        font1.setFamily(QStringLiteral("Roboto"));
        font1.setPointSize(14);
        name->setFont(font1);
        name->setMouseTracking(true);
        name->setWordWrap(true);
        name->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_2->addWidget(name);


        verticalLayout->addWidget(line1);

        line2 = new QWidget(widget);
        line2->setObjectName(QStringLiteral("line2"));
        sizePolicy1.setHeightForWidth(line2->sizePolicy().hasHeightForWidth());
        line2->setSizePolicy(sizePolicy1);
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
        idType = new QLabel(line2);
        idType->setObjectName(QStringLiteral("idType"));
        idType->setMaximumSize(QSize(16777215, 16));
        idType->setStyleSheet(QStringLiteral("color: #75787B;"));

        horizontalLayout_3->addWidget(idType);


        verticalLayout->addWidget(line2);

        verticalSpacer_2 = new QSpacerItem(1, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout->addWidget(widget);

        horizontalSpacer = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        remove = new LabelButton(AddressItem);
        remove->setObjectName(QStringLiteral("remove"));
        remove->setMinimumSize(QSize(19, 19));
        remove->setMaximumSize(QSize(19, 19));
        remove->setFont(font1);
        remove->setCursor(QCursor(Qt::PointingHandCursor));
        remove->setStyleSheet(QStringLiteral("border: none; background-color: none;"));

        horizontalLayout->addWidget(remove);

        added = new QToolButton(AddressItem);
        added->setObjectName(QStringLiteral("added"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(added->sizePolicy().hasHeightForWidth());
        added->setSizePolicy(sizePolicy2);
        added->setMinimumSize(QSize(0, 25));
        added->setMaximumSize(QSize(16777215, 25));
        added->setStyleSheet(QLatin1String("QToolButton {\n"
"	border-radius: 2px; \n"
"	border: none;\n"
"	color: #006EB5;\n"
"}\n"
"QToolButton:pressed {\n"
"	color: #FFFFFF;\n"
"	background-color: #006EB5;\n"
"}\n"
"QToolButton:hover:!pressed {\n"
"	border: 1px solid #006EB5;\n"
"	color: #006EB5;\n"
"}\n"
"QToolButton:disabled {\n"
"	color: #75787B;\n"
"}"));

        horizontalLayout->addWidget(added);

        add = new QToolButton(AddressItem);
        add->setObjectName(QStringLiteral("add"));
        sizePolicy2.setHeightForWidth(add->sizePolicy().hasHeightForWidth());
        add->setSizePolicy(sizePolicy2);
        add->setMinimumSize(QSize(0, 25));
        add->setMaximumSize(QSize(16777215, 25));
        add->setCursor(QCursor(Qt::PointingHandCursor));
        add->setStyleSheet(QLatin1String("QToolButton {\n"
"	border-radius: 2px; \n"
"	border: none;\n"
"	color: #006EB5;\n"
"}\n"
"QToolButton:pressed {\n"
"	color: #FFFFFF;\n"
"	background-color: #006EB5;\n"
"}\n"
"QToolButton:hover:!pressed {\n"
"	border: 1px solid #006EB5;\n"
"	color: #006EB5;\n"
"}\n"
"QToolButton:disabled {\n"
"	color: #75787B;\n"
"	background-color: #BEDBED;\n"
"}"));

        horizontalLayout->addWidget(add);


        retranslateUi(AddressItem);

        QMetaObject::connectSlotsByName(AddressItem);
    } // setupUi

    void retranslateUi(QWidget *AddressItem)
    {
        AddressItem->setWindowTitle(QApplication::translate("AddressItem", "Form", Q_NULLPTR));
        name->setText(QApplication::translate("AddressItem", "MARI MAASIKAS MUSTIKAS 48405050123 (Sina ise)", Q_NULLPTR));
        idType->setText(QApplication::translate("AddressItem", "ID-kaart", Q_NULLPTR));
        remove->setText(QString());
        added->setText(QApplication::translate("AddressItem", "Added", Q_NULLPTR));
        add->setText(QApplication::translate("AddressItem", "Add", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddressItem: public Ui_AddressItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRESSITEM_H
