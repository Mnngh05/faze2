#ifndef NETWORK_H
#define NETWORK_H

#include <QMainWindow>
#include <QPainter>
#include <QScrollBar>
#include "page2.h"

namespace Ui {
class network;
}

class network : public QMainWindow
{
    Q_OBJECT


public:
    explicit network(QWidget *parent = nullptr);

    ~network();


private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();
    void on_searchText_returnPressed();

    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();


private:
    Ui::network *ui;

};

#endif // NETWORK_H
