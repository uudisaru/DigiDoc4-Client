/********************************************************************************
** Form generated from reading UI file 'ContainerPage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTAINERPAGE_H
#define UI_CONTAINERPAGE_H

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
#include "widgets/FileList.h"
#include "widgets/ItemList.h"
#include "widgets/LabelButton.h"

QT_BEGIN_NAMESPACE

class Ui_ContainerPage
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *containerHeader;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QLabel *container;
    QLabel *containerFile;
    LabelButton *changeLocation;
    QSpacerItem *horizontalSpacer_6;
    QWidget *containerLists;
    QHBoxLayout *horizontalLayout_3;
    FileList *leftPane;
    ItemList *rightPane;
    QWidget *navigationArea;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_9;
    LabelButton *cancel;
    QSpacerItem *actionHiddenSpacer;
    LabelButton *convert;
    LabelButton *navigateToContainer;
    LabelButton *email;
    LabelButton *save;
    QSpacerItem *mainActionSpacer;
    QSpacerItem *horizontalSpacer_7;

    void setupUi(QWidget *ContainerPage)
    {
        if (ContainerPage->objectName().isEmpty())
            ContainerPage->setObjectName(QStringLiteral("ContainerPage"));
        ContainerPage->resize(914, 491);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ContainerPage->sizePolicy().hasHeightForWidth());
        ContainerPage->setSizePolicy(sizePolicy);
        ContainerPage->setMinimumSize(QSize(914, 334));
        verticalLayout = new QVBoxLayout(ContainerPage);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        containerHeader = new QWidget(ContainerPage);
        containerHeader->setObjectName(QStringLiteral("containerHeader"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(containerHeader->sizePolicy().hasHeightForWidth());
        containerHeader->setSizePolicy(sizePolicy1);
        containerHeader->setMinimumSize(QSize(914, 36));
        containerHeader->setMaximumSize(QSize(16777215, 36));
        containerHeader->setStyleSheet(QLatin1String("border: solid #c8c8c8;\n"
"border-width: 0px 0px 1px 0px;\n"
"background-color: #F4F5F6;\n"
""));
        horizontalLayout_4 = new QHBoxLayout(containerHeader);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 3, 0, 7);
        horizontalSpacer_5 = new QSpacerItem(8, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        container = new QLabel(containerHeader);
        container->setObjectName(QStringLiteral("container"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(container->sizePolicy().hasHeightForWidth());
        container->setSizePolicy(sizePolicy2);
        container->setMinimumSize(QSize(45, 22));
        container->setMaximumSize(QSize(77, 16777215));
        QFont font;
        font.setPointSize(14);
        container->setFont(font);
        container->setStyleSheet(QLatin1String("color: #75787B;\n"
"border: none;"));
        container->setLineWidth(0);

        horizontalLayout_4->addWidget(container);

        containerFile = new QLabel(containerHeader);
        containerFile->setObjectName(QStringLiteral("containerFile"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(containerFile->sizePolicy().hasHeightForWidth());
        containerFile->setSizePolicy(sizePolicy3);
        containerFile->setMinimumSize(QSize(640, 22));
        QFont font1;
        font1.setPointSize(14);
        font1.setUnderline(true);
        containerFile->setFont(font1);
        containerFile->setStyleSheet(QLatin1String("color: #353739;\n"
"text-decoration: underline solid;\n"
"border: none;"));
        containerFile->setLineWidth(0);
        containerFile->setMargin(5);

        horizontalLayout_4->addWidget(containerFile);

        changeLocation = new LabelButton(containerHeader);
        changeLocation->setObjectName(QStringLiteral("changeLocation"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(changeLocation->sizePolicy().hasHeightForWidth());
        changeLocation->setSizePolicy(sizePolicy4);
        changeLocation->setMinimumSize(QSize(72, 26));
        changeLocation->setMaximumSize(QSize(85, 26));
        QFont font2;
        font2.setFamily(QStringLiteral("Roboto Condensed"));
        font2.setPointSize(12);
        font2.setKerning(true);
        changeLocation->setFont(font2);
        changeLocation->setCursor(QCursor(Qt::PointingHandCursor));
        changeLocation->setStyleSheet(QStringLiteral("border: none;"));
        changeLocation->setLineWidth(0);
        changeLocation->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        changeLocation->setIndent(26);

        horizontalLayout_4->addWidget(changeLocation);

        horizontalSpacer_6 = new QSpacerItem(14, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);


        verticalLayout->addWidget(containerHeader);

        containerLists = new QWidget(ContainerPage);
        containerLists->setObjectName(QStringLiteral("containerLists"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(1);
        sizePolicy5.setVerticalStretch(1);
        sizePolicy5.setHeightForWidth(containerLists->sizePolicy().hasHeightForWidth());
        containerLists->setSizePolicy(sizePolicy5);
        containerLists->setMinimumSize(QSize(914, 258));
        containerLists->setStyleSheet(QLatin1String("border: 1px solid #c8c8c8;\n"
"background-color: #ffffff;"));
        horizontalLayout_3 = new QHBoxLayout(containerLists);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        leftPane = new FileList(containerLists);
        leftPane->setObjectName(QStringLiteral("leftPane"));
        sizePolicy.setHeightForWidth(leftPane->sizePolicy().hasHeightForWidth());
        leftPane->setSizePolicy(sizePolicy);
        leftPane->setStyleSheet(QLatin1String("border: solid #D9D9D8;\n"
"border-width: 2px 2px 2px 0px; "));

        horizontalLayout_3->addWidget(leftPane);

        rightPane = new ItemList(containerLists);
        rightPane->setObjectName(QStringLiteral("rightPane"));
        rightPane->setEnabled(true);
        sizePolicy.setHeightForWidth(rightPane->sizePolicy().hasHeightForWidth());
        rightPane->setSizePolicy(sizePolicy);
        rightPane->setStyleSheet(QStringLiteral("border: none;"));

        horizontalLayout_3->addWidget(rightPane);


        verticalLayout->addWidget(containerLists);

        navigationArea = new QWidget(ContainerPage);
        navigationArea->setObjectName(QStringLiteral("navigationArea"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(1);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(navigationArea->sizePolicy().hasHeightForWidth());
        navigationArea->setSizePolicy(sizePolicy6);
        navigationArea->setMinimumSize(QSize(914, 40));
        navigationArea->setMaximumSize(QSize(16777215, 40));
        navigationArea->setStyleSheet(QLatin1String("background-color: #F4F5F6;\n"
"border: solid #DEE4E9;\n"
"border-width: 1px 0px 0px 0px; "));
        horizontalLayout_5 = new QHBoxLayout(navigationArea);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_9 = new QSpacerItem(6, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);

        cancel = new LabelButton(navigationArea);
        cancel->setObjectName(QStringLiteral("cancel"));
        sizePolicy4.setHeightForWidth(cancel->sizePolicy().hasHeightForWidth());
        cancel->setSizePolicy(sizePolicy4);
        cancel->setMinimumSize(QSize(75, 25));
        cancel->setMaximumSize(QSize(75, 25));
        QFont font3;
        font3.setFamily(QStringLiteral("Roboto Condensed"));
        font3.setPointSize(12);
        cancel->setFont(font3);
        cancel->setCursor(QCursor(Qt::PointingHandCursor));
        cancel->setStyleSheet(QLatin1String("border: none;\n"
"border-radius: 3px;\n"
"color: #c53e3e;\n"
"text-decoration: none solid rgb(197, 62, 62);"));
        cancel->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(cancel);

        actionHiddenSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(actionHiddenSpacer);

        convert = new LabelButton(navigationArea);
        convert->setObjectName(QStringLiteral("convert"));
        convert->setMinimumSize(QSize(90, 25));
        convert->setMaximumSize(QSize(90, 25));
        QFont font4;
        font4.setFamily(QStringLiteral("Roboto Condensed"));
        font4.setPointSize(12);
        font4.setUnderline(false);
        font4.setStrikeOut(false);
        convert->setFont(font4);
        convert->setCursor(QCursor(Qt::PointingHandCursor));
        convert->setStyleSheet(QLatin1String("border-radius: 3px;\n"
"color: #006eb5;\n"
"text-decoration: none solid rgb(0, 110, 181);\n"
"border: none;"));
        convert->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(convert);

        navigateToContainer = new LabelButton(navigationArea);
        navigateToContainer->setObjectName(QStringLiteral("navigateToContainer"));
        navigateToContainer->setMinimumSize(QSize(160, 25));
        navigateToContainer->setMaximumSize(QSize(160, 25));
        navigateToContainer->setFont(font3);
        navigateToContainer->setCursor(QCursor(Qt::PointingHandCursor));
        navigateToContainer->setStyleSheet(QLatin1String("border-radius: 3px;\n"
"color: #006eb5;\n"
"text-decoration: none solid rgb(0, 110, 181);\n"
"border: none;"));
        navigateToContainer->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(navigateToContainer);

        email = new LabelButton(navigationArea);
        email->setObjectName(QStringLiteral("email"));
        email->setMinimumSize(QSize(150, 25));
        email->setMaximumSize(QSize(150, 25));
        email->setFont(font3);
        email->setCursor(QCursor(Qt::PointingHandCursor));
        email->setStyleSheet(QLatin1String("border-radius: 3px;\n"
"color: #006eb5;\n"
"text-decoration: none solid rgb(0, 110, 181);\n"
"border: none;"));
        email->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(email);

        save = new LabelButton(navigationArea);
        save->setObjectName(QStringLiteral("save"));
        save->setMinimumSize(QSize(182, 25));
        save->setMaximumSize(QSize(182, 25));
        save->setFont(font3);
        save->setCursor(QCursor(Qt::PointingHandCursor));
        save->setStyleSheet(QLatin1String("border-radius: 3px;\n"
"color: #006eb5;\n"
"text-decoration: none solid rgb(0, 110, 181);\n"
"text-align: center;\n"
"border: none;"));
        save->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(save);

        mainActionSpacer = new QSpacerItem(198, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(mainActionSpacer);

        horizontalSpacer_7 = new QSpacerItem(7, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);


        verticalLayout->addWidget(navigationArea);


        retranslateUi(ContainerPage);

        QMetaObject::connectSlotsByName(ContainerPage);
    } // setupUi

    void retranslateUi(QWidget *ContainerPage)
    {
        ContainerPage->setWindowTitle(QApplication::translate("ContainerPage", "Form", Q_NULLPTR));
        container->setText(QApplication::translate("ContainerPage", "Container", Q_NULLPTR));
        containerFile->setText(QApplication::translate("ContainerPage", "C:\\Downloads\\Leping.bdoc", Q_NULLPTR));
        changeLocation->setText(QApplication::translate("ContainerPage", "CHANGE", Q_NULLPTR));
        cancel->setText(QApplication::translate("ContainerPage", "CANCEL", Q_NULLPTR));
        convert->setText(QApplication::translate("ContainerPage", "ENCRYPT", Q_NULLPTR));
        navigateToContainer->setText(QApplication::translate("ContainerPage", "OPEN CONTAINER LOCATION", Q_NULLPTR));
        email->setText(QApplication::translate("ContainerPage", "SEND WITH E-MAIL", Q_NULLPTR));
        save->setText(QApplication::translate("ContainerPage", "SAVE WITHOUT SIGNING", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ContainerPage: public Ui_ContainerPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTAINERPAGE_H
