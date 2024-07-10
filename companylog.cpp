#include "companylog.h"
#include "ui_companylog.h"
#include "companysign.h"
#include <QMessageBox>
#include "homecomp.h"

#include <QSqlDatabase>
#include "QSqlDriver"
#include "QSqlQuery"
#include "QSqlQueryModel"
companylog::companylog(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::companylog)
{
    ui->setupUi(this);

    ui->setupUi(this);
     ui->pushButton->setStyleSheet("font: 12pt 'MS Shell Dlg 2';color: rgb(255, 255, 255);background-color: rgb(6, 155, 255);");
      ui->pushButton_2->setStyleSheet("font: 12pt 'MS Shell Dlg 2';color: rgb(255, 255, 255);background-color: rgb(6, 155, 255);");
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);

    QSqlDatabase database;
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("c:\\info.db");
    database.open();
}

companylog::~companylog()
{
    delete ui;
}

void companylog::on_pushButton_2_clicked()
{
    companySign *w2 = new companySign;
    this->close();
    w2->show();
    w2->setWindowTitle("Sign in");
}

void companylog::on_pushButton_clicked()
{
    QSqlQuery q;
    QString id , pass;
    id = ui->lineEdit->text();
    pass = ui->lineEdit_2->text();
    q.exec("SELECT id FROM company WHERE id = '"+id+"' AND pass = '"+pass+"'");
    if(q.first()){
    homecomp *H = new homecomp;
           this->close();
           H->showMaximized();
    }
    else
       QMessageBox::warning(this,"invalid","your name or password is incorrect!","Try again");

}
