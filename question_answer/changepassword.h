#ifndef CHANGEPASSWORD_H
#define CHANGEPASSWORD_H

#include <QDialog>
#include "data.h"
#include <QTextStream>
namespace Ui {
class ChangePassword;
}

class ChangePassword : public QDialog
{
    Q_OBJECT

public:
    explicit ChangePassword(QWidget *parent = 0);
    ~ChangePassword();

private slots:

    void on_pushButton_clicked();

private:
    Ui::ChangePassword *ui;
};

#endif // CHANGEPASSWORD_H
