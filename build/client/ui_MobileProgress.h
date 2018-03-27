/********************************************************************************
** Form generated from reading UI file 'MobileProgress.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOBILEPROGRESS_H
#define UI_MOBILEPROGRESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MobileProgress
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *code;
    QLabel *labelError;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QProgressBar *signProgressBar;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancel;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *MobileProgress)
    {
        if (MobileProgress->objectName().isEmpty())
            MobileProgress->setObjectName(QStringLiteral("MobileProgress"));
        MobileProgress->setWindowModality(Qt::ApplicationModal);
        MobileProgress->resize(450, 185);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MobileProgress->sizePolicy().hasHeightForWidth());
        MobileProgress->setSizePolicy(sizePolicy);
        MobileProgress->setMinimumSize(QSize(450, 185));
        MobileProgress->setMaximumSize(QSize(16777215, 16777215));
        MobileProgress->setStyleSheet(QLatin1String("border-radius: 2px;\n"
"background-color: #FFFFFF;"));
        verticalLayout = new QVBoxLayout(MobileProgress);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        code = new QLabel(MobileProgress);
        code->setObjectName(QStringLiteral("code"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(code->sizePolicy().hasHeightForWidth());
        code->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        code->setFont(font);
        code->setStyleSheet(QStringLiteral("color: #000000; border: none;"));
        code->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(code);

        labelError = new QLabel(MobileProgress);
        labelError->setObjectName(QStringLiteral("labelError"));
        sizePolicy.setHeightForWidth(labelError->sizePolicy().hasHeightForWidth());
        labelError->setSizePolicy(sizePolicy);
        labelError->setMinimumSize(QSize(426, 16));
        labelError->setMaximumSize(QSize(426, 16777215));
        labelError->setStyleSheet(QLatin1String("color: #000000;\n"
"line-height: 15px;\n"
"border: none;"));
        labelError->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelError);

        widget_2 = new QWidget(MobileProgress);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMinimumSize(QSize(0, 40));
        widget_2->setMaximumSize(QSize(16777215, 40));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        signProgressBar = new QProgressBar(widget_2);
        signProgressBar->setObjectName(QStringLiteral("signProgressBar"));
        signProgressBar->setMinimumSize(QSize(390, 0));
        signProgressBar->setMaximumSize(QSize(390, 16777215));
        signProgressBar->setMaximum(60);
        signProgressBar->setValue(0);
        signProgressBar->setAlignment(Qt::AlignCenter);
        signProgressBar->setTextVisible(true);

        horizontalLayout_2->addWidget(signProgressBar);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addWidget(widget_2);

        widget = new QWidget(MobileProgress);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(0, 40));
        widget->setStyleSheet(QStringLiteral("border: none;"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer = new QSpacerItem(124, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cancel = new QPushButton(widget);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setEnabled(true);
        cancel->setMinimumSize(QSize(120, 30));
        cancel->setMaximumSize(QSize(120, 30));
        QFont font1;
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

        horizontalSpacer_2 = new QSpacerItem(124, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widget);


        retranslateUi(MobileProgress);

        QMetaObject::connectSlotsByName(MobileProgress);
    } // setupUi

    void retranslateUi(QDialog *MobileProgress)
    {
        MobileProgress->setWindowTitle(QApplication::translate("MobileProgress", "Dialog", Q_NULLPTR));
        code->setText(QString());
        labelError->setText(QString());
        signProgressBar->setFormat(QApplication::translate("MobileProgress", "%v sec", Q_NULLPTR));
        cancel->setText(QApplication::translate("MobileProgress", "CANCEL", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MobileProgress: public Ui_MobileProgress {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOBILEPROGRESS_H
