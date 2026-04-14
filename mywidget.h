#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include<QButtonGroup>
#include "colorform.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MyWidget;
}
QT_END_NAMESPACE

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    MyWidget(QWidget *parent = nullptr);
    ~MyWidget();

private slots:
    //1.内嵌窗口、独立窗口
    void onBtnGroupAlignmentClicked(int id);
    void onFontChanged(bool bold,bool italic,bool underline);
    void onColorChange(int id);

private:
    Ui::MyWidget *ui;

    QButtonGroup *btnGroupAlignment;
    ColorForm* colorForm;
};
#endif // MYWIDGET_H
