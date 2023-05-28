#ifndef CALCULATIONSECOND_H
#define CALCULATIONSECOND_H

#include <QWidget>
#include "calculationthird.h"
#include "option.h"
#include <QLineEdit>

namespace Ui {
class CalculationSecond;
}

class CalculationSecond : public QWidget
{
    Q_OBJECT

public:
    explicit CalculationSecond(Option* option, QWidget *parent = nullptr);
    ~CalculationSecond();

    void InitField();

    void CheckTextEdit(QLineEdit* textEdit, const QString &arg);
    void CheckCurrResult(QLineEdit* textEdit, QString result, double currResult);
    bool CheckEmptyLineEdit(QLineEdit* textEdit);
    void SetStyleLineEdit(QLineEdit* textEdit);
    void SetValBack6Ch(double val);
    void SetValFront6Ch(double val);
    void SetValBack6K(double val);
    void SetValFront6K(double val);
    void SetValBack7Ch(double val);
    void SetValFront7Ch(double val);
    void SetValBack7K(double val);
    void SetValFront7K(double val);
    void SetValBack8Ch(double val);
    void SetValFront8Ch(double val);
    void SetValBack8K(double val);
    void SetValFront8K(double val);
    void SetValBack9Ch(double val);
    void SetValFront9Ch(double val);
    void SetValBack9K(double val);
    void SetValFront9K(double val);
    void SetValBack10Ch(double val);
    void SetValFront10Ch(double val);
    void SetValBack10K(double val);
    void SetValFront10K(double val);
    void SetOption(int option);
    void SetEmptyField(QLineEdit* textEdit);
    void SetAllEmptyField();
    void SetInformation(QString name, QString surname, QString group);
    void SetEmptyInformation();


private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
    void on_back6Result_textEdited(const QString &arg);
    void on_front6Result_textEdited(const QString &arg);
    void on_back7Result_textEdited(const QString &arg);
    void on_front7Result_textEdited(const QString &arg);
    void on_back8Result_textEdited(const QString &arg);
    void on_front8Result_textEdited(const QString &arg);
    void on_back9Result_textEdited(const QString &arg);
    void on_front9Result_textEdited(const QString &arg);
    void on_back10Result_textEdited(const QString &arg);
    void on_front10Result_textEdited(const QString &arg);
    void on_back6Result_returnPressed();
    void on_front6Result_returnPressed();
    void on_back7Result_returnPressed();
    void on_front7Result_returnPressed();
    void on_back8Result_returnPressed();
    void on_front8Result_returnPressed();
    void on_back9Result_returnPressed();
    void on_front9Result_returnPressed();
    void on_back10Result_returnPressed();
    void on_front10Result_returnPressed();
    void on_excess6Ch_textEdited(const QString& arg);
    void on_excess6K_textEdited(const QString& arg);
    void on_excess6Result_textEdited(const QString& arg);
    void on_averageExceedances6_textEdited(const QString& arg);
    void on_excess6Ch_returnPressed();
    void on_excess6K_returnPressed();
    void on_excess6Result_returnPressed();
    void on_averageExceedances6_returnPressed();
    void on_excess7Ch_textEdited(const QString& arg);
    void on_excess7K_textEdited(const QString& arg);
    void on_excess7Result_textEdited(const QString& arg);
    void on_averageExceedances7_textEdited(const QString& arg);
    void on_excess7Ch_returnPressed();
    void on_excess7K_returnPressed();
    void on_excess7Result_returnPressed();
    void on_averageExceedances7_returnPressed();
    void on_excess8Ch_textEdited(const QString& arg);
    void on_excess8K_textEdited(const QString& arg);
    void on_excess8Result_textEdited(const QString& arg);
    void on_averageExceedances8_textEdited(const QString& arg);
    void on_excess8Ch_returnPressed();
    void on_excess8K_returnPressed();
    void on_excess8Result_returnPressed();
    void on_averageExceedances8_returnPressed();
    void on_excess9Ch_textEdited(const QString& arg);
    void on_excess9K_textEdited(const QString& arg);
    void on_excess9Result_textEdited(const QString& arg);
    void on_averageExceedances9_textEdited(const QString& arg);
    void on_excess9Ch_returnPressed();
    void on_excess9K_returnPressed();
    void on_excess9Result_returnPressed();
    void on_averageExceedances9_returnPressed();
    void on_excess10Ch_textEdited(const QString& arg);
    void on_excess10K_textEdited(const QString& arg);
    void on_excess10Result_textEdited(const QString& arg);
    void on_averageExceedances10_textEdited(const QString& arg);
    void on_excess10Ch_returnPressed();
    void on_excess10K_returnPressed();
    void on_excess10Result_returnPressed();
    void on_averageExceedances10_returnPressed();
    void on_allBack2_textEdited(const QString& arg);
    void on_allFront2_textEdited(const QString& arg);
    void on_allExcess2_textEdited(const QString& arg2);
    void on_allAverageExceedances2_textEdited(const QString& arg);
    void on_totalBackAndFront2_textEdited(const QString& arg);
    void on_totalAllExcess2_textEdited(const QString& arg);
    void on_allBack2_returnPressed();
    void on_allFront2_returnPressed();
    void on_allExcess2_returnPressed();
    void on_allAverageExceedances2_returnPressed();
    void on_totalBackAndFront2_returnPressed();
    void on_totalAllExcess2_returnPressed();
    void on_totalAllBack2_textEdited(const QString &arg);
    void on_totalAllFront2_textEdited(const QString &arg);
    void on_allExcess1AndExcess2_textEdited(const QString &arg);
    void on_totalAllExcess1AndExcess2_textEdited(const QString &arg);
    void on_totalAllAverageExceedances2_textEdited(const QString &arg);
    void on_totalAllBack2_returnPressed();
    void on_totalAllFront2_returnPressed();
    void on_allExcess1AndExcess2_returnPressed();
    void on_totalAllExcess1AndExcess2_returnPressed();
    void on_totalAllAverageExceedances2_returnPressed();

public slots:
    void ShowCalculationSecond();

private:
    Ui::CalculationSecond *ui;
    CalculationThird* calcT_;
    Option* option_;
signals:
    void ShowMainWindow();
};

#endif // CALCULATIONSECOND_H
