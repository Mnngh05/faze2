#ifndef COMPANYJOB_H
#define COMPANYJOB_H

#include <QMainWindow>

namespace Ui {
class companyjob;
}

class companyjob : public QMainWindow
{
    Q_OBJECT

public:
    explicit companyjob(QWidget *parent = nullptr);
    ~companyjob();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_6_clicked();

private:
    Ui::companyjob *ui;
};

#endif // COMPANYJOB_H
