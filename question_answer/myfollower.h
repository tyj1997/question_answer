#ifndef MYFOLLOWER_H
#define MYFOLLOWER_H

#include <QDialog>
#include "followerinfo.h"
namespace Ui {
class Myfollower;
}

class Myfollower : public QDialog
{
    Q_OBJECT

public:
    explicit Myfollower(QWidget *parent = 0);
    ~Myfollower();
    void print_follower_info();
    void delete_follower();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::Myfollower *ui;
    FollowerInfo followerInfo;
};

#endif // MYFOLLOWER_H
