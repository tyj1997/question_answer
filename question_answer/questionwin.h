#ifndef QUESTIONWIN_H
#define QUESTIONWIN_H

#include <QDialog>
#include"data.h";
#include "question.h"
namespace Ui {
class QuestionWin;
}

class QuestionWin : public QDialog
{
    Q_OBJECT

public:
    explicit QuestionWin(QWidget *parent = 0);
    ~QuestionWin();
    void create_info();
    void print_id();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::QuestionWin *ui;
};

#endif // QUESTIONWIN_H
