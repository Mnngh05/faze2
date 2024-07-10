#include "userprof.h"
#include "ui_userprof.h"
#include "home.h"
#include "messages.h"
#include "jobs.h"
#include"page2.h"
#include "network.h"
#include "search.h"
#include "page1.h"
#include "page4.h"

#include <QSqlDatabase>
#include "QSqlDriver"
#include "QSqlQuery"
#include "QSqlQueryModel"

userprof::userprof(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::userprof)
{
    ui->setupUi(this);
    ui->linkedin->setStyleSheet("image: url(:/new/prefix1/linkde.png);");
    ui->search->setStyleSheet("image: url(:/new/prefix1/icons8-search-100.png);");
    ui->groupBox->setStyleSheet("background-color: rgb(255, 255, 255);");
    ui->searchBox->setStyleSheet("background-color: rgba(183, 216, 217, 176);");
    ui->pushButton->setStyleSheet("image: url(:/new/prefix1/icons8-home-96.png);border: 0px;");
    ui->pushButton_2->setStyleSheet("image: url(:/new/prefix1/icons8-glyph-96.png);border: 0px;");
    ui->pushButton_3->setStyleSheet("image: url(:/new/prefix1/icons8-job-90.png);border: 0px;");
    ui->pushButton_4->setStyleSheet("image: url(:/new/prefix1/icons8-message-100.png);border: 0px;");
    ui->pushButton_5->setStyleSheet("background-color: rgb(230, 230, 230);image: url(:/new/prefix1/icons8-male-user-100.png);border: 0px;");
    ui->label_5->setStyleSheet("background-color: rgb(230, 230, 230);");
    ui->label_15->setText(globalId);
    ui->label_7->setText(globalName);
    ui->label_8->setText(phone);
    ui->label_12->setText(locat);
    ui->label_10->setText(expert);


    QSqlDatabase database;
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("c:\\info.db");
    database.open();
}

userprof::~userprof()
{
    delete ui;
}
void userprof::on_pushButton_4_clicked()
{
    this->close();
    messages *mesg = new messages;
    mesg->showMaximized();

}

void userprof::on_pushButton_2_clicked()
{
    this->close();
    network *net = new network;
    net->showMaximized();

}

void userprof::on_pushButton_clicked()
{
    this->close();
    home *Home = new home;
    Home->showMaximized();
}

void userprof::on_pushButton_3_clicked()
{
    this->close();
    jobs *job = new jobs;
    job->showMaximized();
}

void userprof::on_searchText_returnPressed()
{
    result = ui->searchText->text();
    isUser = true;
    this->close();
    search *ser = new search;
    ser->show();
}

void userprof::on_pushButton_6_clicked()
{
    QSqlQuery q;
    QString cap;
    cap = ui->lineEdit->text();
    q.exec("INSERT INTO post INNER JOIN user ON post.id = user.id(caption) VALUES('"+cap+"')");
}

