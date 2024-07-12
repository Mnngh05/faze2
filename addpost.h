#ifndef ADDPOST_H
#define ADDPOST_H

#include <QMainWindow>

namespace Ui {
class addPost;
}

class addPost : public QMainWindow
{
    Q_OBJECT

public:
    explicit addPost(QWidget *parent = nullptr);
    ~addPost();

private slots:
    void on_pushButton_clicked();

private:
    Ui::addPost *ui;
};

#endif // ADDPOST_H
