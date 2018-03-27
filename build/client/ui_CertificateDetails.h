/********************************************************************************
** Form generated from reading UI file 'CertificateDetails.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CERTIFICATEDETAILS_H
#define UI_CERTIFICATEDETAILS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CertificateDetails
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *containerLists;
    QHBoxLayout *horizontalLayout_3;
    QWidget *leftPane;
    QLabel *lblCertHeader;
    QTextEdit *lblCertInfo;
    QWidget *page;
    QVBoxLayout *verticalLayout_2;
    QLabel *lblCertDetails;
    QTableWidget *tblDetails;
    QTextEdit *detailedValue;
    QWidget *navigationArea;
    QPushButton *close;
    QPushButton *save;

    void setupUi(QDialog *CertificateDetails)
    {
        if (CertificateDetails->objectName().isEmpty())
            CertificateDetails->setObjectName(QStringLiteral("CertificateDetails"));
        CertificateDetails->setWindowModality(Qt::WindowModal);
        CertificateDetails->resize(994, 570);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CertificateDetails->sizePolicy().hasHeightForWidth());
        CertificateDetails->setSizePolicy(sizePolicy);
        CertificateDetails->setMinimumSize(QSize(994, 570));
        CertificateDetails->setMaximumSize(QSize(16777215, 16777215));
        CertificateDetails->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(CertificateDetails);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        containerLists = new QWidget(CertificateDetails);
        containerLists->setObjectName(QStringLiteral("containerLists"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(containerLists->sizePolicy().hasHeightForWidth());
        containerLists->setSizePolicy(sizePolicy1);
        containerLists->setMinimumSize(QSize(880, 399));
        containerLists->setStyleSheet(QStringLiteral("background-color: #ffffff;"));
        horizontalLayout_3 = new QHBoxLayout(containerLists);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        leftPane = new QWidget(containerLists);
        leftPane->setObjectName(QStringLiteral("leftPane"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(leftPane->sizePolicy().hasHeightForWidth());
        leftPane->setSizePolicy(sizePolicy2);
        leftPane->setMinimumSize(QSize(300, 0));
        leftPane->setMaximumSize(QSize(300, 16777215));
        leftPane->setStyleSheet(QStringLiteral("border-right: 1px solid #DEE4E9;"));
        lblCertHeader = new QLabel(leftPane);
        lblCertHeader->setObjectName(QStringLiteral("lblCertHeader"));
        lblCertHeader->setGeometry(QRect(21, 20, 278, 21));
        lblCertHeader->setMinimumSize(QSize(278, 21));
        lblCertHeader->setMaximumSize(QSize(278, 21));
        lblCertHeader->setStyleSheet(QStringLiteral("border: none;"));
        lblCertHeader->setAlignment(Qt::AlignCenter);
        lblCertInfo = new QTextEdit(leftPane);
        lblCertInfo->setObjectName(QStringLiteral("lblCertInfo"));
        lblCertInfo->setGeometry(QRect(21, 53, 250, 470));
        lblCertInfo->setMinimumSize(QSize(250, 470));
        lblCertInfo->setMaximumSize(QSize(250, 470));
        lblCertInfo->setStyleSheet(QLatin1String("border: none;\n"
"span {\n"
"  line-height: 1.5;\n"
"}"));
        lblCertInfo->setReadOnly(true);

        horizontalLayout_3->addWidget(leftPane);

        page = new QWidget(containerLists);
        page->setObjectName(QStringLiteral("page"));
        sizePolicy.setHeightForWidth(page->sizePolicy().hasHeightForWidth());
        page->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(page);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 3, -1, 3);
        lblCertDetails = new QLabel(page);
        lblCertDetails->setObjectName(QStringLiteral("lblCertDetails"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lblCertDetails->sizePolicy().hasHeightForWidth());
        lblCertDetails->setSizePolicy(sizePolicy3);
        lblCertDetails->setMinimumSize(QSize(652, 38));
        lblCertDetails->setMaximumSize(QSize(652, 38));
        lblCertDetails->setStyleSheet(QStringLiteral("border: none;"));
        lblCertDetails->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_2->addWidget(lblCertDetails);

        tblDetails = new QTableWidget(page);
        if (tblDetails->columnCount() < 2)
            tblDetails->setColumnCount(2);
        tblDetails->setObjectName(QStringLiteral("tblDetails"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(tblDetails->sizePolicy().hasHeightForWidth());
        tblDetails->setSizePolicy(sizePolicy4);
        tblDetails->setMinimumSize(QSize(0, 320));
        tblDetails->setMaximumSize(QSize(16777215, 360));
        QFont font;
        font.setPointSize(13);
        tblDetails->setFont(font);
        tblDetails->setStyleSheet(QLatin1String("#tblDetails {\n"
"	border:none;\n"
"}\n"
"QHeaderView::section {\n"
"	border: 1px solid #D9D9D8;\n"
"	border-width: 0px 1px 1px 0px;\n"
"	text-align: center;\n"
"	padding: 2px 0px 3px 0px;\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                                      stop:0 #FFFFFF, stop:1 #FFFFFF);\n"
"}\n"
""));
        tblDetails->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tblDetails->setSelectionMode(QAbstractItemView::SingleSelection);
        tblDetails->setSelectionBehavior(QAbstractItemView::SelectRows);
        tblDetails->setShowGrid(false);
        tblDetails->setWordWrap(false);
        tblDetails->setRowCount(0);
        tblDetails->setColumnCount(2);
        tblDetails->horizontalHeader()->setVisible(true);
        tblDetails->horizontalHeader()->setDefaultSectionSize(140);
        tblDetails->horizontalHeader()->setMinimumSectionSize(19);
        tblDetails->horizontalHeader()->setStretchLastSection(true);
        tblDetails->verticalHeader()->setVisible(false);
        tblDetails->verticalHeader()->setDefaultSectionSize(23);
        tblDetails->verticalHeader()->setMinimumSectionSize(14);

        verticalLayout_2->addWidget(tblDetails);

        detailedValue = new QTextEdit(page);
        detailedValue->setObjectName(QStringLiteral("detailedValue"));
        detailedValue->setStyleSheet(QStringLiteral("border: none;"));
        detailedValue->setReadOnly(true);

        verticalLayout_2->addWidget(detailedValue);


        horizontalLayout_3->addWidget(page);


        verticalLayout->addWidget(containerLists);

        navigationArea = new QWidget(CertificateDetails);
        navigationArea->setObjectName(QStringLiteral("navigationArea"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(1);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(navigationArea->sizePolicy().hasHeightForWidth());
        navigationArea->setSizePolicy(sizePolicy5);
        navigationArea->setMinimumSize(QSize(0, 40));
        navigationArea->setMaximumSize(QSize(16777215, 40));
        navigationArea->setStyleSheet(QLatin1String("border-top: 1px solid #DEE4E9;\n"
"background-color: #f7f7f7;"));
        close = new QPushButton(navigationArea);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(854, 8, 120, 25));
        QSizePolicy sizePolicy6(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(close->sizePolicy().hasHeightForWidth());
        close->setSizePolicy(sizePolicy6);
        close->setMinimumSize(QSize(120, 25));
        close->setMaximumSize(QSize(120, 20));
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
        close->setAutoDefault(false);
        save = new QPushButton(navigationArea);
        save->setObjectName(QStringLiteral("save"));
        save->setGeometry(QRect(720, 8, 120, 25));
        save->setMinimumSize(QSize(120, 25));
        save->setMaximumSize(QSize(120, 25));
        save->setStyleSheet(QLatin1String("QPushButton {\n"
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
        save->setAutoDefault(false);

        verticalLayout->addWidget(navigationArea);

        QWidget::setTabOrder(lblCertInfo, tblDetails);
        QWidget::setTabOrder(tblDetails, detailedValue);
        QWidget::setTabOrder(detailedValue, save);
        QWidget::setTabOrder(save, close);

        retranslateUi(CertificateDetails);

        close->setDefault(true);


        QMetaObject::connectSlotsByName(CertificateDetails);
    } // setupUi

    void retranslateUi(QDialog *CertificateDetails)
    {
        lblCertHeader->setText(QApplication::translate("CertificateDetails", "Certificate information", Q_NULLPTR));
        lblCertInfo->setProperty("text", QVariant(QApplication::translate("CertificateDetails", "<b>Selle sertifikaadi otstarve on:</b>", Q_NULLPTR)));
        lblCertDetails->setText(QApplication::translate("CertificateDetails", "Certificate details", Q_NULLPTR));
        close->setText(QApplication::translate("CertificateDetails", "CLOSE", Q_NULLPTR));
        save->setText(QApplication::translate("CertificateDetails", "SAVE", Q_NULLPTR));
        Q_UNUSED(CertificateDetails);
    } // retranslateUi

};

namespace Ui {
    class CertificateDetails: public Ui_CertificateDetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CERTIFICATEDETAILS_H
