/********************************************************************************
** Form generated from reading UI file 'KeyDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEYDIALOG_H
#define UI_KEYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KeyDialog
{
public:
    QVBoxLayout *KeyDialogLayout;
    QLabel *title;
    QTreeWidget *view;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *close;
    QPushButton *showCert;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *KeyDialog)
    {
        if (KeyDialog->objectName().isEmpty())
            KeyDialog->setObjectName(QStringLiteral("KeyDialog"));
        KeyDialog->setWindowModality(Qt::WindowModal);
        KeyDialog->resize(450, 222);
        KeyDialog->setMinimumSize(QSize(450, 222));
        KeyDialog->setStyleSheet(QLatin1String("QWidget{ background-color: #FFFFFF; border: none;}\n"
"QWidget#KeyDialog{ border-radius: 2px; }\n"
""));
        KeyDialogLayout = new QVBoxLayout(KeyDialog);
        KeyDialogLayout->setObjectName(QStringLiteral("KeyDialogLayout"));
        title = new QLabel(KeyDialog);
        title->setObjectName(QStringLiteral("title"));
        title->setStyleSheet(QStringLiteral("border: none;"));

        KeyDialogLayout->addWidget(title);

        view = new QTreeWidget(KeyDialog);
        view->setObjectName(QStringLiteral("view"));
        view->setStyleSheet(QLatin1String("#view {\n"
"	border:none;\n"
"}\n"
"QHeaderView::section {\n"
"	border: 1px solid #D9D9D8;\n"
"	border-width: 0px 1px 1px 0px;\n"
"	padding: 2px 0px 3px 5px;\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                                      stop:0 #FFFFFF, stop:1 #FFFFFF);\n"
"}"));
        view->setRootIsDecorated(false);

        KeyDialogLayout->addWidget(view);

        widget = new QWidget(KeyDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(0, 45));
        widget->setStyleSheet(QStringLiteral("border: none;"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(25, 18, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        close = new QPushButton(widget);
        close->setObjectName(QStringLiteral("close"));
        close->setEnabled(true);
        close->setMinimumSize(QSize(150, 30));
        QFont font;
        font.setPointSize(14);
        close->setFont(font);
        close->setStyleSheet(QLatin1String("QPushButton {\n"
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

        horizontalLayout->addWidget(close);

        showCert = new QPushButton(widget);
        showCert->setObjectName(QStringLiteral("showCert"));
        showCert->setEnabled(true);
        showCert->setMinimumSize(QSize(150, 30));
        showCert->setFont(font);
        showCert->setStyleSheet(QLatin1String("QPushButton {\n"
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

        horizontalLayout->addWidget(showCert);

        horizontalSpacer_2 = new QSpacerItem(25, 18, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        KeyDialogLayout->addWidget(widget);


        retranslateUi(KeyDialog);

        close->setDefault(true);
        showCert->setDefault(false);


        QMetaObject::connectSlotsByName(KeyDialog);
    } // setupUi

    void retranslateUi(QWidget *KeyDialog)
    {
        KeyDialog->setWindowTitle(QApplication::translate("KeyDialog", "Encrypt for", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = view->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("KeyDialog", "Value", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("KeyDialog", "Attribute", Q_NULLPTR));
        close->setText(QApplication::translate("KeyDialog", "CLOSE", Q_NULLPTR));
        showCert->setText(QApplication::translate("KeyDialog", "SHOW CERTIFICATE", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class KeyDialog: public Ui_KeyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEYDIALOG_H
