/********************************************************************************
** Form generated from reading UI file 'WaitDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WAITDIALOG_H
#define UI_WAITDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_WaitDialog
{
public:
    QLabel *label;
    QLabel *movie;

    void setupUi(QDialog *WaitDialog)
    {
        if (WaitDialog->objectName().isEmpty())
            WaitDialog->setObjectName(QStringLiteral("WaitDialog"));
        WaitDialog->resize(328, 179);
        WaitDialog->setMinimumSize(QSize(328, 179));
        WaitDialog->setMaximumSize(QSize(328, 179));
        label = new QLabel(WaitDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 32, 211, 33));
        QFont font;
        font.setPointSize(24);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color: #041E42; border: none;"));
        label->setAlignment(Qt::AlignCenter);
        movie = new QLabel(WaitDialog);
        movie->setObjectName(QStringLiteral("movie"));
        movie->setGeometry(QRect(132, 82, 64, 64));
        movie->setMinimumSize(QSize(64, 64));
        movie->setMaximumSize(QSize(64, 64));

        retranslateUi(WaitDialog);

        QMetaObject::connectSlotsByName(WaitDialog);
    } // setupUi

    void retranslateUi(QDialog *WaitDialog)
    {
        WaitDialog->setWindowTitle(QApplication::translate("WaitDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("WaitDialog", "Decrypting", Q_NULLPTR));
        movie->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WaitDialog: public Ui_WaitDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WAITDIALOG_H
