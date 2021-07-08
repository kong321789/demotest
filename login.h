#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QLayout>

class login : public QDialog
{
    Q_OBJECT

public:
    login(QWidget *parent = nullptr);
    ~login();

private:
    QLabel *user_lab;
    QLabel *pwd_lab;

    QLineEdit *user_edit;
    QLineEdit *pwd_edit;

    QPushButton *login_btn;
    QPushButton *exit_btn;

    QGridLayout *lyt;

private slots:
    void login_clicked();
};
#endif // LOGIN_H
