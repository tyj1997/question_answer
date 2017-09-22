#ifndef MYINVITE_H
#define MYINVITE_H

#include <QDialog>
#include "data.h"
#include "questioninfo.h"
namespace Ui {
class Myinvite;
}

class Myinvite : public QDialog
{
    Q_OBJECT

public:
    explicit Myinvite(QWidget *parent = 0);
    ~Myinvite();
    void print_invite_info();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Myinvite *ui;
    QuestionInfo questioninfo;
};

#endif // MYINVITE_H
