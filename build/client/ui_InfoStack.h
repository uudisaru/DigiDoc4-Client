/********************************************************************************
** Form generated from reading UI file 'InfoStack.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFOSTACK_H
#define UI_INFOSTACK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InfoStack
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QLabel *valueExpiryDate;
    QLabel *labelSerialNumber;
    QLabel *valueSerialNumber;
    QPushButton *btnPicture;
    QLabel *photo;
    QWidget *widget_3;
    QGridLayout *gridLayout;
    QLabel *valuePersonalCode;
    QLabel *valueGivenNames;
    QLabel *labelCitizenship;
    QLabel *valueCitizenship;
    QLabel *labelSurname;
    QLabel *valueSurname;
    QLabel *labelGivenNames;
    QLabel *labelPersonalCode;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *InfoStack)
    {
        if (InfoStack->objectName().isEmpty())
            InfoStack->setObjectName(QStringLiteral("InfoStack"));
        InfoStack->resize(876, 186);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(InfoStack->sizePolicy().hasHeightForWidth());
        InfoStack->setSizePolicy(sizePolicy);
        InfoStack->setMinimumSize(QSize(0, 186));
        InfoStack->setMaximumSize(QSize(16777215, 186));
        InfoStack->setStyleSheet(QLatin1String("background-color: #F4F5F6;\n"
"border: solid #DEE4E9;\n"
"border-width: 1px 0px 0px 0px; \n"
""));
        horizontalLayout = new QHBoxLayout(InfoStack);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(20, 0, 12, 4);
        widget = new QWidget(InfoStack);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        widget->setMinimumSize(QSize(800, 150));
        widget->setMaximumSize(QSize(16777215, 150));
        widget->setStyleSheet(QStringLiteral("border: none;"));
        valueExpiryDate = new QLabel(widget);
        valueExpiryDate->setObjectName(QStringLiteral("valueExpiryDate"));
        valueExpiryDate->setGeometry(QRect(248, 120, 450, 19));
        QFont font;
        font.setFamily(QStringLiteral("Roboto"));
        font.setPointSize(16);
        valueExpiryDate->setFont(font);
        valueExpiryDate->setStyleSheet(QStringLiteral("color: #041E42;"));
        labelSerialNumber = new QLabel(widget);
        labelSerialNumber->setObjectName(QStringLiteral("labelSerialNumber"));
        labelSerialNumber->setGeometry(QRect(138, 100, 100, 17));
        QFont font1;
        font1.setFamily(QStringLiteral("Roboto"));
        font1.setPointSize(12);
        labelSerialNumber->setFont(font1);
        labelSerialNumber->setStyleSheet(QLatin1String("color: #75787B;\n"
""));
        valueSerialNumber = new QLabel(widget);
        valueSerialNumber->setObjectName(QStringLiteral("valueSerialNumber"));
        valueSerialNumber->setGeometry(QRect(138, 120, 100, 19));
        valueSerialNumber->setFont(font);
        valueSerialNumber->setStyleSheet(QStringLiteral("color: #041E42;"));
        btnPicture = new QPushButton(widget);
        btnPicture->setObjectName(QStringLiteral("btnPicture"));
        btnPicture->setGeometry(QRect(12, 125, 94, 17));
        QFont font2;
        font2.setPointSize(12);
        btnPicture->setFont(font2);
        btnPicture->setCursor(QCursor(Qt::PointingHandCursor));
        btnPicture->setStyleSheet(QLatin1String("QPushButton {\n"
"	border: 1px solid #006EB5;\n"
"	border-radius: 2px;\n"
"     color: #006EB5;\n"
"}\n"
"QPushButton:pressed {\n"
"	border-radius: 2px;\n"
"	background-color: #006EB5;\n"
"	color: #FFFFFF;\n"
"}\n"
"QPushButton:hover:!pressed {\n"
"	border: 1px solid #008DCF;\n"
"	border-radius: 2px;\n"
"	color: #008DCF;\n"
"}"));
        photo = new QLabel(widget);
        photo->setObjectName(QStringLiteral("photo"));
        photo->setGeometry(QRect(0, 0, 120, 150));
        photo->setMinimumSize(QSize(120, 150));
        photo->setMaximumSize(QSize(120, 150));
        photo->setStyleSheet(QLatin1String("border: 1px solid #B1B3B3;\n"
"opacity: 0.5;\n"
"border-radius: 2px;\n"
"background-color: #F9FAFA;"));
        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(138, 0, 511, 94));
        widget_3->setMinimumSize(QSize(250, 94));
        widget_3->setMaximumSize(QSize(16777215, 94));
        gridLayout = new QGridLayout(widget_3);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        valuePersonalCode = new QLabel(widget_3);
        valuePersonalCode->setObjectName(QStringLiteral("valuePersonalCode"));
        valuePersonalCode->setFont(font);
        valuePersonalCode->setStyleSheet(QStringLiteral("color: #041E42;"));

        gridLayout->addWidget(valuePersonalCode, 3, 0, 1, 1);

        valueGivenNames = new QLabel(widget_3);
        valueGivenNames->setObjectName(QStringLiteral("valueGivenNames"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(valueGivenNames->sizePolicy().hasHeightForWidth());
        valueGivenNames->setSizePolicy(sizePolicy2);
        valueGivenNames->setMinimumSize(QSize(157, 42));
        valueGivenNames->setMaximumSize(QSize(16777215, 42));
        valueGivenNames->setFont(font);
        valueGivenNames->setStyleSheet(QLatin1String("color: #041E42;\n"
""));
        valueGivenNames->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        valueGivenNames->setWordWrap(true);

        gridLayout->addWidget(valueGivenNames, 1, 0, 1, 1);

        labelCitizenship = new QLabel(widget_3);
        labelCitizenship->setObjectName(QStringLiteral("labelCitizenship"));
        labelCitizenship->setMinimumSize(QSize(0, 17));
        labelCitizenship->setMaximumSize(QSize(16777215, 17));
        labelCitizenship->setFont(font1);
        labelCitizenship->setStyleSheet(QLatin1String("color: #75787B;\n"
""));

        gridLayout->addWidget(labelCitizenship, 2, 2, 1, 1);

        valueCitizenship = new QLabel(widget_3);
        valueCitizenship->setObjectName(QStringLiteral("valueCitizenship"));
        valueCitizenship->setFont(font);
        valueCitizenship->setStyleSheet(QStringLiteral("color: #041E42;"));

        gridLayout->addWidget(valueCitizenship, 3, 2, 1, 1);

        labelSurname = new QLabel(widget_3);
        labelSurname->setObjectName(QStringLiteral("labelSurname"));
        labelSurname->setMinimumSize(QSize(0, 16));
        labelSurname->setMaximumSize(QSize(200, 16));
        labelSurname->setFont(font1);
        labelSurname->setStyleSheet(QLatin1String("color: #75787B;\n"
""));

        gridLayout->addWidget(labelSurname, 0, 2, 1, 1);

        valueSurname = new QLabel(widget_3);
        valueSurname->setObjectName(QStringLiteral("valueSurname"));
        sizePolicy1.setHeightForWidth(valueSurname->sizePolicy().hasHeightForWidth());
        valueSurname->setSizePolicy(sizePolicy1);
        valueSurname->setMinimumSize(QSize(200, 42));
        valueSurname->setMaximumSize(QSize(16777215, 42));
        valueSurname->setFont(font);
        valueSurname->setStyleSheet(QStringLiteral("color: #041E42;"));
        valueSurname->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        valueSurname->setWordWrap(false);

        gridLayout->addWidget(valueSurname, 1, 2, 1, 1);

        labelGivenNames = new QLabel(widget_3);
        labelGivenNames->setObjectName(QStringLiteral("labelGivenNames"));
        labelGivenNames->setMinimumSize(QSize(162, 16));
        labelGivenNames->setMaximumSize(QSize(16777215, 16));
        labelGivenNames->setFont(font1);
        labelGivenNames->setStyleSheet(QLatin1String("color: #75787B;\n"
""));

        gridLayout->addWidget(labelGivenNames, 0, 0, 1, 1);

        labelPersonalCode = new QLabel(widget_3);
        labelPersonalCode->setObjectName(QStringLiteral("labelPersonalCode"));
        labelPersonalCode->setMinimumSize(QSize(0, 17));
        labelPersonalCode->setMaximumSize(QSize(16777215, 17));
        labelPersonalCode->setFont(font1);
        labelPersonalCode->setStyleSheet(QLatin1String("color: #75787B;\n"
""));

        gridLayout->addWidget(labelPersonalCode, 2, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 1, 1, 1);

        valueExpiryDate->raise();
        labelSerialNumber->raise();
        valueSerialNumber->raise();
        photo->raise();
        btnPicture->raise();
        widget_3->raise();

        horizontalLayout->addWidget(widget);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        retranslateUi(InfoStack);

        QMetaObject::connectSlotsByName(InfoStack);
    } // setupUi

    void retranslateUi(QWidget *InfoStack)
    {
        valueExpiryDate->setText(QApplication::translate("InfoStack", "valueExpiryDate", Q_NULLPTR));
        labelSerialNumber->setText(QApplication::translate("InfoStack", "Document", Q_NULLPTR));
        valueSerialNumber->setText(QApplication::translate("InfoStack", "valueSerialNumber", Q_NULLPTR));
        btnPicture->setText(QApplication::translate("InfoStack", "DOWNLOAD", Q_NULLPTR));
        valuePersonalCode->setText(QApplication::translate("InfoStack", "valuePersonalCode", Q_NULLPTR));
        valueGivenNames->setText(QApplication::translate("InfoStack", "valueGivenNames", Q_NULLPTR));
        labelCitizenship->setText(QApplication::translate("InfoStack", "Citizenship", Q_NULLPTR));
        valueCitizenship->setText(QApplication::translate("InfoStack", "valueCitizenship", Q_NULLPTR));
        labelSurname->setText(QApplication::translate("InfoStack", "Surname", Q_NULLPTR));
        valueSurname->setText(QApplication::translate("InfoStack", "valueSurname", Q_NULLPTR));
        labelGivenNames->setText(QApplication::translate("InfoStack", "Given names", Q_NULLPTR));
        labelPersonalCode->setText(QApplication::translate("InfoStack", "Personal code", Q_NULLPTR));
        Q_UNUSED(InfoStack);
    } // retranslateUi

};

namespace Ui {
    class InfoStack: public Ui_InfoStack {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOSTACK_H
