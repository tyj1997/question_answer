#ifndef QUESTIONINFO_H
#define QUESTIONINFO_H

#include <QDialog>
#include "data.h"
#include "answersheet.h"
#include "invitewin.h"
namespace Ui {
class QuestionInfo;
}

class QuestionInfo : public QDialog
{
    Q_OBJECT

public:
    explicit QuestionInfo(QWidget *parent = 0);
    ~QuestionInfo();
    void print_question_info(QString info);
    void print_answer_info();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_listWidget_doubleClicked(const QModelIndex &index);

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::QuestionInfo *ui;
    InviteWin invitewin;

};

#endif // QUESTIONINFO_H
