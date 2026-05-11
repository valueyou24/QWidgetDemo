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

    //2.窗口的位置和大小
    void on_btnGetWindowsGeometry_clicked();
    void on_btnResize_clicked();
    void on_pushButton_3_clicked();

    //3.设置窗口标题和图标


    void on_btnSetWindowTitle_clicked();

    void on_btnUpdateWindowIcon_clicked();

private:
    Ui::MyWidget *ui;

    QButtonGroup *btnGroupAlignment;
    ColorForm* colorForm;
};
#endif // MYWIDGET_H
