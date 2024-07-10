#ifndef SEARCH_H
#define SEARCH_H

#include <QMainWindow>

namespace Ui {
class search;
}

class search : public QMainWindow
{
    Q_OBJECT

public:
    explicit search(QWidget *parent = nullptr);
    ~search();

private slots:
    void on_pushButton_clicked();

private:
    Ui::search *ui;
};

#endif // SEARCH_H
