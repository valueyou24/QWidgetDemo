/********************************************************************************
** Form generated from reading UI file 'fontform.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FONTFORM_H
#define UI_FONTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FontForm
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QCheckBox *chkBold;
    QCheckBox *chkItalic;
    QCheckBox *chkUnderline;

    void setupUi(QWidget *FontForm)
    {
        if (FontForm->objectName().isEmpty())
            FontForm->setObjectName("FontForm");
        FontForm->resize(151, 122);
        QFont font;
        font.setPointSize(12);
        FontForm->setFont(font);
        verticalLayout = new QVBoxLayout(FontForm);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(FontForm);
        label->setObjectName("label");
        label->setFont(font);

        verticalLayout->addWidget(label);

        chkBold = new QCheckBox(FontForm);
        chkBold->setObjectName("chkBold");

        verticalLayout->addWidget(chkBold);

        chkItalic = new QCheckBox(FontForm);
        chkItalic->setObjectName("chkItalic");

        verticalLayout->addWidget(chkItalic);

        chkUnderline = new QCheckBox(FontForm);
        chkUnderline->setObjectName("chkUnderline");

        verticalLayout->addWidget(chkUnderline);


        retranslateUi(FontForm);

        QMetaObject::connectSlotsByName(FontForm);
    } // setupUi

    void retranslateUi(QWidget *FontForm)
    {
        FontForm->setWindowTitle(QCoreApplication::translate("FontForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("FontForm", "\345\255\227\344\275\223\346\240\267\345\274\217", nullptr));
        chkBold->setText(QCoreApplication::translate("FontForm", "\345\212\240\347\262\227", nullptr));
        chkItalic->setText(QCoreApplication::translate("FontForm", "\346\226\234\344\275\223", nullptr));
        chkUnderline->setText(QCoreApplication::translate("FontForm", "\344\270\213\345\210\222\347\272\277", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FontForm: public Ui_FontForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FONTFORM_H
