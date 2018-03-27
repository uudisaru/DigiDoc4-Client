/********************************************************************************
** Form generated from reading UI file 'AboutDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QVBoxLayout *mainLayout;
    QTabWidget *tabWidget;
    QWidget *aboutTab;
    QVBoxLayout *aboutLayout;
    QLabel *elLogo;
    QLabel *version;
    QLabel *label;
    QTextBrowser *licenses;
    QDialogButtonBox *buttonBox;
    QWidget *diagnosticsTab;
    QVBoxLayout *diagnosticsLayout;
    QTextBrowser *diagnostics;
    QDialogButtonBox *buttonBox1;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QStringLiteral("AboutDialog"));
        AboutDialog->resize(673, 516);
        AboutDialog->setSizeGripEnabled(true);
        mainLayout = new QVBoxLayout(AboutDialog);
        mainLayout->setObjectName(QStringLiteral("mainLayout"));
        tabWidget = new QTabWidget(AboutDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setElideMode(Qt::ElideMiddle);
        aboutTab = new QWidget();
        aboutTab->setObjectName(QStringLiteral("aboutTab"));
        aboutLayout = new QVBoxLayout(aboutTab);
        aboutLayout->setObjectName(QStringLiteral("aboutLayout"));
        elLogo = new QLabel(aboutTab);
        elLogo->setObjectName(QStringLiteral("elLogo"));
        elLogo->setPixmap(QPixmap(QString::fromUtf8(":/images/EL_Regionaalareng_horisontaal@2x.png")));
        elLogo->setAlignment(Qt::AlignCenter);

        aboutLayout->addWidget(elLogo);

        version = new QLabel(aboutTab);
        version->setObjectName(QStringLiteral("version"));
        version->setTextFormat(Qt::RichText);
        version->setAlignment(Qt::AlignCenter);
        version->setOpenExternalLinks(true);
        version->setTextInteractionFlags(Qt::TextBrowserInteraction);

        aboutLayout->addWidget(version);

        label = new QLabel(aboutTab);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);

        aboutLayout->addWidget(label);

        licenses = new QTextBrowser(aboutTab);
        licenses->setObjectName(QStringLiteral("licenses"));
        licenses->setReadOnly(true);
        licenses->setHtml(QLatin1String("<p align=\"center\"><b>Qt cross-platform application and UI framework</b><br />GNU Lesser General Public License (LGPL) version 2.1<br /><a href=\"http://qt-project.org/products/licensing\">http://qt-project.org/products/licensing</a></p>\n"
"<p align=\"center\"><b>The OpenSSL project</b><br />This product includes software developed by the OpenSSL Project for use in the OpenSSL Toolkit (http://www.openssl.org/)<br /><a href=\"http://www.openssl.org/source/license.html\">http://www.openssl.org/source/license.html</a> </p>\n"
"<p align=\"center\"><b>OpenLDAP community developed LDAP software</b><br />The OpenLDAP Public License<br /><a href=\"http://www.openldap.org/software/release/license.html\">http://www.openldap.org/software/release/license.html</a> </p>\n"
"<p align=\"center\"><b>libdigidoc</b><br />GNU Lesser General Public License (LGPL) version 2.1<br /><a href=\"http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html\">http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html</a> </p>\n"
"<p align=\"cente"
                        "r\"><b>libdigidocpp</b><br />GNU Lesser General Public License (LGPL) version 2.1<br /><a href=\"http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html\">http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html</a> </p>\n"
"<p align=\"center\"><b>libxml The XML C parser and toolkit of Gnome</b><br />MIT License<br /><a href=\"http://www.opensource.org/licenses/mit-license.html\">http://www.opensource.org/licenses/mit-license.html</a> </p>\n"
"<p align=\"center\"><b>zlib A Massively Spiffy Yet Delicately Unobtrusive Compression Library</b><br /><a href=\"http://zlib.net/zlib_license.html\">http://zlib.net/zlib_license.html</a> </p>\n"
"<p align=\"center\"><b>Xerces-C++ is a validating XML parser written in a portable subset of C++</b><br />Apache Software License, Version 2.0<br /><a href=\"http://www.apache.org/licenses/LICENSE-2.0.html\">http://www.apache.org/licenses/LICENSE-2.0.html</a> </p>\n"
"<p align=\"center\"><b>Apache XML Security for C++</b><br />Apache Software License, Version 2.0<br /><a href=\"htt"
                        "p://www.apache.org/licenses/LICENSE-2.0.html\">http://www.apache.org/licenses/LICENSE-2.0.html</a> </p>\n"
"<p align=\"center\"><b>XSD: XML Data Binding for C++</b><br />GNU General Public License (GPL), version 2<br /> Free/Libre and Open Source Software (FLOSS) exception<br /><a href=\"http://www.codesynthesis.com/products/xsd/license.xhtml\">http://www.codesynthesis.com/products/xsd/license.xhtml</a><br /><a href=\"http://www.codesynthesis.com/projects/xsd/FLOSSE\">http://www.codesynthesis.com/projects/xsd/FLOSSE</a></p>"));
        licenses->setOpenExternalLinks(true);

        aboutLayout->addWidget(licenses);

        buttonBox = new QDialogButtonBox(aboutTab);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        aboutLayout->addWidget(buttonBox);

        tabWidget->addTab(aboutTab, QString());
        diagnosticsTab = new QWidget();
        diagnosticsTab->setObjectName(QStringLiteral("diagnosticsTab"));
        diagnosticsLayout = new QVBoxLayout(diagnosticsTab);
        diagnosticsLayout->setObjectName(QStringLiteral("diagnosticsLayout"));
        diagnostics = new QTextBrowser(diagnosticsTab);
        diagnostics->setObjectName(QStringLiteral("diagnostics"));

        diagnosticsLayout->addWidget(diagnostics);

        buttonBox1 = new QDialogButtonBox(diagnosticsTab);
        buttonBox1->setObjectName(QStringLiteral("buttonBox1"));
        buttonBox1->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Save);

        diagnosticsLayout->addWidget(buttonBox1);

        tabWidget->addTab(diagnosticsTab, QString());

        mainLayout->addWidget(tabWidget);


        retranslateUi(AboutDialog);
        QObject::connect(buttonBox1, SIGNAL(rejected()), AboutDialog, SLOT(reject()));
        QObject::connect(buttonBox1, SIGNAL(accepted()), AboutDialog, SLOT(saveDiagnostics()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AboutDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QApplication::translate("AboutDialog", "About", Q_NULLPTR));
        label->setText(QApplication::translate("AboutDialog", "<p>Estonian ID-software is released by Information Systems's Auhtority, developed by AS Sertifitseerimiskeskus<br />\n"
"Contact for assistance by email <a href=\"mailto:abi@id.ee\">abi@id.ee</a> or call 1777 (only from Estonia), (+372) 677 3377 when calling from abroad.</p>\n"
"Additional licenses and components", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(aboutTab), QApplication::translate("AboutDialog", "About", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(diagnosticsTab), QApplication::translate("AboutDialog", "Diagnostics", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
