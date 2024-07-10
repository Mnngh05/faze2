#include "compprof.h"
#include "ui_compprof.h"
#include "page2.h"
#include "home.h"
#include "companyjob.h"
#include "companynetwork.h"
#include "homecomp.h"
#include "messagecomp.h"

compprof::compprof(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::compprof)
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
}

compprof::~compprof()
{
    delete ui;
}
