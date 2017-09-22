#ifndef INVITEWIN_H
#define INVITEWIN_H

#include <QDialog>
#include "data.h"
namespace Ui {
class InviteWin;
}

class InviteWin : public QDialog
{
    Q_OBJECT

public:
    explicit InviteWin(QWidget *parent = 0);
    ~InviteWin();
    void print_invite_info(QString id);

private slots:
    void on_pushButton_clicked();

    void on_listWidget_doubleClicked(const QModelIndex &index);

private:
    Ui::InviteWin *ui;
};

#endif // INVITEWIN_H
