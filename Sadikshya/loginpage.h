#ifndef LOGINPAGE_H
#define LOGINPAGE_H


#include <QDialog>

namespace Ui {
class loginpage;
}

class loginpage : public QDialog
{
    Q_OBJECT

public:
    explicit loginpage(QWidget *parent = nullptr);
    ~loginpage();

private slots:

    void on_pushButtonadmin_clicked();

    void on_pushButton_custpmer_clicked();

private:
    Ui::loginpage *ui;

};

#endif // LOGINPAGE_H
