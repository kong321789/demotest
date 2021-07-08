#ifndef ITEMDIALOG_H
#define ITEMDIALOG_H

#include <QDialog>
#include <QLineEdit>
#include <QPushButton>
#include <QLayout>
#include <QCheckBox>
#include <QSpinBox>
#include <QSlider>
#include <QProgressBar>


class itemDialog : public QDialog
{
    Q_OBJECT

public:
    itemDialog(QWidget *parent = nullptr);
    ~itemDialog();

private:
    QLineEdit *edit;
    QPushButton *btn;
    QCheckBox *box;
    QSpinBox *sbox;
    QSlider *lid;
    QProgressBar *bar;
    QVBoxLayout *lyt;

private slots:
    void textchange(const QString &str);
    void textedit(const QString &str);
    void returnpress();
    void clieked();
    void box_changge(int num);

signals:
    void send_str(const QString &s);


};
#endif // ITEMDIALOG_H
