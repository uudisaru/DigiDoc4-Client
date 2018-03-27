/********************************************************************************
** Form generated from reading UI file 'NoOtherId.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOOTHERID_H
#define UI_NOOTHERID_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NoOtherId
{
public:
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_2;
    QLabel *lblName;
    QSpacerItem *verticalSpacer_3;
    QLabel *topContainer;
    QSpacerItem *verticalSpacer_4;
    QWidget *centerContainer;
    QVBoxLayout *verticalLayout_4;
    QLabel *lblMobileID;
    QLabel *lblDigiID;
    QLabel *lblSmartID;
    QSpacerItem *verticalSpacer_5;
    QWidget *lowerContainer;
    QSpacerItem *verticalSpacer_6;
    QWidget *lblDigiIdInfo;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *NoOtherId)
    {
        if (NoOtherId->objectName().isEmpty())
            NoOtherId->setObjectName(QStringLiteral("NoOtherId"));
        NoOtherId->resize(305, 220);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(NoOtherId->sizePolicy().hasHeightForWidth());
        NoOtherId->setSizePolicy(sizePolicy);
        NoOtherId->setMinimumSize(QSize(305, 0));
        verticalLayout_3 = new QVBoxLayout(NoOtherId);
        verticalLayout_3->setSpacing(2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(10, 2, 10, 2);
        verticalSpacer_2 = new QSpacerItem(20, 12, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        lblName = new QLabel(NoOtherId);
        lblName->setObjectName(QStringLiteral("lblName"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblName->sizePolicy().hasHeightForWidth());
        lblName->setSizePolicy(sizePolicy1);
        lblName->setMinimumSize(QSize(0, 21));
        lblName->setMaximumSize(QSize(16777215, 21));
        lblName->setStyleSheet(QStringLiteral("border: none; color: #041E42; font-size: 18px; 	font-weight: 500;"));
        lblName->setLineWidth(1);
        lblName->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_3->addWidget(lblName);

        verticalSpacer_3 = new QSpacerItem(20, 11, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_3);

        topContainer = new QLabel(NoOtherId);
        topContainer->setObjectName(QStringLiteral("topContainer"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(topContainer->sizePolicy().hasHeightForWidth());
        topContainer->setSizePolicy(sizePolicy2);
        topContainer->setMinimumSize(QSize(0, 32));
        topContainer->setMaximumSize(QSize(16777215, 32));
        topContainer->setStyleSheet(QStringLiteral("color: #353739; line-height: 16px; border: none;"));
        topContainer->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(topContainer);

        verticalSpacer_4 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_4);

        centerContainer = new QWidget(NoOtherId);
        centerContainer->setObjectName(QStringLiteral("centerContainer"));
        centerContainer->setMinimumSize(QSize(0, 48));
        centerContainer->setMaximumSize(QSize(16777215, 48));
        centerContainer->setStyleSheet(QStringLiteral("border: none;"));
        verticalLayout_4 = new QVBoxLayout(centerContainer);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        lblMobileID = new QLabel(centerContainer);
        lblMobileID->setObjectName(QStringLiteral("lblMobileID"));
        sizePolicy2.setHeightForWidth(lblMobileID->sizePolicy().hasHeightForWidth());
        lblMobileID->setSizePolicy(sizePolicy2);
        lblMobileID->setMinimumSize(QSize(0, 16));
        lblMobileID->setStyleSheet(QStringLiteral("color: #006EB5;  line-height: 16px;"));
        lblMobileID->setAlignment(Qt::AlignCenter);
        lblMobileID->setOpenExternalLinks(true);
        lblMobileID->setTextInteractionFlags(Qt::TextBrowserInteraction);

        verticalLayout_4->addWidget(lblMobileID);

        lblDigiID = new QLabel(centerContainer);
        lblDigiID->setObjectName(QStringLiteral("lblDigiID"));
        sizePolicy2.setHeightForWidth(lblDigiID->sizePolicy().hasHeightForWidth());
        lblDigiID->setSizePolicy(sizePolicy2);
        lblDigiID->setMinimumSize(QSize(0, 16));
        lblDigiID->setStyleSheet(QStringLiteral("color: #006EB5;  line-height: 16px;"));
        lblDigiID->setAlignment(Qt::AlignCenter);
        lblDigiID->setOpenExternalLinks(true);
        lblDigiID->setTextInteractionFlags(Qt::TextBrowserInteraction);

        verticalLayout_4->addWidget(lblDigiID);

        lblSmartID = new QLabel(centerContainer);
        lblSmartID->setObjectName(QStringLiteral("lblSmartID"));
        sizePolicy2.setHeightForWidth(lblSmartID->sizePolicy().hasHeightForWidth());
        lblSmartID->setSizePolicy(sizePolicy2);
        lblSmartID->setMinimumSize(QSize(0, 16));
        lblSmartID->setStyleSheet(QStringLiteral("color: #006EB5; line-height: 16px;"));
        lblSmartID->setAlignment(Qt::AlignCenter);
        lblSmartID->setOpenExternalLinks(true);
        lblSmartID->setTextInteractionFlags(Qt::TextBrowserInteraction);

        verticalLayout_4->addWidget(lblSmartID);


        verticalLayout_3->addWidget(centerContainer);

        verticalSpacer_5 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_5);

        lowerContainer = new QWidget(NoOtherId);
        lowerContainer->setObjectName(QStringLiteral("lowerContainer"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lowerContainer->sizePolicy().hasHeightForWidth());
        lowerContainer->setSizePolicy(sizePolicy3);
        lowerContainer->setMinimumSize(QSize(0, 32));
        lowerContainer->setMaximumSize(QSize(16777215, 32));
        lowerContainer->setStyleSheet(QStringLiteral("border: none;"));

        verticalLayout_3->addWidget(lowerContainer);

        verticalSpacer_6 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_3->addItem(verticalSpacer_6);

        lblDigiIdInfo = new QWidget(NoOtherId);
        lblDigiIdInfo->setObjectName(QStringLiteral("lblDigiIdInfo"));
        lblDigiIdInfo->setMinimumSize(QSize(0, 13));
        lblDigiIdInfo->setMaximumSize(QSize(16777215, 13));
        lblDigiIdInfo->setStyleSheet(QStringLiteral("border: none;"));

        verticalLayout_3->addWidget(lblDigiIdInfo);

        verticalSpacer = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        retranslateUi(NoOtherId);

        QMetaObject::connectSlotsByName(NoOtherId);
    } // setupUi

    void retranslateUi(QWidget *NoOtherId)
    {
        NoOtherId->setWindowTitle(QString());
        lblName->setText(QApplication::translate("NoOtherId", "Other ID", Q_NULLPTR));
        topContainer->setText(QApplication::translate("NoOtherId", "You do not have other eIDs.\n"
"Learn more info here:", Q_NULLPTR));
        lblMobileID->setText(QApplication::translate("NoOtherId", "<a href='http://mobiil.id.ee'>Mobiil-ID</a>\n"
"", Q_NULLPTR));
        lblDigiID->setText(QApplication::translate("NoOtherId", "<a href=\"https://www.id.ee/?lang=et&id=34178/\">Digi-ID</a>", Q_NULLPTR));
        lblSmartID->setText(QApplication::translate("NoOtherId", "<a href=\"https://www.smart-id.com/et/\">SmartID</a>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NoOtherId: public Ui_NoOtherId {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOOTHERID_H
