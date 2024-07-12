#include "homecomp.h"
#include "ui_homecomp.h"
#include "page1.h"
#include "home.h"
#include "search.h"
#include "companyjob.h"
#include "companynetwork.h"
#include "messagecomp.h"

homecomp::homecomp(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::homecomp)
{
    ui->setupUi(this);
    ui->linkedin->setStyleSheet("image: url(:/new/prefix1/linkde.png);");
    ui->search->setStyleSheet("image: url(:/new/prefix1/icons8-search-100.png);");
    ui->groupBox->setStyleSheet("background-color: rgb(255, 255, 255);");
    ui->searchBox->setStyleSheet("background-color: rgba(183, 216, 217, 176);");
    ui->pushButton->setStyleSheet("background-color: rgb(230, 230, 230);image: url(:/new/prefix1/icons8-home-96.png);border: 0px;");
    ui->pushButton_2->setStyleSheet("image: url(:/new/prefix1/icons8-glyph-96.png);border: 0px;");
    ui->pushButton_3->setStyleSheet("image: url(:/new/prefix1/icons8-job-90.png);border: 0px;");
    ui->pushButton_4->setStyleSheet("image: url(:/new/prefix1/icons8-message-100.png);border: 0px;");
    ui->pushButton_5->setStyleSheet("image: url(:/new/prefix1/icons8-male-user-100.png);border: 0px;");
    ui->label->setStyleSheet("background-color: rgb(230, 230, 230);");

}

homecomp::~homecomp()
{
    delete ui;
}

void homecomp::on_pushButton_2_clicked()
{
    companynetwork *net = new companynetwork;
    net->showMaximized();
    this->close();


}


void homecomp::on_pushButton_3_clicked()
{
    this->close();
    companyjob *job = new companyjob;
    job->showMaximized();
}


void homecomp::on_pushButton_4_clicked()
{
    this->close();
    messagecomp *mesg = new messagecomp;
    mesg->showMaximized();

}
void homecomp::on_searchText_returnPressed()
{
    result = ui->searchText->text();
    isUser = false;
    this->close();
    search *ser = new search;
    ser->show();
}

void homecomp::on_pushButton_7_clicked()
{

}

