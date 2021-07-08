#ifndef TESTLOGIN_H
#define TESTLOGIN_H

#include <QDialog>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QLayout>

class testlogin : public QDialog
{
    Q_OBJECT

public:
    testlogin(QWidget *parent = nullptr);
    ~testlogin();

private:
    QLabel *user_lab;
    QLabel *pwd_lab;

    QLineEdit *user_edit;
    QLineEdit *pwd_edit;

    QPushButton *login_btn;
    QPushButton *exit_btn;

    QHBoxLayout *hlyt1;
    QHBoxLayout *hlyt2;
    QHBoxLayout *hlyt3;
    QVBoxLayout *vlyt1;


private slots:
    void login_clicked();
};
#endif // TESTLOGIN_H
