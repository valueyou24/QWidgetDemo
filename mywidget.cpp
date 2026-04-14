#include "mywidget.h"
#include "ui_mywidget.h"
#include "fontform.h"
#include "colorform.h"

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MyWidget)
{
    ui->setupUi(this);

    //1.内嵌窗口、独立窗口
    //对齐设置
    ui->lineEditTime->setText("2026-04-14 9:00");
    btnGroupAlignment = new QButtonGroup(this);
    btnGroupAlignment->addButton(ui->radioAlignLeft,0);
    btnGroupAlignment->addButton(ui->radioAlignCenter,1);
    btnGroupAlignment->addButton(ui->radioAlignRight,2);

    connect(btnGroupAlignment,&QButtonGroup::idClicked,this,&MyWidget::onBtnGroupAlignmentClicked);

    //字体设置
    FontForm* fontform = new FontForm();
    ui->widgetSet->layout()->addWidget(fontform);
    fontform->setWindowTitle("字体设置");
    connect(fontform,&FontForm::fontChanged,this,&MyWidget::onFontChanged);




    //颜色设置
    QPushButton* btnColor = new QPushButton("颜色设置");
    btnColor->setStyleSheet("QPushButton {font-size: 14px}");
    ui->widgetSet->layout()->addWidget(btnColor);

    connect(btnColor,&QPushButton::clicked,this,[=]{colorForm->show();});

    colorForm = new ColorForm();
    colorForm->setWindowTitle("颜色设置");
    colorForm->setFixedWidth(300);
    connect(colorForm,&ColorForm::colorChanged,this,&MyWidget::onColorChange);

}

MyWidget::~MyWidget()
{
    delete ui;
}

void MyWidget::onBtnGroupAlignmentClicked(int id)
{
    if(id == 0)
    {
        ui->lineEditTime->setAlignment(Qt::AlignLeft);
    }
    else if(id == 1)
    {
        ui->lineEditTime->setAlignment(Qt::AlignCenter);
    }
    else
    {
        ui->lineEditTime->setAlignment(Qt::AlignRight);
    }
}

void MyWidget::onFontChanged(bool bold, bool italic, bool underline)
{
    QFont font = ui->lineEditTime->font();
    font.setBold(bold);
    font.setItalic(italic);
    font.setUnderline(underline);

    ui->lineEditTime->setFont(font);
}

void MyWidget::onColorChange(int id)
{
    if(id == 0)
    {
        ui->lineEditTime->setStyleSheet("QLineEdit{color:red}");
    }
    else if(id == 1)
    {
        ui->lineEditTime->setStyleSheet("QLineEdit{color:green}");
    }
    else
    {
        ui->lineEditTime->setStyleSheet("QLineEdit{color:blue}");
    }
}
