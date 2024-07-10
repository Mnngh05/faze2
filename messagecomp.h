#ifndef MESSAGECOMP_H
#define MESSAGECOMP_H

#include <QMainWindow>

namespace Ui {
class messagecomp;
}

class messagecomp : public QMainWindow
{
    Q_OBJECT

public:
    explicit messagecomp(QWidget *parent = nullptr);
    ~messagecomp();
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
private:
    Ui::messagecomp *ui;
};

#endif // MESSAGECOMP_H
