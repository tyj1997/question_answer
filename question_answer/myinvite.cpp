#include "myinvite.h"
#include "ui_myinvite.h"
#include <QMessageBox>
Myinvite::Myinvite(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Myinvite)
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
    QPalette palette;
    QPixmap pixmap("ask.jpg");

    palette.setBrush(QPalette::Window, QBrush(pixmap));
    this->setPalette(palette);
}

Myinvite::~Myinvite()
{
    delete ui;
}
void Myinvite::print_invite_info()
{
    int k=0;
   // cout<<ques_info.size()<<endl;
     ui->tableWidget->setRowCount(0);
    for(int i=0;i<p->get_invite_list().size();i++)
    {
        for(int j=0;j<ques_info.size();j++)
        {
            if(ques_info[j].get_id()==p->get_invite_list()[i])
            {
                ui->tableWidget->setRowCount(k+1);
               ui->tableWidget->setItem(k,0,new QTableWidgetItem(ques_info[j].get_title()));
               ui->tableWidget->setItem(k,1,new QTableWidgetItem(ques_info[j].get_creater_id()));
               ui->tableWidget->setItem(k,2,new QTableWidgetItem(QString::number(ques_info[j].get_answer_num())));
                 ui->tableWidget->setItem(k,3,new QTableWidgetItem(ques_info[j].get_time()));
                 ui->tableWidget->setItem(k,4,new QTableWidgetItem(ques_info[j].get_id()));
               k++;
               break;
            }
        }
    }
}

void Myinvite::on_pushButton_clicked()
{
    if(ui->tableWidget->currentIndex().row()!=-1)
    {
        QModelIndex index=ui->tableWidget->currentIndex();
        QString info =ui->tableWidget->item(index.row(),4)->text();
        questioninfo.print_question_info(info);
        questioninfo.print_answer_info();
        questioninfo.exec();

    }
    else
    {
        QMessageBox Fail(QMessageBox::NoIcon, "失败", "请选择问题");
        QPushButton *btn_sure = Fail.addButton("确定", QMessageBox::AcceptRole);
        Fail.exec();
    }
}
