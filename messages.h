#ifndef MESSAGES_H
#define MESSAGES_H

#include <QMainWindow>

namespace Ui {
class messages;
}

class messages : public QMainWindow
{
    Q_OBJECT

public:
    explicit messages(QWidget *parent = nullptr);
    ~messages();
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_5_clicked();
    void on_searchText_returnPressed();

private:
    Ui::messages *ui;
};

#endif // MESSAGES_H
