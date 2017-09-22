#ifndef REGISTERWIN_H
#define REGISTERWIN_H

#include <QDialog>
#include "data.h"
namespace Ui {
class RegisterWin;
}

class RegisterWin : public QDialog
{
    Q_OBJECT

public:
    explicit RegisterWin(QWidget *parent = 0);
    ~RegisterWin();
    void Addperson();

private slots:
    void on_pushButton_clicked();

private:
    Ui::RegisterWin *ui;
};

#endif // REGISTERWIN_H
