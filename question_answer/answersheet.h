#ifndef ANSWERSHEET_H
#define ANSWERSHEET_H

#include <QDialog>
#include "data.h"
#include "answer.h"
namespace Ui {
class AnswerSheet;
}

class AnswerSheet : public QDialog
{
    Q_OBJECT

public:
    explicit AnswerSheet(QWidget *parent = 0);
    ~AnswerSheet();

private slots:
    void on_pushButton_clicked();

private:
    Ui::AnswerSheet *ui;
};

#endif // ANSWERSHEET_H
