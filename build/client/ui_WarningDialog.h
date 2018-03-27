/********************************************************************************
** Form generated from reading UI file 'WarningDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WARNINGDIALOG_H
#define UI_WARNINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/AccordionTitle.h"

QT_BEGIN_NAMESPACE

class Ui_WarningDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *text;
    AccordionTitle *showDetails;
    QLabel *details;
    QWidget *buttonBar;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancel;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *WarningDialog)
    {
        if (WarningDialog->objectName().isEmpty())
            WarningDialog->setObjectName(QStringLiteral("WarningDialog"));
        WarningDialog->setWindowModality(Qt::ApplicationModal);
        WarningDialog->resize(522, 260);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WarningDialog->sizePolicy().hasHeightForWidth());
        WarningDialog->setSizePolicy(sizePolicy);
        WarningDialog->setMaximumSize(QSize(650, 16777215));
        WarningDialog->setStyleSheet(QLatin1String("QDialog\n"
"{\n"
"border-radius: 2px;\n"
"background-color: #FFFFFF;\n"
"}"));
        verticalLayout = new QVBoxLayout(WarningDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(1, 0, 1, 0);
        text = new QLabel(WarningDialog);
        text->setObjectName(QStringLiteral("text"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(text->sizePolicy().hasHeightForWidth());
        text->setSizePolicy(sizePolicy1);
        text->setMinimumSize(QSize(520, 30));
        QFont font;
        font.setFamily(QStringLiteral("Roboto"));
        font.setPointSize(14);
        text->setFont(font);
        text->setCursor(QCursor(Qt::IBeamCursor));
        text->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"margin: 10px 15px 0px 15px;  border: none;\n"
"}"));
        text->setTextFormat(Qt::RichText);
        text->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        text->setWordWrap(true);
        text->setOpenExternalLinks(true);
        text->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse);

        verticalLayout->addWidget(text);

        showDetails = new AccordionTitle(WarningDialog);
        showDetails->setObjectName(QStringLiteral("showDetails"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(showDetails->sizePolicy().hasHeightForWidth());
        showDetails->setSizePolicy(sizePolicy2);
        showDetails->setMinimumSize(QSize(0, 40));
        showDetails->setMaximumSize(QSize(16777215, 30));
        showDetails->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(showDetails);

        details = new QLabel(WarningDialog);
        details->setObjectName(QStringLiteral("details"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(details->sizePolicy().hasHeightForWidth());
        details->setSizePolicy(sizePolicy3);
        details->setMinimumSize(QSize(520, 30));
        details->setCursor(QCursor(Qt::IBeamCursor));
        details->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"margin: 0px 15px 0px 15px; border: none;\n"
"}"));
        details->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        details->setWordWrap(true);
        details->setOpenExternalLinks(true);
        details->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse);

        verticalLayout->addWidget(details);

        buttonBar = new QWidget(WarningDialog);
        buttonBar->setObjectName(QStringLiteral("buttonBar"));
        buttonBar->setMinimumSize(QSize(0, 45));
        buttonBar->setMaximumSize(QSize(16777215, 45));
        buttonBar->setStyleSheet(QStringLiteral("border: none;"));
        horizontalLayout = new QHBoxLayout(buttonBar);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(137, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cancel = new QPushButton(buttonBar);
        cancel->setObjectName(QStringLiteral("cancel"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(cancel->sizePolicy().hasHeightForWidth());
        cancel->setSizePolicy(sizePolicy4);
        cancel->setMinimumSize(QSize(120, 34));
        QFont font1;
        font1.setFamily(QStringLiteral("Roboto Condensed"));
        font1.setPointSize(14);
        cancel->setFont(font1);
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

        horizontalLayout->addWidget(cancel);

        horizontalSpacer_2 = new QSpacerItem(137, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(buttonBar);

        verticalSpacer = new QSpacerItem(20, 25, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(WarningDialog);

        QMetaObject::connectSlotsByName(WarningDialog);
    } // setupUi

    void retranslateUi(QDialog *WarningDialog)
    {
        WarningDialog->setWindowTitle(QApplication::translate("WarningDialog", "Dialog", Q_NULLPTR));
        text->setText(QApplication::translate("WarningDialog", "TextLabel", Q_NULLPTR));
        cancel->setText(QApplication::translate("WarningDialog", "CLOSE", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WarningDialog: public Ui_WarningDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WARNINGDIALOG_H
