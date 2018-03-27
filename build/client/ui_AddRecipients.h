/********************************************************************************
** Form generated from reading UI file 'AddRecipients.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRECIPIENTS_H
#define UI_ADDRECIPIENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/ItemList.h"

QT_BEGIN_NAMESPACE

class Ui_AddRecipients
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *containerLists;
    QHBoxLayout *horizontalLayout_3;
    ItemList *leftPane;
    ItemList *rightPane;
    QWidget *navigationArea;
    QPushButton *fromCard;
    QPushButton *fromFile;
    QPushButton *fromHistory;
    QPushButton *confirm;
    QPushButton *cancel;

    void setupUi(QDialog *AddRecipients)
    {
        if (AddRecipients->objectName().isEmpty())
            AddRecipients->setObjectName(QStringLiteral("AddRecipients"));
        AddRecipients->setWindowModality(Qt::WindowModal);
        AddRecipients->resize(880, 480);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AddRecipients->sizePolicy().hasHeightForWidth());
        AddRecipients->setSizePolicy(sizePolicy);
        AddRecipients->setMinimumSize(QSize(880, 480));
        AddRecipients->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout = new QVBoxLayout(AddRecipients);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        containerLists = new QWidget(AddRecipients);
        containerLists->setObjectName(QStringLiteral("containerLists"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(containerLists->sizePolicy().hasHeightForWidth());
        containerLists->setSizePolicy(sizePolicy1);
        containerLists->setMinimumSize(QSize(880, 399));
        containerLists->setStyleSheet(QLatin1String("QWidget#containerLists\n"
"{\n"
"border: 1px solid #c8c8c8;\n"
"background-color: #ffffff;\n"
"}"));
        horizontalLayout_3 = new QHBoxLayout(containerLists);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        leftPane = new ItemList(containerLists);
        leftPane->setObjectName(QStringLiteral("leftPane"));
        sizePolicy.setHeightForWidth(leftPane->sizePolicy().hasHeightForWidth());
        leftPane->setSizePolicy(sizePolicy);
        leftPane->setStyleSheet(QLatin1String("border: solid #D9D9D8;\n"
"border-width: 2px 2px 2px 2px; "));

        horizontalLayout_3->addWidget(leftPane);

        rightPane = new ItemList(containerLists);
        rightPane->setObjectName(QStringLiteral("rightPane"));
        rightPane->setEnabled(true);
        sizePolicy.setHeightForWidth(rightPane->sizePolicy().hasHeightForWidth());
        rightPane->setSizePolicy(sizePolicy);
        rightPane->setStyleSheet(QStringLiteral("border: none;"));

        horizontalLayout_3->addWidget(rightPane);


        verticalLayout->addWidget(containerLists);

        navigationArea = new QWidget(AddRecipients);
        navigationArea->setObjectName(QStringLiteral("navigationArea"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(navigationArea->sizePolicy().hasHeightForWidth());
        navigationArea->setSizePolicy(sizePolicy2);
        navigationArea->setMinimumSize(QSize(0, 40));
        navigationArea->setMaximumSize(QSize(16777215, 40));
        navigationArea->setStyleSheet(QStringLiteral("background-color: #f7f7f7;"));
        fromCard = new QPushButton(navigationArea);
        fromCard->setObjectName(QStringLiteral("fromCard"));
        fromCard->setGeometry(QRect(30, 8, 145, 25));
        fromCard->setMinimumSize(QSize(145, 25));
        fromCard->setMaximumSize(QSize(145, 25));
        fromCard->setStyleSheet(QLatin1String("QPushButton {\n"
"	border-radius: 2px; \n"
"	border: none;\n"
"	color: #006EB5;\n"
"}\n"
"QPushButton:pressed {\n"
"	color: #FFFFFF;\n"
"	background-color: #006EB5;\n"
"}\n"
"QPushButton:hover:!pressed {\n"
"	border: 1px solid #006EB5;\n"
"	color: #006EB5;\n"
"}\n"
"QPushButton:disabled {\n"
"	color: #75787B;\n"
"}"));
        fromCard->setAutoDefault(false);
        fromFile = new QPushButton(navigationArea);
        fromFile->setObjectName(QStringLiteral("fromFile"));
        fromFile->setGeometry(QRect(187, 8, 134, 25));
        fromFile->setMinimumSize(QSize(134, 25));
        fromFile->setMaximumSize(QSize(134, 25));
        fromFile->setStyleSheet(QLatin1String("QPushButton {\n"
"	border-radius: 2px; \n"
"	border: none;\n"
"	color: #006EB5;\n"
"}\n"
"QPushButton:pressed {\n"
"	color: #FFFFFF;\n"
"	background-color: #006EB5;\n"
"}\n"
"QPushButton:hover:!pressed {\n"
"	border: 1px solid #006EB5;\n"
"	color: #006EB5;\n"
"}\n"
"QPushButton:disabled {\n"
"	color: #75787B;\n"
"}"));
        fromFile->setAutoDefault(false);
        fromHistory = new QPushButton(navigationArea);
        fromHistory->setObjectName(QStringLiteral("fromHistory"));
        fromHistory->setGeometry(QRect(333, 8, 145, 25));
        fromHistory->setMinimumSize(QSize(145, 25));
        fromHistory->setMaximumSize(QSize(145, 25));
        fromHistory->setStyleSheet(QLatin1String("QPushButton {\n"
"	border-radius: 2px; \n"
"	border: none;\n"
"	color: #006EB5;\n"
"}\n"
"QPushButton:pressed {\n"
"	color: #FFFFFF;\n"
"	background-color: #006EB5;\n"
"}\n"
"QPushButton:hover:!pressed {\n"
"	border: 1px solid #006EB5;\n"
"	color: #006EB5;\n"
"}\n"
"QPushButton:disabled {\n"
"	color: #75787B;\n"
"}"));
        fromHistory->setAutoDefault(false);
        confirm = new QPushButton(navigationArea);
        confirm->setObjectName(QStringLiteral("confirm"));
        confirm->setGeometry(QRect(740, 8, 120, 25));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(confirm->sizePolicy().hasHeightForWidth());
        confirm->setSizePolicy(sizePolicy3);
        confirm->setMinimumSize(QSize(120, 25));
        confirm->setMaximumSize(QSize(120, 20));
        confirm->setStyleSheet(QLatin1String("QPushButton {\n"
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
        cancel = new QPushButton(navigationArea);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setGeometry(QRect(618, 8, 120, 25));
        cancel->setMinimumSize(QSize(120, 25));
        cancel->setMaximumSize(QSize(120, 25));
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

        verticalLayout->addWidget(navigationArea);

        QWidget::setTabOrder(fromCard, fromFile);
        QWidget::setTabOrder(fromFile, fromHistory);
        QWidget::setTabOrder(fromHistory, cancel);
        QWidget::setTabOrder(cancel, confirm);

        retranslateUi(AddRecipients);

        confirm->setDefault(true);


        QMetaObject::connectSlotsByName(AddRecipients);
    } // setupUi

    void retranslateUi(QDialog *AddRecipients)
    {
        fromCard->setText(QApplication::translate("AddRecipients", "From card", Q_NULLPTR));
        fromFile->setText(QApplication::translate("AddRecipients", "From file", Q_NULLPTR));
        fromHistory->setText(QApplication::translate("AddRecipients", "From history", Q_NULLPTR));
        confirm->setText(QApplication::translate("AddRecipients", "Confirm", Q_NULLPTR));
        cancel->setText(QApplication::translate("AddRecipients", "Cancel", Q_NULLPTR));
        Q_UNUSED(AddRecipients);
    } // retranslateUi

};

namespace Ui {
    class AddRecipients: public Ui_AddRecipients {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRECIPIENTS_H
