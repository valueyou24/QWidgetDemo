/********************************************************************************
** Form generated from reading UI file 'mywidget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWIDGET_H
#define UI_MYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWidget
{
public:
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEditTime;
    QWidget *widgetSet;
    QHBoxLayout *horizontalLayout;
    QWidget *widgetAlignment;
    QVBoxLayout *verticalLayout;
    QLabel *labelAlignment;
    QRadioButton *radioAlignLeft;
    QRadioButton *radioAlignCenter;
    QRadioButton *radioAlignRight;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_2;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEditWindowsGeometry;
    QPushButton *btnGetWindowsGeometry;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnResize;
    QPushButton *pushButton_3;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_3;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEditWindowTitle;
    QPushButton *btnSetWindowTitle;
    QPushButton *btnUpdateWindowIcon;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *MyWidget)
    {
        if (MyWidget->objectName().isEmpty())
            MyWidget->setObjectName("MyWidget");
        MyWidget->resize(506, 558);
        QFont font;
        font.setPointSize(12);
        MyWidget->setFont(font);
        verticalLayout_8 = new QVBoxLayout(MyWidget);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label = new QLabel(MyWidget);
        label->setObjectName("label");
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        label->setFont(font1);

        verticalLayout_3->addWidget(label);

        frame = new QFrame(MyWidget);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::Shape::Box);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName("verticalLayout_2");
        lineEditTime = new QLineEdit(frame);
        lineEditTime->setObjectName("lineEditTime");

        verticalLayout_2->addWidget(lineEditTime);

        widgetSet = new QWidget(frame);
        widgetSet->setObjectName("widgetSet");
        horizontalLayout = new QHBoxLayout(widgetSet);
        horizontalLayout->setObjectName("horizontalLayout");
        widgetAlignment = new QWidget(widgetSet);
        widgetAlignment->setObjectName("widgetAlignment");
        verticalLayout = new QVBoxLayout(widgetAlignment);
        verticalLayout->setObjectName("verticalLayout");
        labelAlignment = new QLabel(widgetAlignment);
        labelAlignment->setObjectName("labelAlignment");

        verticalLayout->addWidget(labelAlignment);

        radioAlignLeft = new QRadioButton(widgetAlignment);
        radioAlignLeft->setObjectName("radioAlignLeft");

        verticalLayout->addWidget(radioAlignLeft);

        radioAlignCenter = new QRadioButton(widgetAlignment);
        radioAlignCenter->setObjectName("radioAlignCenter");

        verticalLayout->addWidget(radioAlignCenter);

        radioAlignRight = new QRadioButton(widgetAlignment);
        radioAlignRight->setObjectName("radioAlignRight");

        verticalLayout->addWidget(radioAlignRight);


        horizontalLayout->addWidget(widgetAlignment);


        verticalLayout_2->addWidget(widgetSet);


        verticalLayout_3->addWidget(frame);


        verticalLayout_8->addLayout(verticalLayout_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_2 = new QLabel(MyWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);

        verticalLayout_5->addWidget(label_2);

        frame_2 = new QFrame(MyWidget);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::Shape::Box);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        lineEditWindowsGeometry = new QLineEdit(frame_2);
        lineEditWindowsGeometry->setObjectName("lineEditWindowsGeometry");

        horizontalLayout_3->addWidget(lineEditWindowsGeometry);

        btnGetWindowsGeometry = new QPushButton(frame_2);
        btnGetWindowsGeometry->setObjectName("btnGetWindowsGeometry");
        QFont font2;
        font2.setPointSize(14);
        btnGetWindowsGeometry->setFont(font2);

        horizontalLayout_3->addWidget(btnGetWindowsGeometry);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        btnResize = new QPushButton(frame_2);
        btnResize->setObjectName("btnResize");
        btnResize->setFont(font2);

        horizontalLayout_2->addWidget(btnResize);

        pushButton_3 = new QPushButton(frame_2);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setFont(font2);

        horizontalLayout_2->addWidget(pushButton_3);


        verticalLayout_4->addLayout(horizontalLayout_2);


        verticalLayout_5->addWidget(frame_2);


        verticalLayout_8->addLayout(verticalLayout_5);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName("verticalLayout_7");
        label_3 = new QLabel(MyWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);

        verticalLayout_7->addWidget(label_3);

        frame_3 = new QFrame(MyWidget);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::Shape::Box);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_6 = new QVBoxLayout(frame_3);
        verticalLayout_6->setObjectName("verticalLayout_6");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        lineEditWindowTitle = new QLineEdit(frame_3);
        lineEditWindowTitle->setObjectName("lineEditWindowTitle");

        horizontalLayout_4->addWidget(lineEditWindowTitle);

        btnSetWindowTitle = new QPushButton(frame_3);
        btnSetWindowTitle->setObjectName("btnSetWindowTitle");
        btnSetWindowTitle->setFont(font2);

        horizontalLayout_4->addWidget(btnSetWindowTitle);


        verticalLayout_6->addLayout(horizontalLayout_4);

        btnUpdateWindowIcon = new QPushButton(frame_3);
        btnUpdateWindowIcon->setObjectName("btnUpdateWindowIcon");
        btnUpdateWindowIcon->setFont(font2);

        verticalLayout_6->addWidget(btnUpdateWindowIcon);


        verticalLayout_7->addWidget(frame_3);


        verticalLayout_8->addLayout(verticalLayout_7);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_8->addItem(verticalSpacer);


        retranslateUi(MyWidget);

        QMetaObject::connectSlotsByName(MyWidget);
    } // setupUi

    void retranslateUi(QWidget *MyWidget)
    {
        MyWidget->setWindowTitle(QCoreApplication::translate("MyWidget", "MyWidget", nullptr));
        label->setText(QCoreApplication::translate("MyWidget", "1\343\200\201\345\206\205\345\265\214\347\252\227\345\217\243\343\200\201\347\213\254\347\253\213\347\252\227\345\217\243", nullptr));
        labelAlignment->setText(QCoreApplication::translate("MyWidget", "\345\257\271\351\275\220\346\226\271\345\274\217", nullptr));
        radioAlignLeft->setText(QCoreApplication::translate("MyWidget", "\345\267\246\345\257\271\351\275\220", nullptr));
        radioAlignCenter->setText(QCoreApplication::translate("MyWidget", "\345\261\205\344\270\255\345\257\271\351\275\220", nullptr));
        radioAlignRight->setText(QCoreApplication::translate("MyWidget", "\345\217\263\345\257\271\351\275\220", nullptr));
        label_2->setText(QCoreApplication::translate("MyWidget", "2\343\200\201\347\252\227\345\217\243\344\275\215\347\275\256\345\222\214\345\244\247\345\260\217", nullptr));
        btnGetWindowsGeometry->setText(QCoreApplication::translate("MyWidget", "\350\216\267\345\217\226", nullptr));
        btnResize->setText(QCoreApplication::translate("MyWidget", "\350\256\276\347\275\256\347\252\227\345\217\243\345\244\247\345\260\217\344\270\272\357\274\232400x400", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MyWidget", "\350\256\276\347\275\256\347\252\227\345\217\243\345\210\260\357\274\210100,100\357\274\211", nullptr));
        label_3->setText(QCoreApplication::translate("MyWidget", "3\343\200\201\347\252\227\345\217\243\346\240\207\351\242\230\343\200\201\345\233\276\346\240\207", nullptr));
        btnSetWindowTitle->setText(QCoreApplication::translate("MyWidget", "\350\256\276\347\275\256\346\240\207\351\242\230", nullptr));
        btnUpdateWindowIcon->setText(QCoreApplication::translate("MyWidget", "\346\233\264\346\226\260\345\233\276\346\240\207", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyWidget: public Ui_MyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
