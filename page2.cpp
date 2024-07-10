#include "page2.h"
#include "ui_page2.h"
#include "QMessageBox"
#include "page3.h"
#include "login.h"
#include "network.h"
#include <QSqlDatabase>
#include "QSqlDriver"
#include "QSqlQuery"
#include "QSqlQueryModel"
#include "companysign.h"
#include "page1.h"

int r;
QString globalId;
QString globalName;

page2::page2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::page2)
{


    ui->setupUi(this);

    isUser = true;
    ui->passlineEdit->setEchoMode(QLineEdit::Password);
    ui->logpushButton_2->setStyleSheet("font: 12pt 'MS Shell Dlg 2';color: rgb(255, 255, 255);background-color: rgb(6, 155, 255);");
    ui->pushButton_5->setEnabled(false);
    r = rand()%9000 +1000;
    ui->randlineEdit_2->setText(QString::number(r));
    ui->randlineEdit_2->setEnabled(false);
    ui->pushButton_6->setStyleSheet("background-image: url(:/new/prefix1/icons8-refresh-48.png);");

    QSqlDatabase database;
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("c:\\info.db");
    database.open();
}


page2::~page2()
{
    delete ui;
}

void page2::on_enterNumLineEdit_2_textEdited(const QString &arg1)
{
     ui->pushButton_5->setEnabled(true);
     ui->pushButton_5->setStyleSheet("font: 12pt 'MS Shell Dlg 2';color: rgb(255, 255, 255);background-color: rgb(6, 155, 255);");
}

void page2::on_logpushButton_2_clicked()
{
    login *w5 = new login;
        w5->show();
        w5->setWindowTitle("Login");
        this->close();
}


void page2::on_pushButton_7_clicked()
{
    this->close();
        companySign *com = new companySign;
        com->show();
}


void page2::on_pushButton_5_clicked()
{
    QSqlQuery q;
    QString name,pass,id;
    id = ui->idlineEdit->text();
    name = ui->namelineEdit->text();
    pass = ui->passlineEdit->text();
    globalId = id;
    globalName = name;
    q.exec("SELECT id FROM user WHERE id = '"+id+"'");
    bool isEmptyPass = true;
    bool isEmptyId = true;
    bool isEmptyName = true;
    for (int i = 0; i < name.length();i++ ) {
        if(name[i] != ' '){
            isEmptyName = false;
            break;
        }
    }
    for (int i = 0; i < id.length();i++ ) {
        if(id[i] != ' '){
            isEmptyId = false;
            break;
        }
    }
    for (int i = 0; i < pass.length();i++ ) {
        if(name[i] != ' '){
            isEmptyPass = false;
            break;
        }
    }
    if(ui->randlineEdit_2->text() != ui->enterNumLineEdit_2->text()) {
        QMessageBox::warning(this,"Incorrect", "Please enter the correct number","Try again");
    }
    else if(q.first()){
        QMessageBox::warning(this,"Invalid", "Please enter another id");
    }
    else if(isEmptyName){
        QMessageBox::warning(this,"Null input", "Please enter your name");
    }
    else if(isEmptyPass){
        QMessageBox::warning(this,"Null input", "Please enter your password");
    }
    else if(isEmptyId){
        QMessageBox::warning(this,"Null input", "Please enter your id");
    }
    else if( ui->randlineEdit_2->text() == ui->enterNumLineEdit_2->text())
    {
        q.exec("INSERT INTO user(name , pass , id)VALUES('"+name+"' , '"+pass+"' , '"+id+"')");

        page3 *w3 = new page3;
        w3->show();
        this->close();

    }

    else
        QMessageBox::warning(this,"Invalid", "Please enter valid information");
}


void page2::on_pushButton_6_clicked()
{
    r = rand()%9000 +1000;
         ui->randlineEdit_2->setText(QString::number(r));
         ui->randlineEdit_2->setEnabled(false);
}



