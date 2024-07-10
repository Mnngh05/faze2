#include "page1.h"
#include "page4.h"
#include "home.h"
#include "ui_page4.h"
#include <QComboBox>
#include "QMessageBox"
#include "page2.h"

#include <QSqlDatabase>
#include "QSqlDriver"
#include "QSqlQuery"
#include "QSqlQueryModel"
QString locat;
QString expert;
QString phone;
page4::page4(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::page4)
{
    QSqlDatabase database;
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("c:\\info.db");
    database.open();

    ui->setupUi(this);
    ui->spinBox->setMaximum(2018);
    ui->spinBox->setMinimum(1920);

    QStringList expertise = (QStringList()
                        <<"Backend"
                        <<"Frontend"
                        <<"Fullstack"
                        <<"Security"
                         <<"Windowx"
                         <<"SEO"
                         <<"Database"
                         <<"Mobile");
    ui->expertisecomboBox->addItems(expertise);

}

page4::~page4()
{
    delete ui;
}

void page4::on_pushButton_clicked()
{
    QSqlQuery q;
    QString year, exper, id, loc, phoneN;
    id = globalId;
    year = ui->spinBox->text();
    exper = ui->expertisecomboBox->currentText();
    loc = ui->lineEdit->text();
    phoneN = ui->phoneLineEdit->text();
    expert = exper;
    locat = loc;
    phone = phoneN;

    q.exec("UPDATE user SET phone = '"+phoneN+"',loc = '"+loc+"',skills = '"+exper+"',birth = '"+year+"' WHERE id = '"+id+"'");
    QMessageBox::information(this,"Successful","Information completion was successful");

    this->close();
    home *h =new home;
    h->showMaximized();
}


void page4::on_signOutPushButton_clicked()
{
    page1 *w1 = new page1;
    w1->show();
    w1->setWindowTitle("Welcome");
    this->close();
}

