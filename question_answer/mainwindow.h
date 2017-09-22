#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QString>
#include <QMainWindow>
#include "login.h"
#include "myfollower.h"
#include "data.h"
#include "questionwin.h"
#include "questioninfo.h"
#include "myinvite.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void print_question();
    void add_question();
    void search_question(QString ti);
    void search_question(QDateTime start,QDateTime end);
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

private:
    Ui::MainWindow *ui;
    Login login;
    Myfollower myfollower;
    QuestionWin questionwin;
    QuestionInfo questioninfo;
    Myinvite myinvite;
};

#endif // MAINWINDOW_H
