#ifndef FOLLOWERINFO_H
#define FOLLOWERINFO_H

#include <QDialog>
#include "data.h"
#include "questioninfo.h"
namespace Ui {
class FollowerInfo;
}

class FollowerInfo : public QDialog
{
    Q_OBJECT

public:
    explicit FollowerInfo(QWidget *parent = 0);
    ~FollowerInfo();
    void print_follower_info(QString id);
    void closeEvent(QCloseEvent *event);
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_listWidget_clicked(const QModelIndex &index);

    void on_pushButton_9_clicked();

    void on_listWidget_activated(const QModelIndex &index);

private:
    Ui::FollowerInfo *ui;
    QuestionInfo questioninfo;
};

#endif // FOLLOWERINFO_H
