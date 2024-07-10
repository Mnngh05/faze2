#ifndef USERPROF_H
#define USERPROF_H

#include <QMainWindow>

namespace Ui {
class userprof;
}

class userprof : public QMainWindow
{
    Q_OBJECT

public:
    explicit userprof(QWidget *parent = nullptr);
    ~userprof();
private slots :
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_3_clicked();
    void on_searchText_returnPressed();

    void on_pushButton_6_clicked();

private:
    Ui::userprof *ui;
};

#endif // USERPROF_H
