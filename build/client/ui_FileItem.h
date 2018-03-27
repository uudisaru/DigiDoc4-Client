/********************************************************************************
** Form generated from reading UI file 'FileItem.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEITEM_H
#define UI_FILEITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "widgets/LabelButton.h"

QT_BEGIN_NAMESPACE

class Ui_FileItem
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *fileName;
    LabelButton *remove;
    QSpacerItem *horizontalSpacer;
    LabelButton *download;

    void setupUi(QWidget *FileItem)
    {
        if (FileItem->objectName().isEmpty())
            FileItem->setObjectName(QStringLiteral("FileItem"));
        FileItem->resize(457, 44);
        FileItem->setMinimumSize(QSize(415, 44));
        FileItem->setMaximumSize(QSize(16777215, 44));
        FileItem->setCursor(QCursor(Qt::PointingHandCursor));
        FileItem->setFocusPolicy(Qt::StrongFocus);
        FileItem->setStyleSheet(QLatin1String("border: solid rgba(217, 217, 216, 0.45);\n"
"border-width: 0px 0px 1px 0px; \n"
"background-color: #ffffff; \n"
"color: #000000; \n"
"text-decoration: none solid rgb(0, 0, 0);"));
        horizontalLayout = new QHBoxLayout(FileItem);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        fileName = new QLabel(FileItem);
        fileName->setObjectName(QStringLiteral("fileName"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fileName->sizePolicy().hasHeightForWidth());
        fileName->setSizePolicy(sizePolicy);
        fileName->setMinimumSize(QSize(0, 30));
        fileName->setMaximumSize(QSize(16777215, 30));
        QFont font;
        font.setFamily(QStringLiteral("Roboto"));
        font.setPointSize(14);
        fileName->setFont(font);
        fileName->setStyleSheet(QLatin1String("color: #363739;\n"
"border: none;"));

        horizontalLayout->addWidget(fileName);

        remove = new LabelButton(FileItem);
        remove->setObjectName(QStringLiteral("remove"));
        remove->setMinimumSize(QSize(19, 19));
        remove->setMaximumSize(QSize(19, 19));
        remove->setCursor(QCursor(Qt::PointingHandCursor));
        remove->setStyleSheet(QStringLiteral("border: none;"));

        horizontalLayout->addWidget(remove);

        horizontalSpacer = new QSpacerItem(2, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        download = new LabelButton(FileItem);
        download->setObjectName(QStringLiteral("download"));
        download->setMinimumSize(QSize(19, 19));
        download->setMaximumSize(QSize(19, 19));
        download->setCursor(QCursor(Qt::PointingHandCursor));
        download->setStyleSheet(QStringLiteral("border: none;"));

        horizontalLayout->addWidget(download);


        retranslateUi(FileItem);

        QMetaObject::connectSlotsByName(FileItem);
    } // setupUi

    void retranslateUi(QWidget *FileItem)
    {
        FileItem->setWindowTitle(QApplication::translate("FileItem", "Form", Q_NULLPTR));
        fileName->setText(QApplication::translate("FileItem", "Dokument 1.pdf", Q_NULLPTR));
        remove->setText(QString());
        download->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FileItem: public Ui_FileItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEITEM_H
