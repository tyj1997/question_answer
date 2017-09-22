#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include "data.h"
#include "registerwin.h"
#include "changepassword.h"
namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
    ~Login();
    void AddUser();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::Login *ui;
    RegisterWin registerWin;
      ChangePassword changepassword;
};

#endif // LOGIN_H
