/********************************************************************************
** Form generated from reading UI file 'CertificateWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CERTIFICATEWIDGET_H
#define UI_CERTIFICATEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CertificateDialog
{
public:
    QVBoxLayout *WidgetLayout;
    QTabWidget *tabWidget;
    QWidget *general;
    QVBoxLayout *generalLayout;
    QTextEdit *info;
    QWidget *details;
    QVBoxLayout *detailsLayout;
    QTreeWidget *parameters;
    QPlainTextEdit *parameterContent;
    QWidget *path;
    QVBoxLayout *pathLayout;
    QTreeWidget *pathTree;
    QLabel *pathMsg;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CertificateDialog)
    {
        if (CertificateDialog->objectName().isEmpty())
            CertificateDialog->setObjectName(QStringLiteral("CertificateDialog"));
        CertificateDialog->resize(400, 453);
        CertificateDialog->setStyleSheet(QStringLiteral("#parameterContent { font-family: \"Liberation Mono, Courier New\"; }"));
        WidgetLayout = new QVBoxLayout(CertificateDialog);
        WidgetLayout->setObjectName(QStringLiteral("WidgetLayout"));
        tabWidget = new QTabWidget(CertificateDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        general = new QWidget();
        general->setObjectName(QStringLiteral("general"));
        generalLayout = new QVBoxLayout(general);
        generalLayout->setObjectName(QStringLiteral("generalLayout"));
        info = new QTextEdit(general);
        info->setObjectName(QStringLiteral("info"));
        info->setReadOnly(true);

        generalLayout->addWidget(info);

        tabWidget->addTab(general, QString());
        details = new QWidget();
        details->setObjectName(QStringLiteral("details"));
        detailsLayout = new QVBoxLayout(details);
        detailsLayout->setObjectName(QStringLiteral("detailsLayout"));
        parameters = new QTreeWidget(details);
        parameters->setObjectName(QStringLiteral("parameters"));
        parameters->setRootIsDecorated(false);

        detailsLayout->addWidget(parameters);

        parameterContent = new QPlainTextEdit(details);
        parameterContent->setObjectName(QStringLiteral("parameterContent"));
        parameterContent->setReadOnly(true);

        detailsLayout->addWidget(parameterContent);

        tabWidget->addTab(details, QString());
        path = new QWidget();
        path->setObjectName(QStringLiteral("path"));
        pathLayout = new QVBoxLayout(path);
        pathLayout->setObjectName(QStringLiteral("pathLayout"));
        pathTree = new QTreeWidget(path);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        pathTree->setHeaderItem(__qtreewidgetitem);
        pathTree->setObjectName(QStringLiteral("pathTree"));
        pathTree->header()->setVisible(false);

        pathLayout->addWidget(pathTree);

        pathMsg = new QLabel(path);
        pathMsg->setObjectName(QStringLiteral("pathMsg"));

        pathLayout->addWidget(pathMsg);

        tabWidget->addTab(path, QString());

        WidgetLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(CertificateDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Save);

        WidgetLayout->addWidget(buttonBox);


        retranslateUi(CertificateDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), CertificateDialog, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), CertificateDialog, SLOT(save()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CertificateDialog);
    } // setupUi

    void retranslateUi(QDialog *CertificateDialog)
    {
        CertificateDialog->setWindowTitle(QApplication::translate("CertificateDialog", "Certificate", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(general), QApplication::translate("CertificateDialog", "General", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = parameters->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("CertificateDialog", "Value", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("CertificateDialog", "Field", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(details), QApplication::translate("CertificateDialog", "Details", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(path), QApplication::translate("CertificateDialog", "Certification Path", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CertificateDialog: public Ui_CertificateDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CERTIFICATEWIDGET_H
