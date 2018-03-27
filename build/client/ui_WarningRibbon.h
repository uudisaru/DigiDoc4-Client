/********************************************************************************
** Form generated from reading UI file 'WarningRibbon.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WARNINGRIBBON_H
#define UI_WARNINGRIBBON_H

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

class Ui_WarningRibbon
{
public:
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QWidget *leftImage;
    QLabel *details;
    QWidget *rightImage;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *WarningRibbon)
    {
        if (WarningRibbon->objectName().isEmpty())
            WarningRibbon->setObjectName(QStringLiteral("WarningRibbon"));
        WarningRibbon->resize(914, 21);
        WarningRibbon->setMinimumSize(QSize(914, 21));
        WarningRibbon->setMaximumSize(QSize(16777215, 21));
        WarningRibbon->setStyleSheet(QLatin1String("padding: 0px 0px 0px 6px;\n"
"border: solid #B5AA92;\n"
"border-width: 0px 0px 1px 0px;\n"
"background-color: #F0BF72;\n"
"color: #353739;"));
        horizontalLayout = new QHBoxLayout(WarningRibbon);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        leftImage = new QWidget(WarningRibbon);
        leftImage->setObjectName(QStringLiteral("leftImage"));
        leftImage->setMinimumSize(QSize(20, 20));
        leftImage->setMaximumSize(QSize(20, 20));
        leftImage->setStyleSheet(QStringLiteral("border: none; background-image: url(:/images/icon_ribbon_down.svg);"));

        horizontalLayout->addWidget(leftImage);

        details = new QLabel(WarningRibbon);
        details->setObjectName(QStringLiteral("details"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(details->sizePolicy().hasHeightForWidth());
        details->setSizePolicy(sizePolicy);
        details->setMinimumSize(QSize(50, 16));
        details->setMaximumSize(QSize(100, 16));
        QFont font;
        font.setFamily(QStringLiteral("Roboto"));
        font.setPointSize(12);
        font.setUnderline(false);
        font.setStrikeOut(false);
        details->setFont(font);
        details->setStyleSheet(QStringLiteral("color:#353739; border: none; background-color: #F0BF72;"));
        details->setAlignment(Qt::AlignCenter);
        details->setWordWrap(true);

        horizontalLayout->addWidget(details);

        rightImage = new QWidget(WarningRibbon);
        rightImage->setObjectName(QStringLiteral("rightImage"));
        rightImage->setMinimumSize(QSize(20, 20));
        rightImage->setStyleSheet(QStringLiteral("border: none; background-image: url(:/images/icon_ribbon_down.svg);"));

        horizontalLayout->addWidget(rightImage);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        retranslateUi(WarningRibbon);

        QMetaObject::connectSlotsByName(WarningRibbon);
    } // setupUi

    void retranslateUi(QWidget *WarningRibbon)
    {
        WarningRibbon->setWindowTitle(QApplication::translate("WarningRibbon", "Form", Q_NULLPTR));
        details->setText(QApplication::translate("WarningRibbon", "%n message", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WarningRibbon: public Ui_WarningRibbon {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WARNINGRIBBON_H
