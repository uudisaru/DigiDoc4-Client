/********************************************************************************
** Form generated from reading UI file 'MainAction.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINACTION_H
#define UI_MAINACTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainAction
{
public:
    QHBoxLayout *horizontalLayout;
    QPushButton *mainAction;
    QToolButton *otherCards;

    void setupUi(QWidget *MainAction)
    {
        if (MainAction->objectName().isEmpty())
            MainAction->setObjectName(QStringLiteral("MainAction"));
        MainAction->resize(200, 65);
        MainAction->setStyleSheet(QLatin1String("border-radius: 2px 0 0 0;\n"
"background-color: #1a7dbc;\n"
""));
        horizontalLayout = new QHBoxLayout(MainAction);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        mainAction = new QPushButton(MainAction);
        mainAction->setObjectName(QStringLiteral("mainAction"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mainAction->sizePolicy().hasHeightForWidth());
        mainAction->setSizePolicy(sizePolicy);
        mainAction->setMinimumSize(QSize(166, 65));
        mainAction->setMaximumSize(QSize(16777215, 65));
        QFont font;
        font.setFamily(QStringLiteral("Roboto Condensed"));
        font.setPointSize(16);
        mainAction->setFont(font);
        mainAction->setCursor(QCursor(Qt::PointingHandCursor));
        mainAction->setStyleSheet(QLatin1String("QPushButton {\n"
"	border-top-left-radius: 2px;\n"
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
""));

        horizontalLayout->addWidget(mainAction);

        otherCards = new QToolButton(MainAction);
        otherCards->setObjectName(QStringLiteral("otherCards"));
        otherCards->setMinimumSize(QSize(34, 65));
        otherCards->setMaximumSize(QSize(34, 65));
        otherCards->setCursor(QCursor(Qt::PointingHandCursor));
        otherCards->setStyleSheet(QLatin1String("QToolButton {\n"
"	border: solid #1a7dbc;\n"
"	border-width: 0px 0px 0px 1px;\n"
"	background-color: #006EB5;\n"
"}\n"
"QToolButton:pressed {\n"
"	background-color: #41B6E6;\n"
"}\n"
"QToolButton:hover:!pressed {\n"
"	background-color: #008DCF;\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/arrow_up_white.svg"), QSize(), QIcon::Normal, QIcon::On);
        otherCards->setIcon(icon);
        otherCards->setIconSize(QSize(14, 8));

        horizontalLayout->addWidget(otherCards);


        retranslateUi(MainAction);

        QMetaObject::connectSlotsByName(MainAction);
    } // setupUi

    void retranslateUi(QWidget *MainAction)
    {
        MainAction->setWindowTitle(QApplication::translate("MainAction", "Form", Q_NULLPTR));
        mainAction->setText(QApplication::translate("MainAction", "ALLKIRJASTA\n"
"ID-KAARDIGA", Q_NULLPTR));
        otherCards->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainAction: public Ui_MainAction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINACTION_H
