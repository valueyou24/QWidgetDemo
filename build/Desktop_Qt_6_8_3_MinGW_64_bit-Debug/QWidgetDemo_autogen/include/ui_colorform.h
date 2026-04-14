/********************************************************************************
** Form generated from reading UI file 'colorform.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORFORM_H
#define UI_COLORFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ColorForm
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QRadioButton *radioRed;
    QRadioButton *radioGreen;
    QRadioButton *radioBlue;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ColorForm)
    {
        if (ColorForm->objectName().isEmpty())
            ColorForm->setObjectName("ColorForm");
        ColorForm->resize(247, 205);
        QFont font;
        font.setPointSize(12);
        ColorForm->setFont(font);
        verticalLayout = new QVBoxLayout(ColorForm);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label = new QLabel(ColorForm);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        radioRed = new QRadioButton(ColorForm);
        radioRed->setObjectName("radioRed");

        verticalLayout->addWidget(radioRed);

        radioGreen = new QRadioButton(ColorForm);
        radioGreen->setObjectName("radioGreen");

        verticalLayout->addWidget(radioGreen);

        radioBlue = new QRadioButton(ColorForm);
        radioBlue->setObjectName("radioBlue");

        verticalLayout->addWidget(radioBlue);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(ColorForm);

        QMetaObject::connectSlotsByName(ColorForm);
    } // setupUi

    void retranslateUi(QWidget *ColorForm)
    {
        ColorForm->setWindowTitle(QCoreApplication::translate("ColorForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("ColorForm", "\345\255\227\344\275\223\351\242\234\350\211\262", nullptr));
        radioRed->setText(QCoreApplication::translate("ColorForm", "\347\272\242\350\211\262", nullptr));
        radioGreen->setText(QCoreApplication::translate("ColorForm", "\347\273\277\350\211\262", nullptr));
        radioBlue->setText(QCoreApplication::translate("ColorForm", "\350\223\235\350\211\262", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ColorForm: public Ui_ColorForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORFORM_H
