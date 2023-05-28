#ifndef CALCULATIONTHIRD_H
#define CALCULATIONTHIRD_H

#include <QWidget>
#include "option.h"
#include <QLineEdit>

namespace Ui {
class CalculationThird;
}

class CalculationThird : public QWidget
{
    Q_OBJECT

public:
    explicit CalculationThird(Option* option, QWidget *parent = nullptr);
    ~CalculationThird();

    void CheckTextEdit(QLineEdit* textEdit, const QString &arg);
    void CheckCurrResult(QLineEdit* textEdit, QString result, double currResult);
    void CheckCurrResultTotal(QLineEdit* textEdit, QString result, double currResult);
    bool CheckEmptyLineEdit(QLineEdit* textEdit);
    void SetStyleLineEdit(QLineEdit* textEdit);
    void SetValPointMarker0();
    void SetValPointMarker7();
    void SetOption(int option);
    void SetEmptyField(QLineEdit* textEdit);
    void SetAllEmptyField();
    void SetInformation(QString name, QString surname, QString group);
    void SetEmptyInformation();

private slots:
    void on_pushButton_2_clicked();
    void on_measExceed0_textEdited(const QString &arg);
    void on_measExceed1_textEdited(const QString &arg);
    void on_measExceed2_textEdited(const QString &arg);
    void on_measExceed3_textEdited(const QString &arg);
    void on_measExceed4_textEdited(const QString &arg);
    void on_measExceed5_textEdited(const QString &arg);
    void on_measExceed6_textEdited(const QString &arg);
    void on_measExceed0_returnPressed();
    void on_measExceed1_returnPressed();
    void on_measExceed2_returnPressed();
    void on_measExceed3_returnPressed();
    void on_measExceed4_returnPressed();
    void on_measExceed5_returnPressed();
    void on_measExceed6_returnPressed();
    void on_total1_textEdited(const QString &arg);
    void on_total2_textEdited(const QString &arg);
    void on_total3_textEdited(const QString &arg);
    void on_total4_textEdited(const QString &arg);
    void on_total1_returnPressed();
    void on_total2_returnPressed();
    void on_total3_returnPressed();
    void on_total4_returnPressed();
    void on_amendment0_textEdited(const QString &arg);
    void on_amendment1_textEdited(const QString &arg);
    void on_amendment2_textEdited(const QString &arg);
    void on_amendment3_textEdited(const QString &arg);
    void on_amendment4_textEdited(const QString &arg);
    void on_amendment5_textEdited(const QString &arg);
    void on_amendment6_textEdited(const QString &arg);
    void on_amendment0_returnPressed();
    void on_amendment1_returnPressed();
    void on_amendment2_returnPressed();
    void on_amendment3_returnPressed();
    void on_amendment4_returnPressed();
    void on_amendment5_returnPressed();
    void on_amendment6_returnPressed();
    void on_equalExceed0_textEdited(const QString &arg);
    void on_equalExceed1_textEdited(const QString &arg);
    void on_equalExceed2_textEdited(const QString &arg);
    void on_equalExceed3_textEdited(const QString &arg);
    void on_equalExceed4_textEdited(const QString &arg);
    void on_equalExceed5_textEdited(const QString &arg);
    void on_equalExceed6_textEdited(const QString &arg);
    void on_equalExceed0_returnPressed();
    void on_equalExceed1_returnPressed();
    void on_equalExceed2_returnPressed();
    void on_equalExceed3_returnPressed();
    void on_equalExceed4_returnPressed();
    void on_equalExceed5_returnPressed();
    void on_equalExceed6_returnPressed();
    void on_pointMarker1_textEdited(const QString &arg);
    void on_pointMarker2_textEdited(const QString &arg);
    void on_pointMarker3_textEdited(const QString &arg);
    void on_pointMarker4_textEdited(const QString &arg);
    void on_pointMarker5_textEdited(const QString &arg);
    void on_pointMarker6_textEdited(const QString &arg);
    void on_pointMarker1_returnPressed();
    void on_pointMarker2_returnPressed();
    void on_pointMarker3_returnPressed();
    void on_pointMarker4_returnPressed();
    void on_pointMarker5_returnPressed();
    void on_pointMarker6_returnPressed();

signals:
    void ShowCalculationSecond();

private:
    Ui::CalculationThird *ui;
    Option* option_;
};

#endif // CALCULATIONTHIRD_H
