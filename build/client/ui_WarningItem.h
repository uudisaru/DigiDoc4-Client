/********************************************************************************
** Form generated from reading UI file 'WarningItem.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WARNINGITEM_H
#define UI_WARNINGITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WarningItem
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *warningText;
    QLabel *warningAction;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *WarningItem)
    {
        if (WarningItem->objectName().isEmpty())
            WarningItem->setObjectName(QStringLiteral("WarningItem"));
        WarningItem->resize(914, 26);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WarningItem->sizePolicy().hasHeightForWidth());
        WarningItem->setSizePolicy(sizePolicy);
        WarningItem->setMinimumSize(QSize(914, 26));
        WarningItem->setMaximumSize(QSize(16777215, 45));
        WarningItem->setStyleSheet(QLatin1String("padding: 0px 0px 0px 6px;\n"
"border: solid #B5AA92;\n"
"border-width: 0px 0px 1px 0px;\n"
"background-color: #F8DDA7;\n"
"color: #353739;"));
        horizontalLayout = new QHBoxLayout(WarningItem);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 3, 0, 6);
        warningText = new QLabel(WarningItem);
        warningText->setObjectName(QStringLiteral("warningText"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(warningText->sizePolicy().hasHeightForWidth());
        warningText->setSizePolicy(sizePolicy1);
        warningText->setMinimumSize(QSize(510, 16));
        warningText->setMaximumSize(QSize(16777215, 34));
        QFont font;
        font.setFamily(QStringLiteral("Roboto"));
        font.setPointSize(14);
        font.setUnderline(false);
        font.setStrikeOut(false);
        warningText->setFont(font);
        warningText->setStyleSheet(QStringLiteral("color:#353739; border: none; background-color: #F8DDA7;"));
        warningText->setWordWrap(true);

        horizontalLayout->addWidget(warningText);

        warningAction = new QLabel(WarningItem);
        warningAction->setObjectName(QStringLiteral("warningAction"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(warningAction->sizePolicy().hasHeightForWidth());
        warningAction->setSizePolicy(sizePolicy2);
        warningAction->setMinimumSize(QSize(100, 20));
        warningAction->setMaximumSize(QSize(16777215, 16777215));
        QFont font1;
        font1.setFamily(QStringLiteral("Roboto"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setUnderline(false);
        font1.setWeight(75);
        font1.setStrikeOut(false);
        warningAction->setFont(font1);
        warningAction->setStyleSheet(QLatin1String("color: #353739;\n"
"font-weight: bold;\n"
"text-decoration: none solid rgb(53, 55, 57);\n"
"border: none;\n"
"background-color: #F8DDA7;"));
        warningAction->setTextFormat(Qt::RichText);
        warningAction->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        warningAction->setOpenExternalLinks(true);
        warningAction->setTextInteractionFlags(Qt::TextBrowserInteraction);

        horizontalLayout->addWidget(warningAction);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        retranslateUi(WarningItem);

        QMetaObject::connectSlotsByName(WarningItem);
    } // setupUi

    void retranslateUi(QWidget *WarningItem)
    {
        WarningItem->setWindowTitle(QApplication::translate("WarningItem", "Form", Q_NULLPTR));
        warningText->setText(QApplication::translate("WarningItem", "One signature is invalid", Q_NULLPTR));
        warningAction->setText(QApplication::translate("WarningItem", "Click to resolve problem", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WarningItem: public Ui_WarningItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WARNINGITEM_H
