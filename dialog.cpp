#include "dialog.h"
#include "ui_dialog.h"
#include "page2.h"
#include "home.h"

Dialog::Dialog(QWidget *parent,class page2 *page2) :
    QDialog(parent),
    ui(new Ui::Dialog), page2(page2)
{
    ui->setupUi(this);
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


Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    QSqlQuery q;
    QString name, year, exper, loc;

    year = ui->spinBox->text();
    exper = ui->expertisecomboBox->currentText();
    loc = ui->lineEdit->text();


    //if (q.first()){
    q.exec("UPDATE info SET location = '"+loc+"',expertise = '"+exper+"',birth = '"+year+"' WHERE fullName = '"+name+"'");
    QMessageBox::information(this,"Successful","Information completion was successful");
   // this->close();
   // Dialog *d = new Dialog(nullptr, this);
    //}
//    else {
//        QMessageBox::warning(this,"wrong name","please enter the correct name","try agin");
//    }
    this->close();
    home *h = new home;
    h->showMaximized();
}


void Dialog::on_signOutPushButton_clicked()
{
    page1 *w1 = new page1;
    w1->show();
    w1->setWindowTitle("Welcome");
    this->close();
}
