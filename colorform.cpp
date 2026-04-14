#include "colorform.h"
#include "ui_colorform.h"

ColorForm::ColorForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ColorForm)
{
    ui->setupUi(this);

    btnGroupColor = new QButtonGroup(this);
    btnGroupColor->addButton(ui->radioRed,0);
    btnGroupColor->addButton(ui->radioGreen,1);
    btnGroupColor->addButton(ui->radioBlue,2);

    connect(btnGroupColor,&QButtonGroup::idClicked,this,&ColorForm::onBtnGroupColorClicked);

}

ColorForm::~ColorForm()
{
    delete ui;
}

void ColorForm::onBtnGroupColorClicked(int id)
{
    emit colorChanged(id);
}
