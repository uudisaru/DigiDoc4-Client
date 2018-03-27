/********************************************************************************
** Form generated from reading UI file 'OtherId.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OTHERID_H
#define UI_OTHERID_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OtherId
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *lblIdName;
    QSpacerItem *verticalSpacer_6;
    QWidget *topContainer;
    QGridLayout *gridLayout;
    QLabel *lblRightText;
    QLabel *lblLeftHdr;
    QLabel *lblRightHdr;
    QLabel *lblLeftText;
    QSpacerItem *verticalSpacer_5;
    QWidget *centerContainer;
    QVBoxLayout *verticalLayout_4;
    QLabel *lblStatusHdr;
    QLabel *lblStatusText;
    QSpacerItem *verticalSpacer_4;
    QWidget *lowerContainer;
    QVBoxLayout *verticalLayout_2;
    QLabel *lblCertHdr;
    QLabel *lblCertText;
    QSpacerItem *verticalSpacer_3;
    QLabel *lblDigiIdInfo;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *OtherId)
    {
        if (OtherId->objectName().isEmpty())
            OtherId->setObjectName(QStringLiteral("OtherId"));
        OtherId->resize(305, 220);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OtherId->sizePolicy().hasHeightForWidth());
        OtherId->setSizePolicy(sizePolicy);
        OtherId->setMinimumSize(QSize(305, 0));
        verticalLayout = new QVBoxLayout(OtherId);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(20, 0, 20, 0);
        verticalSpacer = new QSpacerItem(20, 12, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        lblIdName = new QLabel(OtherId);
        lblIdName->setObjectName(QStringLiteral("lblIdName"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblIdName->sizePolicy().hasHeightForWidth());
        lblIdName->setSizePolicy(sizePolicy1);
        lblIdName->setMinimumSize(QSize(0, 21));
        lblIdName->setMaximumSize(QSize(16777215, 21));
        lblIdName->setStyleSheet(QStringLiteral("border: none; color: #041E42; font-size: 18px; 	font-weight: 500;"));
        lblIdName->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout->addWidget(lblIdName);

        verticalSpacer_6 = new QSpacerItem(20, 11, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_6);

        topContainer = new QWidget(OtherId);
        topContainer->setObjectName(QStringLiteral("topContainer"));
        topContainer->setMinimumSize(QSize(0, 32));
        topContainer->setMaximumSize(QSize(16777215, 32));
        topContainer->setStyleSheet(QStringLiteral("border: none;"));
        gridLayout = new QGridLayout(topContainer);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lblRightText = new QLabel(topContainer);
        lblRightText->setObjectName(QStringLiteral("lblRightText"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lblRightText->sizePolicy().hasHeightForWidth());
        lblRightText->setSizePolicy(sizePolicy2);
        lblRightText->setMinimumSize(QSize(0, 0));
        lblRightText->setStyleSheet(QStringLiteral("color: #353739; font-size: 14px;"));

        gridLayout->addWidget(lblRightText, 3, 1, 1, 1);

        lblLeftHdr = new QLabel(topContainer);
        lblLeftHdr->setObjectName(QStringLiteral("lblLeftHdr"));
        sizePolicy2.setHeightForWidth(lblLeftHdr->sizePolicy().hasHeightForWidth());
        lblLeftHdr->setSizePolicy(sizePolicy2);
        lblLeftHdr->setMinimumSize(QSize(0, 16));
        lblLeftHdr->setStyleSheet(QStringLiteral("color: #75787B; font-size: 11px;"));
        lblLeftHdr->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(lblLeftHdr, 2, 0, 1, 1);

        lblRightHdr = new QLabel(topContainer);
        lblRightHdr->setObjectName(QStringLiteral("lblRightHdr"));
        sizePolicy2.setHeightForWidth(lblRightHdr->sizePolicy().hasHeightForWidth());
        lblRightHdr->setSizePolicy(sizePolicy2);
        lblRightHdr->setMinimumSize(QSize(0, 16));
        lblRightHdr->setStyleSheet(QStringLiteral("color: #75787B; font-size: 11px;"));
        lblRightHdr->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(lblRightHdr, 2, 1, 1, 1);

        lblLeftText = new QLabel(topContainer);
        lblLeftText->setObjectName(QStringLiteral("lblLeftText"));
        sizePolicy2.setHeightForWidth(lblLeftText->sizePolicy().hasHeightForWidth());
        lblLeftText->setSizePolicy(sizePolicy2);
        lblLeftText->setMinimumSize(QSize(0, 0));
        lblLeftText->setStyleSheet(QStringLiteral("color: #353739; font-size: 14px;"));

        gridLayout->addWidget(lblLeftText, 3, 0, 1, 1);


        verticalLayout->addWidget(topContainer);

        verticalSpacer_5 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_5);

        centerContainer = new QWidget(OtherId);
        centerContainer->setObjectName(QStringLiteral("centerContainer"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(48);
        sizePolicy3.setHeightForWidth(centerContainer->sizePolicy().hasHeightForWidth());
        centerContainer->setSizePolicy(sizePolicy3);
        centerContainer->setMinimumSize(QSize(0, 48));
        centerContainer->setMaximumSize(QSize(16777215, 48));
        centerContainer->setStyleSheet(QStringLiteral("border: none;"));
        verticalLayout_4 = new QVBoxLayout(centerContainer);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        lblStatusHdr = new QLabel(centerContainer);
        lblStatusHdr->setObjectName(QStringLiteral("lblStatusHdr"));
        sizePolicy2.setHeightForWidth(lblStatusHdr->sizePolicy().hasHeightForWidth());
        lblStatusHdr->setSizePolicy(sizePolicy2);
        lblStatusHdr->setMinimumSize(QSize(0, 16));
        lblStatusHdr->setStyleSheet(QStringLiteral("color: #75787B; font-size: 11px;"));
        lblStatusHdr->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_4->addWidget(lblStatusHdr);

        lblStatusText = new QLabel(centerContainer);
        lblStatusText->setObjectName(QStringLiteral("lblStatusText"));
        sizePolicy2.setHeightForWidth(lblStatusText->sizePolicy().hasHeightForWidth());
        lblStatusText->setSizePolicy(sizePolicy2);
        lblStatusText->setMinimumSize(QSize(0, 28));
        lblStatusText->setStyleSheet(QStringLiteral("color: #353739; font-size: 14px;"));
        lblStatusText->setWordWrap(true);

        verticalLayout_4->addWidget(lblStatusText);


        verticalLayout->addWidget(centerContainer);

        verticalSpacer_4 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_4);

        lowerContainer = new QWidget(OtherId);
        lowerContainer->setObjectName(QStringLiteral("lowerContainer"));
        lowerContainer->setMinimumSize(QSize(0, 32));
        lowerContainer->setMaximumSize(QSize(16777215, 32));
        lowerContainer->setStyleSheet(QStringLiteral("border: none;"));
        verticalLayout_2 = new QVBoxLayout(lowerContainer);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lblCertHdr = new QLabel(lowerContainer);
        lblCertHdr->setObjectName(QStringLiteral("lblCertHdr"));
        sizePolicy2.setHeightForWidth(lblCertHdr->sizePolicy().hasHeightForWidth());
        lblCertHdr->setSizePolicy(sizePolicy2);
        lblCertHdr->setMinimumSize(QSize(0, 16));
        lblCertHdr->setStyleSheet(QStringLiteral("color: #75787B; font-size: 11px;"));
        lblCertHdr->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_2->addWidget(lblCertHdr);

        lblCertText = new QLabel(lowerContainer);
        lblCertText->setObjectName(QStringLiteral("lblCertText"));
        sizePolicy2.setHeightForWidth(lblCertText->sizePolicy().hasHeightForWidth());
        lblCertText->setSizePolicy(sizePolicy2);
        lblCertText->setMinimumSize(QSize(0, 0));
        lblCertText->setStyleSheet(QStringLiteral("color: #353739; font-size: 14px;"));

        verticalLayout_2->addWidget(lblCertText);


        verticalLayout->addWidget(lowerContainer);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        lblDigiIdInfo = new QLabel(OtherId);
        lblDigiIdInfo->setObjectName(QStringLiteral("lblDigiIdInfo"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(lblDigiIdInfo->sizePolicy().hasHeightForWidth());
        lblDigiIdInfo->setSizePolicy(sizePolicy4);
        lblDigiIdInfo->setMinimumSize(QSize(0, 13));
        lblDigiIdInfo->setMaximumSize(QSize(16777215, 13));
        lblDigiIdInfo->setStyleSheet(QStringLiteral("color: #75787B; font-size: 11px; border: none;"));
        lblDigiIdInfo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(lblDigiIdInfo);

        verticalSpacer_2 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        retranslateUi(OtherId);

        QMetaObject::connectSlotsByName(OtherId);
    } // setupUi

    void retranslateUi(QWidget *OtherId)
    {
        OtherId->setWindowTitle(QString());
        lblIdName->setText(QApplication::translate("OtherId", "Mobile ID", Q_NULLPTR));
        lblRightText->setText(QApplication::translate("OtherId", "01.01.2022", Q_NULLPTR));
        lblLeftHdr->setText(QApplication::translate("OtherId", "DOCUMENT", Q_NULLPTR));
        lblRightHdr->setText(QApplication::translate("OtherId", "DOCUMENT IS VALID UNTIL", Q_NULLPTR));
        lblLeftText->setText(QApplication::translate("OtherId", "PA789456123", Q_NULLPTR));
        lblStatusHdr->setText(QApplication::translate("OtherId", "STATUS", Q_NULLPTR));
        lblStatusText->setText(QApplication::translate("OtherId", "Sertifikaadid on aktiivsed ja Mobiil-ID kasutamine on v\303\265imalik", Q_NULLPTR));
        lblCertHdr->setText(QApplication::translate("OtherId", "CERTIFICATES", Q_NULLPTR));
        lblCertText->setText(QApplication::translate("OtherId", "Kehtivad\302\240kuni 07.08.2022, 20:59:59", Q_NULLPTR));
        lblDigiIdInfo->setText(QApplication::translate("OtherId", "Insert the card into the reader to manage the document", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OtherId: public Ui_OtherId {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OTHERID_H
