#ifndef COLORFORM_H
#define COLORFORM_H

#include <QWidget>
#include<QButtonGroup>

namespace Ui {
class ColorForm;
}

class ColorForm : public QWidget
{
    Q_OBJECT

public:
    explicit ColorForm(QWidget *parent = nullptr);
    ~ColorForm();

signals:
    void colorChanged(int id);

private slots:
    void onBtnGroupColorClicked(int id);

private:
    Ui::ColorForm *ui;

    QButtonGroup *btnGroupColor;
};

#endif // COLORFORM_H
