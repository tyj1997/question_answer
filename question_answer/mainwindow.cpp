#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <question.h>
#include <answer.h>
#include "data.h"
#include <iostream>
#include <QTextStream>
#include <QFile>
#include <user.h>
#include <QScrollBar>
using namespace std;
static int nCurScroller=0; //翻页时的当时滑动条位置
static int pageValue = 11; // 一页显示条数
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(5);
    ui->tableWidget->verticalHeader()->setDefaultSectionSize(50);
   ui->tableWidget->setFont(QFont("微软雅黑", 10));
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    QStringList header;
    header<<tr("问题")<<tr("提问者id")<<tr("回答数")<<tr("发表时间")<<tr("问题ID");
   ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->setHorizontalHeaderLabels(header);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setShowGrid(false);
     ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
   ui->tableWidget->setStyleSheet("background-color:rgba(0,0,0,30)");
 //  ui->tableWidget->horizontalHeader()->setStyleSheet("QHeaderView::section{background:skyblue;}");
  // ui->tableWidget->verticalHeader()->setStyleSheet("QHeaderView::section{background:skyblue;}");
    ui->tableWidget->show();
    add_question();
    QPalette palette;
    QPixmap pixmap("main.jpg");
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    palette.setBrush(QPalette::Window, QBrush(pixmap));
    this->setPalette(palette);
    ui->dateTimeEdit->setCalendarPopup(true);
    ui->dateTimeEdit_2->setCalendarPopup(true);
    ui->dateTimeEdit->setDateTime(QDateTime::currentDateTime());
    ui->dateTimeEdit_2->setDateTime(QDateTime::currentDateTime());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox box (QMessageBox::NoIcon,tr("注销"),tr("确定注销?"),QMessageBox::Yes|QMessageBox::No,this);
    box.setStyleSheet("background-color:white");
    QIcon icon("out.ico");
    box.setWindowIcon(icon);
    box.setButtonText(QMessageBox::Yes,QString("确定"));
    box.setButtonText(QMessageBox::No,QString("取消"));
    if(box.exec()==QMessageBox::Yes)
    {
        this->hide();
        login.show();

        if(login.exec()==QDialog::Accepted)
        this->show();
        else
        this->close();
   }
}

void MainWindow::on_pushButton_2_clicked()
{
    questionwin.print_id();
    questionwin.exec();
    print_question();
}

void MainWindow::on_pushButton_3_clicked()
{
    myfollower.print_follower_info();
    myfollower.exec();
    print_question();

}
void MainWindow::print_question()
{
    int k=0;
   // cout<<ques_info.size()<<endl;
     ui->tableWidget->setRowCount(0);
    for(int i=0;i<ques_info.size();i++)
    {

        ui->tableWidget->setRowCount(k+1);
       ui->tableWidget->setItem(k,0,new QTableWidgetItem(ques_info[i].get_title()));
       ui->tableWidget->setItem(k,1,new QTableWidgetItem(ques_info[i].get_creater_id()));
       ui->tableWidget->setItem(k,2,new QTableWidgetItem(QString::number(ques_info[i].get_answer_num())));
         ui->tableWidget->setItem(k,3,new QTableWidgetItem(ques_info[i].get_time()));
         ui->tableWidget->setItem(k,4,new QTableWidgetItem(ques_info[i].get_id()));

       k++;

    }
}
void MainWindow::add_question()
{
    QFile QuestionInfo("question.txt");
    try{
    if(! QuestionInfo.open(QIODevice::ReadOnly))
    {
        throw runtime_error("Write");
     }
    }
        catch(runtime_error &r)
      {
        std::cerr << "Cannot open file for writing666" << std::endl;
        return;
    }
    QTextStream in(&QuestionInfo);
    while(!in.atEnd())
        {
        Question question;
        in>>question;
        QFile AnswerInfo(question.get_id()+".txt");
        try{
            if(! AnswerInfo.open(QIODevice::ReadWrite))
            {
                throw runtime_error("Write");
             }
            }
                catch(runtime_error &r)
              {
                std::cerr << "Cannot open file for writing777" << std::endl;
                return;
            }
            QTextStream in2(&AnswerInfo);
            int num=0;
            while(!in2.atEnd())
            {
            Answer answer;
            in2>>answer;
            num++;
            answer_info.push_back(answer);
            }
            question.set_answer_num(num);
            num=0;
            ques_info.insert(ques_info.begin(),question);
           // cout<<ques_info.size()<<endl;
            AnswerInfo.close();
        }

     QuestionInfo.close();
     print_question();

}

