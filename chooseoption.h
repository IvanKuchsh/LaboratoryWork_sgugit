#ifndef CHOOSEOPTION_H
#define CHOOSEOPTION_H

#include <QWidget>
#include "mainwindow.h"
#include "option.h"

namespace Ui {
class ChooseOption;
}

class ChooseOption : public QWidget
{
    Q_OBJECT

public:
    explicit ChooseOption(Option* option, QWidget *parent = nullptr);
    ~ChooseOption();
    void     ChooseOpt();
    void     InitField();
    void     Information(QString name, QString surname, QString group);

private slots:
    void on_lineEdit_textEdited(const QString &arg1);
    void on_pushButton_clicked();
    void on_lineEdit_returnPressed();

public slots:
    void ShowChooseOpt();

private:
    Ui::ChooseOption *ui;
    MainWindow*      mainWin_;
    Option*          option_;
    double           prevOpt_;
    QString          name_;
    QString          surname_;
    QString          group_;

};

#endif // CHOOSEOPTION_H
