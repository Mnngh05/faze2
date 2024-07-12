#include "page1.h"
#include "ui_page1.h"
#include "page2.h"
#include "network.h"
#include "home.h"
#include "companysign.h"

page1::page1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::page1)
{
    setWindowTitle("Welcome");
    ui->setupUi(this);
    ui->imageLabel->setStyleSheet("image: url(:/new/prefix1/pc3.jpg);");
    ui->pushButton->setStyleSheet("background-color: rgb(80, 177, 188);");




}

page1::~page1()
{
    delete ui;
}


void page1::on_pushButton_clicked()
{
    companySign *compS = new companySign;
    compS->show();
    compS->setWindowTitle("Sign in");
    this->close();
}