void MainWindow::on_pushButton_4_clicked()
{
    if(ui->tableWidget->currentIndex().row()!=-1)
    {
        QModelIndex index=ui->tableWidget->currentIndex();
        QString info =ui->tableWidget->item(index.row(),4)->text();
        questioninfo.print_question_info(info);
        questioninfo.print_answer_info();
        questioninfo.exec();
        print_question();
    }
    else
    {
        QMessageBox Fail(QMessageBox::NoIcon, "失败", "请选择问题");
        QPushButton *btn_sure = Fail.addButton("确定", QMessageBox::AcceptRole);
        Fail.exec();
    }
}


void MainWindow::on_pushButton_5_clicked()
{ QMessageBox box (QMessageBox::NoIcon,tr("退出"),tr("确定退出?"),QMessageBox::Yes|QMessageBox::No,this);
    box.setStyleSheet("background-color:white");
    QIcon icon("out.ico");
    box.setWindowIcon(icon);
    box.setButtonText(QMessageBox::Yes,QString("确定"));
    box.setButtonText(QMessageBox::No,QString("取消"));
    if(box.exec()==QMessageBox::Yes)
    {

        this->close();
   }
}

void MainWindow::on_pushButton_7_clicked()
{
    int maxValue = ui->tableWidget->verticalScrollBar()->maximum();
        nCurScroller = ui->tableWidget->verticalScrollBar()->value(); //获得当前scroller值
        if(nCurScroller<maxValue)
            ui->tableWidget->verticalScrollBar()->setSliderPosition(pageValue+nCurScroller);
        else
            ui->tableWidget->verticalScrollBar()->setSliderPosition(0);
}

void MainWindow::on_pushButton_6_clicked()
{
    int maxValue = ui->tableWidget->verticalScrollBar()->maximum();
       nCurScroller = ui->tableWidget->verticalScrollBar()->value();
       if(nCurScroller>0)
           ui->tableWidget->verticalScrollBar()->setSliderPosition(nCurScroller-pageValue);
       else
           ui->tableWidget->verticalScrollBar()->setSliderPosition(maxValue);
}

void MainWindow::on_pushButton_8_clicked()
{
    QString ti=ui->lineEdit->text();
    search_question(ti);
}
void MainWindow::search_question(QString ti)
{
    int k=0;
    int flag=0;
    for(int i=0;i<ques_info.size();i++)
    {
        if(ques_info[i].get_title().lastIndexOf(ti)!=-1)
        {
            ui->tableWidget->setRowCount(k+1);
           ui->tableWidget->setItem(k,0,new QTableWidgetItem(ques_info[i].get_title()));
           ui->tableWidget->setItem(k,1,new QTableWidgetItem(ques_info[i].get_creater_id()));
           ui->tableWidget->setItem(k,2,new QTableWidgetItem(QString::number(ques_info[i].get_answer_num())));
             ui->tableWidget->setItem(k,3,new QTableWidgetItem(ques_info[i].get_time()));
             ui->tableWidget->setItem(k,4,new QTableWidgetItem(ques_info[i].get_id()));
           k++;
            flag=1;
        }
    }
    if(flag==0)
    {
        ui->tableWidget->setRowCount(0);
      ui->tableWidget->show();
    }
}

void MainWindow::on_pushButton_9_clicked()
{
    QDateTime start=ui->dateTimeEdit->dateTime();
     QDateTime end=ui->dateTimeEdit_2->dateTime();
     search_question(start,end);
}
void MainWindow::search_question(QDateTime start,QDateTime end)
{
    int k=0;
    int flag=0;
    for(int i=0;i<ques_info.size();i++)
    {
        if(QDateTime::fromString(ques_info[i].get_time(),"yyyy-MM-dd HH:mm:ss")>=start&&QDateTime::fromString(ques_info[i].get_time(),"yyyy-MM-dd HH:mm:ss")<=end)
        {
            ui->tableWidget->setRowCount(k+1);
           ui->tableWidget->setItem(k,0,new QTableWidgetItem(ques_info[i].get_title()));
           ui->tableWidget->setItem(k,1,new QTableWidgetItem(ques_info[i].get_creater_id()));
           ui->tableWidget->setItem(k,2,new QTableWidgetItem(QString::number(ques_info[i].get_answer_num())));
             ui->tableWidget->setItem(k,3,new QTableWidgetItem(ques_info[i].get_time()));
             ui->tableWidget->setItem(k,4,new QTableWidgetItem(ques_info[i].get_id()));
           k++;
            flag=1;
        }
    }
    if(flag==0)
    {
        ui->tableWidget->setRowCount(0);
      ui->tableWidget->show();
    }
}

void MainWindow::on_pushButton_10_clicked()
{
    myinvite.print_invite_info();
    myinvite.exec();
}
