/********************************************************************************
** Form generated from reading UI file 'PageIcon.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEICON_H
#define UI_PAGEICON_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PageIcon
{
public:
    QLabel *label;

    void setupUi(QWidget *PageIcon)
    {
        if (PageIcon->objectName().isEmpty())
            PageIcon->setObjectName(QStringLiteral("PageIcon"));
        PageIcon->resize(110, 110);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PageIcon->sizePolicy().hasHeightForWidth());
        PageIcon->setSizePolicy(sizePolicy);
        PageIcon->setMinimumSize(QSize(110, 110));
        PageIcon->setAutoFillBackground(false);
        label = new QLabel(PageIcon);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(5, 71, 100, 19));
        label->setMinimumSize(QSize(44, 19));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("color: #FFFFFF;\n"
"border: none;"));
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(PageIcon);

        QMetaObject::connectSlotsByName(PageIcon);
    } // setupUi

    void retranslateUi(QWidget *PageIcon)
    {
        PageIcon->setWindowTitle(QApplication::translate("PageIcon", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("PageIcon", "PAGE", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PageIcon: public Ui_PageIcon {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEICON_H
