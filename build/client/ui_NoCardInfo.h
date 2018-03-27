/********************************************************************************
** Form generated from reading UI file 'NoCardInfo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOCARDINFO_H
#define UI_NOCARDINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NoCardInfo
{
public:
    QLabel *cardStatus;

    void setupUi(QWidget *NoCardInfo)
    {
        if (NoCardInfo->objectName().isEmpty())
            NoCardInfo->setObjectName(QStringLiteral("NoCardInfo"));
        NoCardInfo->resize(561, 65);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(NoCardInfo->sizePolicy().hasHeightForWidth());
        NoCardInfo->setSizePolicy(sizePolicy);
        NoCardInfo->setCursor(QCursor(Qt::PointingHandCursor));
        cardStatus = new QLabel(NoCardInfo);
        cardStatus->setObjectName(QStringLiteral("cardStatus"));
        cardStatus->setGeometry(QRect(55, 20, 500, 21));
        QFont font;
        font.setPointSize(14);
        cardStatus->setFont(font);

        retranslateUi(NoCardInfo);

        QMetaObject::connectSlotsByName(NoCardInfo);
    } // setupUi

    void retranslateUi(QWidget *NoCardInfo)
    {
        NoCardInfo->setWindowTitle(QApplication::translate("NoCardInfo", "Form", Q_NULLPTR));
        cardStatus->setText(QApplication::translate("NoCardInfo", "No card in reader", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NoCardInfo: public Ui_NoCardInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOCARDINFO_H
