#include "mynetwork.h"
#include "ui_mynetwork.h"

myNetwork::myNetwork(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::myNetwork)
{
    ui->setupUi(this);
  }

myNetwork::~myNetwork()
{
    delete ui;
}
