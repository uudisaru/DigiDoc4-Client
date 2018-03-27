/********************************************************************************
** Form generated from reading UI file 'ItemList.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMLIST_H
#define UI_ITEMLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/LabelButton.h"

QT_BEGIN_NAMESPACE

class Ui_ItemList
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *items;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *itemLayout;
    QWidget *header;
    QHBoxLayout *horizontalLayout_2;
    QWidget *headerLeft;
    QWidget *leftCenter;
    QLabel *listHeader;
    QWidget *rightCenter;
    QWidget *infoIcon;
    QWidget *headerRight;
    QHBoxLayout *horizontalLayout_3;
    QLabel *count;
    LabelButton *download;
    QWidget *findGroup;
    QHBoxLayout *horizontalLayout;
    QLineEdit *txtFind;
    QPushButton *btnFind;
    LabelButton *add;
    QWidget *widget;

    void setupUi(QWidget *ItemList)
    {
        if (ItemList->objectName().isEmpty())
            ItemList->setObjectName(QStringLiteral("ItemList"));
        ItemList->resize(457, 427);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ItemList->sizePolicy().hasHeightForWidth());
        ItemList->setSizePolicy(sizePolicy);
        ItemList->setMinimumSize(QSize(417, 250));
        ItemList->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 1px solid #D9D9D8;\n"
"border-width: 2px 2px 2px 2px; \n"
""));
        verticalLayout = new QVBoxLayout(ItemList);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(ItemList);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setMinimumSize(QSize(417, 0));
        scrollArea->setStyleSheet(QLatin1String("QScrollArea#scrollArea {\n"
"	border: 1px solid #D9D9D8;\n"
"	border-width: 0px 1px 0px 0px;\n"
"}\n"
"QScrollBar{\n"
"	width: 10px;\n"
"	padding: 5px 5px 5px 0;\n"
"	border: none;\n"
"	background: #FFFFFF;\n"
"}\n"
"QScrollBar::handle:vertical{\n"
"	background-color: #DEE4E9;\n"
"	margin: 0 0 0 0;\n"
"	border-radius: 2px;\n"
"	height: 145px;\n"
"}\n"
"QScrollBar::add-line:vertical {\n"
"      border: none;\n"
"      background: none;\n"
"}\n"
"QScrollBar::sub-line:vertical {\n"
"      border: none;\n"
"      background: none;\n"
"}\n"
""));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setLineWidth(0);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        items = new QWidget();
        items->setObjectName(QStringLiteral("items"));
        items->setGeometry(QRect(0, 0, 455, 425));
        items->setStyleSheet(QLatin1String("border: none;\n"
"QWidget#items\n"
"{\n"
"background-color: #ffffff;\n"
"}\n"
""));
        verticalLayout_3 = new QVBoxLayout(items);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        itemLayout = new QVBoxLayout();
        itemLayout->setSpacing(0);
        itemLayout->setObjectName(QStringLiteral("itemLayout"));
        itemLayout->setContentsMargins(20, -1, 20, -1);
        header = new QWidget(items);
        header->setObjectName(QStringLiteral("header"));
        header->setMinimumSize(QSize(0, 64));
        header->setMaximumSize(QSize(16777215, 64));
        header->setStyleSheet(QLatin1String("border: solid rgba(217, 217, 216, 0.45);\n"
"border-width: 0px 0px 1px 0px;\n"
"color: #041E42;"));
        horizontalLayout_2 = new QHBoxLayout(header);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 1, 0, 1);
        headerLeft = new QWidget(header);
        headerLeft->setObjectName(QStringLiteral("headerLeft"));
        headerLeft->setMinimumSize(QSize(38, 60));
        headerLeft->setMaximumSize(QSize(38, 60));
        headerLeft->setStyleSheet(QStringLiteral("border: none;"));

        horizontalLayout_2->addWidget(headerLeft);

        leftCenter = new QWidget(header);
        leftCenter->setObjectName(QStringLiteral("leftCenter"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(60);
        sizePolicy1.setHeightForWidth(leftCenter->sizePolicy().hasHeightForWidth());
        leftCenter->setSizePolicy(sizePolicy1);
        leftCenter->setMinimumSize(QSize(0, 60));
        leftCenter->setStyleSheet(QStringLiteral("border: none;"));

        horizontalLayout_2->addWidget(leftCenter);

        listHeader = new QLabel(header);
        listHeader->setObjectName(QStringLiteral("listHeader"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(listHeader->sizePolicy().hasHeightForWidth());
        listHeader->setSizePolicy(sizePolicy2);
        listHeader->setMinimumSize(QSize(0, 60));
        listHeader->setMaximumSize(QSize(16777215, 60));
        QFont font;
        font.setFamily(QStringLiteral("Roboto"));
        font.setPointSize(20);
        listHeader->setFont(font);
        listHeader->setStyleSheet(QLatin1String("color: #041E42;\n"
"border: none;"));
        listHeader->setLineWidth(0);
        listHeader->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(listHeader);

        rightCenter = new QWidget(header);
        rightCenter->setObjectName(QStringLiteral("rightCenter"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(rightCenter->sizePolicy().hasHeightForWidth());
        rightCenter->setSizePolicy(sizePolicy3);
        rightCenter->setMinimumSize(QSize(0, 60));
        rightCenter->setMaximumSize(QSize(16777215, 60));
        rightCenter->setStyleSheet(QStringLiteral(" border: none;"));
        infoIcon = new QWidget(rightCenter);
        infoIcon->setObjectName(QStringLiteral("infoIcon"));
        infoIcon->setGeometry(QRect(0, 22, 16, 16));
        infoIcon->setStyleSheet(QLatin1String("QWidget { border: none; }\n"
"QToolTip { \n"
"	color: #fcfcfc; \n"
"	background-color: #474747;\n"
"	border-radius: 2px;\n"
"	text-align: center;\n"
"	font-weight: 400; \n"
"	text-decoration: none solid rgb(252, 252, 252);\n"
"	padding: 5px; font-size: 13px;\n"
"}"));

        horizontalLayout_2->addWidget(rightCenter);

        headerRight = new QWidget(header);
        headerRight->setObjectName(QStringLiteral("headerRight"));
        headerRight->setMinimumSize(QSize(38, 60));
        headerRight->setMaximumSize(QSize(38, 60));
        headerRight->setStyleSheet(QStringLiteral("border: none;"));
        horizontalLayout_3 = new QHBoxLayout(headerRight);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        count = new QLabel(headerRight);
        count->setObjectName(QStringLiteral("count"));
        count->setMinimumSize(QSize(15, 19));
        count->setMaximumSize(QSize(15, 19));
        QFont font1;
        font1.setPointSize(12);
        count->setFont(font1);
        count->setStyleSheet(QStringLiteral("border: none; color: #006EB5;"));
        count->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(count);

        download = new LabelButton(headerRight);
        download->setObjectName(QStringLiteral("download"));
        download->setMinimumSize(QSize(19, 19));
        download->setMaximumSize(QSize(19, 19));
        download->setCursor(QCursor(Qt::PointingHandCursor));
        download->setStyleSheet(QStringLiteral("border: none;"));

        horizontalLayout_3->addWidget(download);


        horizontalLayout_2->addWidget(headerRight);


        itemLayout->addWidget(header);

        findGroup = new QWidget(items);
        findGroup->setObjectName(QStringLiteral("findGroup"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(findGroup->sizePolicy().hasHeightForWidth());
        findGroup->setSizePolicy(sizePolicy4);
        findGroup->setMinimumSize(QSize(0, 51));
        findGroup->setStyleSheet(QStringLiteral("border: none;"));
        horizontalLayout = new QHBoxLayout(findGroup);
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 4);
        txtFind = new QLineEdit(findGroup);
        txtFind->setObjectName(QStringLiteral("txtFind"));
        txtFind->setMinimumSize(QSize(0, 35));
        txtFind->setMaximumSize(QSize(16777215, 35));
        txtFind->setStyleSheet(QLatin1String("#txtFind\n"
"{\n"
"border: 1px solid #DEE4E9;\n"
"border-radius: 2px;\n"
"background-color: #FFFFFF;\n"
"}"));

        horizontalLayout->addWidget(txtFind);

        btnFind = new QPushButton(findGroup);
        btnFind->setObjectName(QStringLiteral("btnFind"));
        btnFind->setMinimumSize(QSize(80, 34));
        btnFind->setStyleSheet(QLatin1String("QPushButton {\n"
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

        horizontalLayout->addWidget(btnFind);


        itemLayout->addWidget(findGroup);

        add = new LabelButton(items);
        add->setObjectName(QStringLiteral("add"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(add->sizePolicy().hasHeightForWidth());
        add->setSizePolicy(sizePolicy5);
        add->setMinimumSize(QSize(0, 35));
        add->setMaximumSize(QSize(16777215, 35));
        QFont font2;
        font2.setFamily(QStringLiteral("Roboto Condensed"));
        font2.setPointSize(12);
        add->setFont(font2);
        add->setCursor(QCursor(Qt::PointingHandCursor));
        add->setStyleSheet(QStringLiteral("text-align: center;"));
        add->setLineWidth(0);
        add->setAlignment(Qt::AlignCenter);
        add->setMargin(0);

        itemLayout->addWidget(add);

        widget = new QWidget(items);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy6);
        widget->setStyleSheet(QLatin1String("QWidget#widget { background-image: url(:/images/bg_lovid.svg);\n"
"background-repeat: repeat-x;\n"
"background-position: left bottom; }"));

        itemLayout->addWidget(widget);


        verticalLayout_3->addLayout(itemLayout);

        scrollArea->setWidget(items);

        verticalLayout->addWidget(scrollArea);

        QWidget::setTabOrder(scrollArea, download);
        QWidget::setTabOrder(download, txtFind);
        QWidget::setTabOrder(txtFind, btnFind);

        retranslateUi(ItemList);

        QMetaObject::connectSlotsByName(ItemList);
    } // setupUi

    void retranslateUi(QWidget *ItemList)
    {
        ItemList->setWindowTitle(QApplication::translate("ItemList", "Form", Q_NULLPTR));
        listHeader->setText(QApplication::translate("ItemList", "Konteineri\302\240failid", Q_NULLPTR));
        count->setText(QApplication::translate("ItemList", "1", Q_NULLPTR));
        download->setText(QString());
        txtFind->setPlaceholderText(QApplication::translate("ItemList", "Enter the personal code, institution or registry code", Q_NULLPTR));
        btnFind->setText(QApplication::translate("ItemList", "Search", Q_NULLPTR));
        add->setText(QApplication::translate("ItemList", "+ LISA VEEL FAILE", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ItemList: public Ui_ItemList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMLIST_H
