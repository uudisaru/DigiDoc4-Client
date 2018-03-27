/********************************************************************************
** Form generated from reading UI file 'VerifyCert.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERIFYCERT_H
#define UI_VERIFYCERT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VerifyCert
{
public:
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QWidget *nameWidget;
    QHBoxLayout *horizontalLayout_2;
    QWidget *nameLeft;
    QLabel *name;
    QWidget *nameRight;
    QWidget *centerWidget;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_3;
    QLabel *validUntil;
    QLabel *error;
    QSpacerItem *verticalSpacerAboveBtn;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *changePIN;
    QSpacerItem *horizontalSpacer_2;
    QLabel *tempelText;
    QSpacerItem *verticalSpacerBelowBtn;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *forgotPinLink;
    QLabel *details;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *VerifyCert)
    {
        if (VerifyCert->objectName().isEmpty())
            VerifyCert->setObjectName(QStringLiteral("VerifyCert"));
        VerifyCert->resize(305, 220);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(VerifyCert->sizePolicy().hasHeightForWidth());
        VerifyCert->setSizePolicy(sizePolicy);
        VerifyCert->setMinimumSize(QSize(305, 0));
        verticalLayout_2 = new QVBoxLayout(VerifyCert);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(5, 2, 5, 2);
        verticalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        nameWidget = new QWidget(VerifyCert);
        nameWidget->setObjectName(QStringLiteral("nameWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(nameWidget->sizePolicy().hasHeightForWidth());
        nameWidget->setSizePolicy(sizePolicy1);
        nameWidget->setMinimumSize(QSize(0, 21));
        nameWidget->setStyleSheet(QStringLiteral("border: none;"));
        horizontalLayout_2 = new QHBoxLayout(nameWidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        nameLeft = new QWidget(nameWidget);
        nameLeft->setObjectName(QStringLiteral("nameLeft"));

        horizontalLayout_2->addWidget(nameLeft);

        name = new QLabel(nameWidget);
        name->setObjectName(QStringLiteral("name"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(name->sizePolicy().hasHeightForWidth());
        name->setSizePolicy(sizePolicy2);
        name->setMinimumSize(QSize(0, 21));
        QFont font;
        font.setFamily(QStringLiteral("Roboto"));
        font.setPointSize(18);
        name->setFont(font);
        name->setStyleSheet(QStringLiteral("border: none; color: #041E42;"));
        name->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(name);

        nameRight = new QWidget(nameWidget);
        nameRight->setObjectName(QStringLiteral("nameRight"));

        horizontalLayout_2->addWidget(nameRight);


        verticalLayout_2->addWidget(nameWidget);

        centerWidget = new QWidget(VerifyCert);
        centerWidget->setObjectName(QStringLiteral("centerWidget"));
        centerWidget->setMinimumSize(QSize(0, 49));
        centerWidget->setStyleSheet(QStringLiteral("border: none;"));
        verticalLayout_3 = new QVBoxLayout(centerWidget);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(5, 0, 5, 0);
        widget_3 = new QWidget(centerWidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        sizePolicy1.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy1);
        widget_3->setMinimumSize(QSize(0, 4));
        widget_3->setMaximumSize(QSize(16777215, 7));
        widget_3->setStyleSheet(QStringLiteral("border: none;"));

        verticalLayout_3->addWidget(widget_3);

        validUntil = new QLabel(centerWidget);
        validUntil->setObjectName(QStringLiteral("validUntil"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(validUntil->sizePolicy().hasHeightForWidth());
        validUntil->setSizePolicy(sizePolicy3);
        validUntil->setMinimumSize(QSize(0, 33));
        QFont font1;
        font1.setFamily(QStringLiteral("Roboto"));
        font1.setPointSize(14);
        validUntil->setFont(font1);
        validUntil->setStyleSheet(QStringLiteral("color: #353739; border: none;"));
        validUntil->setAlignment(Qt::AlignCenter);
        validUntil->setWordWrap(true);

        verticalLayout_3->addWidget(validUntil);

        error = new QLabel(centerWidget);
        error->setObjectName(QStringLiteral("error"));
        sizePolicy3.setHeightForWidth(error->sizePolicy().hasHeightForWidth());
        error->setSizePolicy(sizePolicy3);
        QFont font2;
        font2.setFamily(QStringLiteral("Roboto"));
        font2.setPointSize(12);
        error->setFont(font2);
        error->setStyleSheet(QLatin1String("padding: 6px 6px 6px 6px;\n"
"line-height: 14px;\n"
"border: 1px solid #E9CB8F;\n"
"border-radius: 2px;\n"
"background-color: #F8DDA7;\n"
""));
        error->setAlignment(Qt::AlignCenter);
        error->setWordWrap(true);
        error->setOpenExternalLinks(true);
        error->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse);

        verticalLayout_3->addWidget(error);

        verticalSpacerAboveBtn = new QSpacerItem(20, 7, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacerAboveBtn);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(15);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        changePIN = new QPushButton(centerWidget);
        changePIN->setObjectName(QStringLiteral("changePIN"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(changePIN->sizePolicy().hasHeightForWidth());
        changePIN->setSizePolicy(sizePolicy4);
        changePIN->setMinimumSize(QSize(157, 30));
        changePIN->setMaximumSize(QSize(16777215, 30));
        changePIN->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(changePIN);

        horizontalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(centerWidget);

        tempelText = new QLabel(VerifyCert);
        tempelText->setObjectName(QStringLiteral("tempelText"));
        tempelText->setEnabled(true);
        tempelText->setMinimumSize(QSize(0, 30));
        tempelText->setFont(font1);
        tempelText->setStyleSheet(QStringLiteral("color: #353739; border: none;"));
        tempelText->setAlignment(Qt::AlignCenter);
        tempelText->setWordWrap(true);

        verticalLayout_2->addWidget(tempelText);

        verticalSpacerBelowBtn = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacerBelowBtn);

        widget = new QWidget(VerifyCert);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy5);
        widget->setMinimumSize(QSize(0, 38));
        widget->setMaximumSize(QSize(16777215, 38));
        widget->setStyleSheet(QStringLiteral("border: none;"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        forgotPinLink = new QLabel(widget);
        forgotPinLink->setObjectName(QStringLiteral("forgotPinLink"));
        forgotPinLink->setMinimumSize(QSize(0, 19));
        forgotPinLink->setMaximumSize(QSize(16777215, 19));
        forgotPinLink->setFont(font2);
        forgotPinLink->setContextMenuPolicy(Qt::NoContextMenu);
        forgotPinLink->setStyleSheet(QLatin1String("color: #75787B;\n"
"line-height: 19px;\n"
"text-align: center;\n"
""));
        forgotPinLink->setAlignment(Qt::AlignCenter);
        forgotPinLink->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse);

        verticalLayout->addWidget(forgotPinLink);

        details = new QLabel(widget);
        details->setObjectName(QStringLiteral("details"));
        details->setMinimumSize(QSize(0, 19));
        details->setMaximumSize(QSize(16777215, 19));
        details->setFont(font2);
        details->setContextMenuPolicy(Qt::NoContextMenu);
        details->setStyleSheet(QLatin1String("color: #75787B;\n"
"line-height: 19px;\n"
"text-align: center;"));
        details->setTextFormat(Qt::AutoText);
        details->setAlignment(Qt::AlignCenter);
        details->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse);

        verticalLayout->addWidget(details);


        verticalLayout_2->addWidget(widget);

        verticalSpacer_3 = new QSpacerItem(1, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);


        retranslateUi(VerifyCert);

        QMetaObject::connectSlotsByName(VerifyCert);
    } // setupUi

    void retranslateUi(QWidget *VerifyCert)
    {
        name->setText(QApplication::translate("VerifyCert", "name", Q_NULLPTR));
        validUntil->setText(QApplication::translate("VerifyCert", "validUntil", Q_NULLPTR));
        error->setText(QApplication::translate("VerifyCert", "PIN2 on blokeeritud, kuna PIN2 koodi on 3 korda valesti sisestatud. T\303\274hista blokeering, et PIN2 uuesti kasutada.", Q_NULLPTR));
        changePIN->setText(QApplication::translate("VerifyCert", "changePIN", Q_NULLPTR));
        tempelText->setText(QApplication::translate("VerifyCert", "PIN can be changed only using eToken utility", Q_NULLPTR));
        forgotPinLink->setText(QApplication::translate("VerifyCert", "forgot_pin", Q_NULLPTR));
        details->setText(QApplication::translate("VerifyCert", "details", Q_NULLPTR));
        Q_UNUSED(VerifyCert);
    } // retranslateUi

};

namespace Ui {
    class VerifyCert: public Ui_VerifyCert {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERIFYCERT_H
