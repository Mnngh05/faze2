#ifndef PAGE2_H
#define PAGE2_H

#include <QMainWindow>
extern QString globalId;
extern QString globalName;
namespace Ui {
class page2;
}

class page2 : public QMainWindow
{
    Q_OBJECT
    friend class Dialog;
    friend class page4Dialog;
public:
    explicit page2(QWidget *parent = nullptr);

    void setVariable(const QString& value);
    QString getVariable() const;

    ~page2();
private slots:


    void on_enterNumLineEdit_2_textEdited(const QString &arg1);

    void on_logpushButton_2_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::page2 *ui;
};

#endif // PAGE2_H
