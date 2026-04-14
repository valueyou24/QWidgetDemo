#include "fontform.h"
#include "ui_fontform.h"

FontForm::FontForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FontForm)
{
    ui->setupUi(this);

    connect(ui->chkBold,&QCheckBox::clicked,this,&FontForm::onChkFontClicked);
    connect(ui->chkItalic,&QCheckBox::clicked,this,&FontForm::onChkFontClicked);
    connect(ui->chkUnderline,&QCheckBox::clicked,this,&FontForm::onChkFontClicked);
}

FontForm::~FontForm()
{
    delete ui;
}

void FontForm::onChkFontClicked()
{
    emit fontChanged(ui->chkBold->isChecked(),ui->chkItalic->isChecked(),ui->chkUnderline->isChecked());
}


