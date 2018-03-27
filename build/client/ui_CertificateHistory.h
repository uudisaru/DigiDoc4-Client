/********************************************************************************
** Form generated from reading UI file 'CertificateHistory.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CERTIFICATEHISTORY_H
#define UI_CERTIFICATEHISTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CertificateHistory
{
public:
    QVBoxLayout *CertificateHistoryLayout;
    QTreeWidget *view;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *close;
    QPushButton *select;
    QPushButton *remove;

    void setupUi(QWidget *CertificateHistory)
    {
        if (CertificateHistory->objectName().isEmpty())
            CertificateHistory->setObjectName(QStringLiteral("CertificateHistory"));
        CertificateHistory->setWindowModality(Qt::WindowModal);
        CertificateHistory->resize(550, 222);
        CertificateHistory->setMinimumSize(QSize(550, 222));
        CertificateHistory->setStyleSheet(QStringLiteral("QWidget#CertificateHistory{ border-radius: 2px; background-color: #FFFFFF; border: none;}"));
        CertificateHistoryLayout = new QVBoxLayout(CertificateHistory);
        CertificateHistoryLayout->setObjectName(QStringLiteral("CertificateHistoryLayout"));
        view = new QTreeWidget(CertificateHistory);
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
        view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        view->setEditTriggers(QAbstractItemView::CurrentChanged|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        view->setSelectionMode(QAbstractItemView::ExtendedSelection);
        view->setRootIsDecorated(false);
        view->setSortingEnabled(true);
        view->setColumnCount(4);
        view->header()->setProperty("showSortIndicator", QVariant(true));
        view->header()->setStretchLastSection(false);

        CertificateHistoryLayout->addWidget(view);

        widget = new QWidget(CertificateHistory);
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
        close->setMinimumSize(QSize(120, 30));
        QFont font;
        font.setPointSize(14);
        close->setFont(font);
        close->setStyleSheet(QLatin1String("QPushButton {\n"
"	border-radius: 2px;\n"
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

        select = new QPushButton(widget);
        select->setObjectName(QStringLiteral("select"));
        select->setEnabled(true);
        select->setMinimumSize(QSize(120, 30));
        select->setFont(font);
        select->setStyleSheet(QLatin1String("QPushButton {\n"
"	border-radius: 2px;\n"
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

        horizontalLayout->addWidget(select);

        remove = new QPushButton(widget);
        remove->setObjectName(QStringLiteral("remove"));
        remove->setMinimumSize(QSize(120, 30));
        remove->setFont(font);
        remove->setStyleSheet(QLatin1String("QPushButton {\n"
"	border-radius: 2px;\n"
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

        horizontalLayout->addWidget(remove);


        CertificateHistoryLayout->addWidget(widget);


        retranslateUi(CertificateHistory);

        close->setDefault(true);
        select->setDefault(false);


        QMetaObject::connectSlotsByName(CertificateHistory);
    } // setupUi

    void retranslateUi(QWidget *CertificateHistory)
    {
        CertificateHistory->setWindowTitle(QApplication::translate("CertificateHistory", "Used certificates", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = view->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("CertificateHistory", "Expiry date", Q_NULLPTR));
        ___qtreewidgetitem->setText(2, QApplication::translate("CertificateHistory", "Issuer", Q_NULLPTR));
        ___qtreewidgetitem->setText(1, QApplication::translate("CertificateHistory", "Type", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("CertificateHistory", "Owner", Q_NULLPTR));
        close->setText(QApplication::translate("CertificateHistory", "CLOSE", Q_NULLPTR));
        select->setText(QApplication::translate("CertificateHistory", "SELECT", Q_NULLPTR));
        remove->setText(QApplication::translate("CertificateHistory", "REMOVE", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CertificateHistory: public Ui_CertificateHistory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CERTIFICATEHISTORY_H
