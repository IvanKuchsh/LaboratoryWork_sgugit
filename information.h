#ifndef INFORMATION_H
#define INFORMATION_H

#include <QWidget>
#include <QLineEdit>
#include "chooseoption.h"
#include "option.h"

namespace Ui {
class Information;
}

class Information : public QWidget
{
    Q_OBJECT

public:
    explicit Information(Option* option, QWidget *parent = nullptr);
    ~Information();
    void CheckTextEdit(QLineEdit* lineEdit, const QString &arg);
    void NextWindow();

private slots:
    void on_surname_textEdited(const QString &arg);
    void on_name_textEdited(const QString &arg);
    void on_group_textEdited(const QString &arg);

    void on_next_clicked();

    void on_group_returnPressed();
private:
    Ui::Information *ui;
    ChooseOption* chooseOpt_;
    Option* option_;
};

#endif // INFORMATION_H
