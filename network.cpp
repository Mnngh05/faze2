#include "network.h"
#include "ui_network.h"
#include "page2.h"
#include <QVBoxLayout>
#include <QPushButton>
#include "messages.h"
#include "home.h"
#include "jobs.h"
#include "page4.h"
#include "userprof.h"
#include "search.h"
#include "page1.h"

#include <QSqlDatabase>
#include "QSqlDriver"
#include "QSqlQuery"
#include "QSqlQueryModel"

network::network(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::network)
{
    ui->setupUi(this);


    QSqlDatabase database;
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("c:\\info.db");
    database.open();

    ui->linkedin->setStyleSheet("image: url(:/new/prefix1/linkde.png);");
    ui->search->setStyleSheet("image: url(:/new/prefix1/icons8-search-100.png);");
    ui->groupBox->setStyleSheet("background-color: rgb(255, 255, 255);");
    ui->searchBox->setStyleSheet("background-color: rgba(183, 216, 217, 176);");
    ui->pushButton->setStyleSheet("image: url(:/new/prefix1/icons8-home-96.png);border: 0px;");
    ui->pushButton_2->setStyleSheet("background-color: rgb(230, 230, 230);image: url(:/new/prefix1/icons8-glyph-96.png);border: 0px;");
    ui->pushButton_3->setStyleSheet("image: url(:/new/prefix1/icons8-job-90.png);border: 0px;");
    ui->pushButton_4->setStyleSheet("image: url(:/new/prefix1/icons8-message-100.png);border: 0px;");
    ui->pushButton_5->setStyleSheet("image: url(:/new/prefix1/icons8-male-user-100.png);border: 0px;");
    ui->infoBox->hide();
    ui->label_2->setStyleSheet("background-color: rgb(230, 230, 230);");
//    ui->nameLable->setText(globalName);
//    ui->expertiseLable->setText(expert);
//    ui->countryLable->setText(locat);


}



network::~network()
{
    delete ui;
}

void network::on_pushButton_3_clicked()
{
    this->close();
    jobs *job = new jobs;
    job->showMaximized();
}


void network::on_pushButton_4_clicked()
{
    this->close();
    messages *mesg = new messages;
    mesg->showMaximized();

}

void network::on_pushButton_clicked()
{
    this->close();
    home *Home = new home;
    Home->showMaximized();
}


void  network::on_pushButton_5_clicked()
{
    this->close();
    userprof *p = new userprof;
    p->showMaximized();
}


void network::on_searchText_returnPressed()
{
    result = ui->searchText->text();
    isUser = true;
    this->close();
    search *ser = new search;
    ser->show();
}






