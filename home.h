#ifndef HOME_H
#define HOME_H

#include <QMainWindow>
extern QString result;
namespace Ui {
class home;
}

class home : public QMainWindow
{
    Q_OBJECT

public:
    explicit home(QWidget *parent = nullptr);
    ~home();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();


    void on_searchText_returnPressed();

    void on_pushButton_5_clicked();

private:
    Ui::home *ui;
};

#endif // HOME_H
