
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "calculationsecond.h"
#include <QLineEdit>
#include "option.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow

{
    Q_OBJECT

public:
    MainWindow(Option* option, QWidget *parent = nullptr);
    ~MainWindow();

    void InitField();
    void CheckTextEdit(QLineEdit* textEdit, const QString &arg);
    bool CheckEmptyLineEdit(QLineEdit* textEdit);
    void CheckCurrResult(QLineEdit* textEdit, QString result, double currResult);
    void SetStyleLineEdit(QLineEdit* textEdit);
    void SetValBack1Ch(double val);
    void SetValFront1Ch(double val);
    void SetValBack1K(double val);
    void SetValFront1K(double val);
    void SetValBack2Ch(double val);
    void SetValFront2Ch(double val);
    void SetValBack2K(double val);
    void SetValFront2K(double val);
    void SetValBack3Ch(double val);
    void SetValFront3Ch(double val);
    void SetValBack3K(double val);
    void SetValFront3K(double val);
    void SetValBack4Ch(double val);
    void SetValFront4Ch(double val);
    void SetValBack4K(double val);
    void SetValFront4K(double val);
    void SetValBack5Ch(double val);
    void SetValFront5Ch(double val);
    void SetValBack5K(double val);
    void SetValFront5K(double val);
    void SetOption(int option);
    void SetEmptyField(QLineEdit* textEdit);
    void SetAllEmptyField();
    void SetInformation(QString name, QString surname, QString group);
    void SetEmptyInformation();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_back1Result_textEdited(const QString &arg);
    void on_front1Result_textEdited(const QString &arg);
    void on_back2Result_textEdited(const QString &arg);
    void on_front2Result_textEdited(const QString &arg);
    void on_back3Result_textEdited(const QString &arg);
    void on_front3Result_textEdited(const QString &arg);
    void on_back4Result_textEdited(const QString &arg);
    void on_front4Result_textEdited(const QString &arg);
    void on_back5Result_textEdited(const QString &arg);
    void on_front5Result_textEdited(const QString &arg);
    void on_back1Result_returnPressed();
    void on_front1Result_returnPressed();
    void on_back2Result_returnPressed();
    void on_front2Result_returnPressed();
    void on_back3Result_returnPressed();
    void on_front3Result_returnPressed();
    void on_back4Result_returnPressed();
    void on_front4Result_returnPressed();
    void on_back5Result_returnPressed();
    void on_front5Result_returnPressed();
    void on_excess1Ch_textEdited(const QString &arg);
    void on_excess1K_textEdited(const QString &arg);
    void on_excess1Result_textEdited(const QString &arg);
    void on_averageExceedances1_textEdited(const QString &arg);
    void on_excess1Ch_returnPressed();
    void on_excess1K_returnPressed();
    void on_excess1Result_returnPressed();
    void on_averageExceedances1_returnPressed();
    void on_excess2Ch_textEdited(const QString& arg);
    void on_excess2K_textEdited(const QString& arg);
    void on_excess2Result_textEdited(const QString& arg);
    void on_averageExceedances2_textEdited(const QString& arg);
    void on_excess2Ch_returnPressed();
    void on_excess2K_returnPressed();
    void on_excess2Result_returnPressed();
    void on_averageExceedances2_returnPressed();
    void on_excess3Ch_textEdited(const QString& arg);
    void on_excess3K_textEdited(const QString& arg);
    void on_excess3Result_textEdited(const QString& arg);
    void on_averageExceedances3_textEdited(const QString& arg);
    void on_excess3Ch_returnPressed();
    void on_excess3K_returnPressed();
    void on_excess3Result_returnPressed();
    void on_averageExceedances3_returnPressed();
    void on_excess4Ch_textEdited(const QString& arg);
    void on_excess4K_textEdited(const QString& arg);
    void on_excess4Result_textEdited(const QString& arg);
    void on_averageExceedances4_textEdited(const QString& arg);
    void on_excess4Ch_returnPressed();
    void on_excess4K_returnPressed();
    void on_excess4Result_returnPressed();
    void on_averageExceedances4_returnPressed();
    void on_excess5Ch_textEdited(const QString& arg);
    void on_excess5K_textEdited(const QString& arg);
    void on_excess5Result_textEdited(const QString& arg);
    void on_averageExceedances5_textEdited(const QString& arg);
    void on_excess5Ch_returnPressed();
    void on_excess5K_returnPressed();
    void on_excess5Result_returnPressed();
    void on_averageExceedances5_returnPressed();
    void on_allBack1_textEdited(const QString &arg);
    void on_allFront1_textEdited(const QString &arg);
    void on_allExcess1_textEdited(const QString &arg1);
    void on_allAverageExceedances1_textEdited(const QString &arg);
    void on_totalBackAndFront1_textEdited(const QString &arg);
    void on_totalAllExcess1_textEdited(const QString &arg);
    void on_allBack1_returnPressed();
    void on_allFront1_returnPressed();
    void on_allExcess1_returnPressed();
    void on_allAverageExceedances1_returnPressed();
    void on_totalBackAndFront1_returnPressed();
    void on_totalAllExcess1_returnPressed();

public slots:
    void ShowMainWindow();
signals:
    void ShowChooseOpt();

private:
    Ui::MainWindow *ui;
    CalculationSecond* calcS_;
    Option* option_;
};

#endif // MAINWINDOW_H
