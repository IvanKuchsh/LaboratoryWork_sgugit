#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDate>
#include <QIcon>
MainWindow::MainWindow(Option* option, QWidget *parent)
    : option_(option)
    , QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Первое окно");
    QWidget::setFixedWidth(700);
    QWidget::setFixedHeight(675);
    calcS_ = new CalculationSecond(option_, nullptr);
    ui->pushButton->setText(QString::fromUtf8("\u2192"));
    const QString date = QDateTime::currentDateTime().toString("dd.MM.yyyy");
    ui->label_65->setText(ui->label_65->text() + "<b>" + date + "</b>");
    connect(calcS_, &CalculationSecond::ShowMainWindow, this, &MainWindow::ShowMainWindow);
}

void MainWindow::SetOption(int option) {
    ui->option->setText("Вариант: <b>" + QString().number(option) + "</b>");
    calcS_->SetOption(option);
};


void MainWindow::SetEmptyField(QLineEdit* textEdit) {
    textEdit->setText("");
}
void MainWindow::SetAllEmptyField() {
    SetEmptyField(ui->back1Result);
    SetStyleLineEdit(ui->back1Result);
    SetEmptyField(ui->front1Result);
    SetStyleLineEdit(ui->front1Result);
    SetEmptyField(ui->excess1Ch);
    SetStyleLineEdit(ui->excess1Ch);
    SetEmptyField(ui->excess1K);
    SetStyleLineEdit(ui->excess1K);
    SetEmptyField(ui->excess1Result);
    SetStyleLineEdit(ui->excess1Result);
    SetEmptyField(ui->averageExceedances1);
    SetStyleLineEdit(ui->averageExceedances1);

    SetEmptyField(ui->back2Result);
    SetStyleLineEdit(ui->back2Result);
    SetEmptyField(ui->front2Result);
    SetStyleLineEdit(ui->front2Result);
    SetEmptyField(ui->excess2Ch);
    SetStyleLineEdit(ui->excess2Ch);
    SetEmptyField(ui->excess2K);
    SetStyleLineEdit(ui->excess2K);
    SetEmptyField(ui->excess2Result);
    SetStyleLineEdit(ui->excess2Result);
    SetEmptyField(ui->averageExceedances2);
    SetStyleLineEdit(ui->averageExceedances2);

    SetEmptyField(ui->back3Result);
    SetStyleLineEdit(ui->back3Result);
    SetEmptyField(ui->front3Result);
    SetStyleLineEdit(ui->front3Result);
    SetEmptyField(ui->excess3Ch);
    SetStyleLineEdit(ui->excess3Ch);
    SetEmptyField(ui->excess3K);
    SetStyleLineEdit(ui->excess3K);
    SetEmptyField(ui->excess3Result);
    SetStyleLineEdit(ui->excess3Result);
    SetEmptyField(ui->averageExceedances3);
    SetStyleLineEdit(ui->averageExceedances3);

    SetEmptyField(ui->back4Result);
    SetStyleLineEdit(ui->back4Result);
    SetEmptyField(ui->front4Result);
    SetStyleLineEdit(ui->front4Result);
    SetEmptyField(ui->excess4Ch);
    SetStyleLineEdit(ui->excess4Ch);
    SetEmptyField(ui->excess4K);
    SetStyleLineEdit(ui->excess4K);
    SetEmptyField(ui->excess4Result);
    SetStyleLineEdit(ui->excess4Result);
    SetEmptyField(ui->averageExceedances4);
    SetStyleLineEdit(ui->averageExceedances4);

    SetEmptyField(ui->back5Result);
    SetStyleLineEdit(ui->back5Result);
    SetEmptyField(ui->front5Result);
    SetStyleLineEdit(ui->front5Result);
    SetEmptyField(ui->excess5Ch);
    SetStyleLineEdit(ui->excess5Ch);
    SetEmptyField(ui->excess5K);
    SetStyleLineEdit(ui->excess5K);
    SetEmptyField(ui->excess5Result);
    SetStyleLineEdit(ui->excess5Result);
    SetEmptyField(ui->averageExceedances5);
    SetStyleLineEdit(ui->averageExceedances5);

    SetEmptyField(ui->allBack1);
    SetStyleLineEdit(ui->allBack1);
    SetEmptyField(ui->allFront1);
    SetStyleLineEdit(ui->allFront1);
    SetEmptyField(ui->allExcess1);
    SetStyleLineEdit(ui->allExcess1);
    SetEmptyField(ui->allAverageExceedances1);
    SetStyleLineEdit(ui->allAverageExceedances1);
    SetEmptyField(ui->totalBackAndFront1);
    SetStyleLineEdit(ui->totalBackAndFront1);
    SetEmptyField(ui->totalAllExcess1);
    SetStyleLineEdit(ui->totalAllExcess1);

    calcS_->SetAllEmptyField();
}

void MainWindow::InitField() {
    option_->CalcBack6Ch();
    option_->CalcFront6Ch();
    calcS_->SetValBack6Ch(option_->GetBack6Ch());
    calcS_->SetValFront6Ch(option_->GetFront6Ch());
    option_->CalcBack6K();
    option_->CalcFront6K();
    option_->CalcBack6Result();
    option_->CalcFront6Result();
    option_->CalcExcess6Ch();
    option_->CalcExcess6K();
    option_->CalcExcess6Result();
    option_->CalcAverageExceedances6();
    calcS_->SetValBack6K(option_->GetBack6K());
    calcS_->SetValFront6K(option_->GetFront6K());
    option_->CalcBack7Ch();
    option_->CalcFront7Ch();
    calcS_->SetValBack7Ch(option_->GetBack7Ch());
    calcS_->SetValFront7Ch(option_->GetFront7Ch());
    option_->CalcBack7K();
    option_->CalcFront7K();
    option_->CalcBack7Result();
    option_->CalcFront7Result();
    option_->CalcExcess7Ch();
    option_->CalcExcess7K();
    option_->CalcExcess7Result();
    option_->CalcAverageExceedances7();
    calcS_->SetValBack7K(option_->GetBack7K());
    calcS_->SetValFront7K(option_->GetFront7K());
    option_->CalcBack8Ch();
    option_->CalcFront8Ch();
    calcS_->SetValBack8Ch(option_->GetBack8Ch());
    calcS_->SetValFront8Ch(option_->GetFront8Ch());
    option_->CalcBack8K();
    option_->CalcFront8K();
    option_->CalcBack8Result();
    option_->CalcFront8Result();
    option_->CalcExcess8Ch();
    option_->CalcExcess8K();
    option_->CalcExcess8Result();
    option_->CalcAverageExceedances8();
    calcS_->SetValBack8K(option_->GetBack8K());
    calcS_->SetValFront8K(option_->GetFront8K());
    option_->CalcBack9Ch();
    option_->CalcFront9Ch();
    calcS_->SetValBack9Ch(option_->GetBack9Ch());
    calcS_->SetValFront9Ch(option_->GetFront9Ch());
    option_->CalcBack9K();
    option_->CalcFront9K();
    option_->CalcBack9Result();
    option_->CalcFront9Result();
    option_->CalcExcess9Ch();
    option_->CalcExcess9K();
    option_->CalcExcess9Result();
    option_->CalcAverageExceedances9();
    calcS_->SetValBack9K(option_->GetBack9K());
    calcS_->SetValFront9K(option_->GetFront9K());
    option_->CalcBack10Ch();
    option_->CalcFront10Ch();
    calcS_->SetValBack10Ch(option_->GetBack10Ch());
    calcS_->SetValFront10Ch(option_->GetFront10Ch());
    option_->CalcBack10K();
    option_->CalcFront10K();
    option_->CalcBack10Result();
    option_->CalcFront10Result();
    option_->CalcExcess10Ch();
    option_->CalcExcess10K();
    option_->CalcExcess10Result();
    option_->CalcAverageExceedances10();
    calcS_->SetValBack10K(option_->GetBack10K());
    calcS_->SetValFront10K(option_->GetFront10K());
    option_->CalcAllBack2();
    option_->CalcAllFront2();
    option_->CalcAllExcess2();
    option_->CalcAllAverageExceedances2();
    option_->CalcTotalBackAndFront2();
    option_->CalcTotalAllExcess2();
    option_->CalcTotalAllBack2();
    option_->CalcTotalAllFront2();
    option_->CalcAllExcess1AndExcess2();
    option_->CalcTotalAllExcess1AndExcess2();
    option_->CalcTotalAllAverageExceedances2();

    calcS_->InitField();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ShowMainWindow() {
    this->show();
}
void MainWindow::SetInformation(QString name, QString surname, QString group) {
    ui->name->setText("Имя: <b>" + name + "</b>");
    ui->surname->setText("Фамилия: <b>" + surname + "</b>");
    ui->group->setText("Группа: <b>" + group + "</b>");
    calcS_->SetInformation(name,surname, group);
};
void MainWindow::SetEmptyInformation() {
    ui->name->setText("");
    ui->surname->setText("");
    ui->group->setText("");
    calcS_->SetEmptyInformation();
};
void MainWindow::on_pushButton_clicked()
{
    this->close();
    calcS_->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    this->close();
    emit ShowChooseOpt();
}

void MainWindow::CheckTextEdit(QLineEdit* lineEdit, const QString &arg) {
    QString text = arg;
    if (text.size() == 1 && text[0] == '-') {
        return;
    }
    if (text.size() == 2 && text[0] == '-' && text[1] == '0') {
        return;
    }
    if (text.size() == 3 && text[0] == '-' && text[1] == '0' && text[text.size() - 1] == '0') {
        text.resize(text.size() - 1);
        lineEdit->setText(text);
        return;
    }
    if (text.size() == 2 && text[0] == '0' && text[1] == '0') {
        text.resize(text.size() - 1);
        lineEdit->setText(text);
        return;
    }
    if (text.size() == 1 && text[0] == ',' || text.size() == 2 && text[0] == '-' && text[1] == ',') {
        text.resize(text.size() - 1);
        lineEdit->setText(text);
        return;
    }
    if (text.size() != 0 && text[text.size() - 1] == '-' && (text[0] == '-' || text[0] > '0' || text[0] <= '9')) {
        text.resize(text.size() - 1);
        lineEdit->setText(text);
        return;
    }
    if (text.size() != 0 && text[text.size() - 1] == ',') {
        int cnt = 0;
        for (int i = 0; i < text.size(); ++i) {
            if (text[i] == ',') {
                ++cnt;
            }
        }
        if (cnt == 2) {
            text.resize(text.size() - 1);
            lineEdit->setText(text);
        }
        return;
    }
    if ((text.size() != 0 && (text[text.size() - 1] < '0' || text[text.size() - 1] > '9'))) {
        text.resize(text.size() - 1);
        lineEdit->setText(text);
    };
}
void MainWindow::CheckCurrResult(QLineEdit* textEdit, QString result, double currResult) {
    if (result.size() == 0 || result.size() == 1 && result[0] == '-') {
        return;
    }
    for (int i = 0; i < result.size(); ++i) {
        if (result[i] == ',') {
            result[i] = '.';
            break;
        }
    }
    double res = QString(result).toDouble();
    if (res == currResult) {
        textEdit->setStyleSheet("QLineEdit{background-color:green; color:white; border: 1px solid black}");
    } else if (abs(currResult - res) < std::numeric_limits<double>::epsilon()) {
        textEdit->setStyleSheet("QLineEdit{background-color:green; color:white; border: 1px solid black}");
    } else if (qAbs(res - currResult) <= 0.000000000001 * qMin(qAbs(res), qAbs(currResult))) {
        textEdit->setStyleSheet("QLineEdit{background-color:green; color:white; border: 1px solid black}");
    } else {
        textEdit->setStyleSheet("QLineEdit{background-color:red; color:white; border: 1px solid black}");
    }
}
void MainWindow::SetStyleLineEdit(QLineEdit* textEdit) {
    textEdit->setStyleSheet("QLineEdit{background-color:white; color:black; border: 1px solid black}");
}
bool MainWindow::CheckEmptyLineEdit(QLineEdit* textEdit) {
    QString text = textEdit->text();
    return text.size() == 0 || text.size() == 1 && text[0] == '-';
}

//-----------------------------------------------------------------------------
void MainWindow::SetValBack1Ch(double val) {
    ui->back1Ch->setText(QString::number(val));
};
void MainWindow::SetValFront1Ch(double val) {
    ui->front1Ch->setText(QString::number(val));
};
void MainWindow::SetValBack1K(double val) {
    ui->back1K->setText(QString::number(val));
};
void MainWindow::SetValFront1K(double val) {
    ui->front1K->setText(QString::number(val));
};
//-----------------------------------------------------------------------------
void MainWindow::SetValBack2Ch(double val) {
    ui->back2Ch->setText(QString::number(val));
};
void MainWindow::SetValFront2Ch(double val) {
    ui->front2Ch->setText(QString::number(val));
};
void MainWindow::SetValBack2K(double val) {
    ui->back2K->setText(QString::number(val));
};
void MainWindow::SetValFront2K(double val) {
    ui->front2K->setText(QString::number(val));
};
//-----------------------------------------------------------------------------
void MainWindow::SetValBack3Ch(double val) {
    ui->back3Ch->setText(QString::number(val));
};
void MainWindow::SetValFront3Ch(double val) {
    ui->front3Ch->setText(QString::number(val));
};
void MainWindow::SetValBack3K(double val) {
    ui->back3K->setText(QString::number(val));
};
void MainWindow::SetValFront3K(double val) {
    ui->front3K->setText(QString::number(val));
};
//-----------------------------------------------------------------------------
void MainWindow::SetValBack4Ch(double val) {
    ui->back4Ch->setText(QString::number(val));
};
void MainWindow::SetValFront4Ch(double val) {
    ui->front4Ch->setText(QString::number(val));
};
void MainWindow::SetValBack4K(double val) {
    ui->back4K->setText(QString::number(val));
};
void MainWindow::SetValFront4K(double val) {
    ui->front4K->setText(QString::number(val));
};
//-----------------------------------------------------------------------------
void MainWindow::SetValBack5Ch(double val) {
    ui->back5Ch->setText(QString::number(val));
};
void MainWindow::SetValFront5Ch(double val) {
    ui->front5Ch->setText(QString::number(val));
};
void MainWindow::SetValBack5K(double val) {
    ui->back5K->setText(QString::number(val));
};
void MainWindow::SetValFront5K(double val) {
    ui->front5K->setText(QString::number(val));
};
//-----------------------------------------------------------------------------
void MainWindow::on_back1Result_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->back1Result);
    CheckTextEdit(ui->back1Result, arg);
}
void MainWindow::on_front1Result_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->front1Result);
    CheckTextEdit(ui->front1Result, arg);
}
void MainWindow::on_back2Result_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->back2Result);
    CheckTextEdit(ui->back2Result, arg);
}
void MainWindow::on_front2Result_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->front2Result);
    CheckTextEdit(ui->front2Result, arg);
}
void MainWindow::on_back3Result_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->back3Result);
    CheckTextEdit(ui->back3Result, arg);
}
void MainWindow::on_front3Result_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->front3Result);
    CheckTextEdit(ui->front3Result, arg);
}
void MainWindow::on_back4Result_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->back4Result);
    CheckTextEdit(ui->back4Result, arg);
}
void MainWindow::on_front4Result_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->front4Result);
    CheckTextEdit(ui->front4Result, arg);
}
void MainWindow::on_back5Result_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->back5Result);
    CheckTextEdit(ui->back5Result, arg);
}
void MainWindow::on_front5Result_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->front5Result);
    CheckTextEdit(ui->front5Result, arg);
}
//-----------------------------------------------------------------------------
void MainWindow::on_back1Result_returnPressed()
{
    CheckCurrResult(ui->back1Result, ui->back1Result->text(), option_->GetBack1Result());
}
void MainWindow::on_front1Result_returnPressed()
{
    CheckCurrResult(ui->front1Result, ui->front1Result->text(), option_->GetFront1Result());
}
void MainWindow::on_back2Result_returnPressed()
{
    CheckCurrResult(ui->back2Result, ui->back2Result->text(), option_->GetBack2Result());
}
void MainWindow::on_front2Result_returnPressed()
{
    CheckCurrResult(ui->front2Result, ui->front2Result->text(), option_->GetFront2Result());
}
void MainWindow::on_back3Result_returnPressed()
{
    CheckCurrResult(ui->back3Result, ui->back3Result->text(), option_->GetBack3Result());
}
void MainWindow::on_front3Result_returnPressed()
{
    CheckCurrResult(ui->front3Result, ui->front3Result->text(), option_->GetFront3Result());
}
void MainWindow::on_back4Result_returnPressed()
{
    CheckCurrResult(ui->back4Result, ui->back4Result->text(), option_->GetBack4Result());
}
void MainWindow::on_front4Result_returnPressed()
{
    CheckCurrResult(ui->front4Result, ui->front4Result->text(), option_->GetFront4Result());
}
void MainWindow::on_back5Result_returnPressed()
{
    CheckCurrResult(ui->back5Result, ui->back5Result->text(), option_->GetBack5Result());
}
void MainWindow::on_front5Result_returnPressed()
{
    CheckCurrResult(ui->front5Result, ui->front5Result->text(), option_->GetFront5Result());
}
//-----------------------------------------------------------------------------

void MainWindow::on_excess1Ch_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->excess1Ch);
    CheckTextEdit(ui->excess1Ch, arg);
}
void MainWindow::on_excess1K_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->excess1K);
    CheckTextEdit(ui->excess1K, arg);
}
void MainWindow::on_excess1Result_textEdited(const QString &arg)
{
    if (CheckEmptyLineEdit(ui->back1Result) || CheckEmptyLineEdit(ui->front1Result)) {
        ui->excess1Result->setText("");
        return;
    }
    SetStyleLineEdit(ui->excess1Result);
    CheckTextEdit(ui->excess1Result, arg);
}
void MainWindow::on_averageExceedances1_textEdited(const QString &arg)
{
    if (CheckEmptyLineEdit(ui->excess1Ch) || CheckEmptyLineEdit(ui->excess1K) || CheckEmptyLineEdit(ui->excess1Result)) {
        ui->averageExceedances1->setText("");
        return;
    }
    SetStyleLineEdit(ui->averageExceedances1);
    CheckTextEdit(ui->averageExceedances1, arg);
}
//-----------------------------------------------------------------------------
void MainWindow::on_excess1Ch_returnPressed()
{
    SetStyleLineEdit(ui->averageExceedances1);
    ui->averageExceedances1->setText("");
    ui->allAverageExceedances1->setText("");
    CheckCurrResult(ui->excess1Ch, ui->excess1Ch->text(), option_->GetExcess1Ch());
}
void MainWindow::on_excess1K_returnPressed()
{
    SetStyleLineEdit(ui->averageExceedances1);
    ui->averageExceedances1->setText("");
    ui->allAverageExceedances1->setText("");
    CheckCurrResult(ui->excess1K, ui->excess1K->text(), option_->GetExcess1K());
}
void MainWindow::on_excess1Result_returnPressed()
{
    SetStyleLineEdit(ui->averageExceedances1);
    ui->averageExceedances1->setText("");
    ui->allAverageExceedances1->setText("");
    CheckCurrResult(ui->excess1Result, ui->excess1Result->text(), option_->GetExcess1Result());
}
void MainWindow::on_averageExceedances1_returnPressed()
{
    CheckCurrResult(ui->averageExceedances1, ui->averageExceedances1->text(), option_->GetAverageExceedances1());
}
//-----------------------------------------------------------------------------
void MainWindow::on_excess2Ch_textEdited(const QString& arg)
{
    SetStyleLineEdit(ui->excess2Ch);
    CheckTextEdit(ui->excess2Ch, arg);
}
void MainWindow::on_excess2K_textEdited(const QString& arg)
{
    SetStyleLineEdit(ui->excess2K);
    CheckTextEdit(ui->excess2K, arg);
}
void MainWindow::on_excess2Result_textEdited(const QString& arg)
{
    if (CheckEmptyLineEdit(ui->back2Result) || CheckEmptyLineEdit(ui->front2Result)) {
        ui->excess2Result->setText("");
        return;
    }
    SetStyleLineEdit(ui->excess2Result);
    CheckTextEdit(ui->excess2Result, arg);
}
void MainWindow::on_averageExceedances2_textEdited(const QString& arg)
{
    if (CheckEmptyLineEdit(ui->excess2Ch) || CheckEmptyLineEdit(ui->excess2K) || CheckEmptyLineEdit(ui->excess2Result)) {
        ui->averageExceedances2->setText("");
        return;
    }
    SetStyleLineEdit(ui->averageExceedances2);
    CheckTextEdit(ui->averageExceedances2, arg);
}
//-----------------------------------------------------------------------------
void MainWindow::on_excess2Ch_returnPressed()
{
    SetStyleLineEdit(ui->averageExceedances2);
    ui->averageExceedances2->setText("");
    ui->allAverageExceedances1->setText("");
    CheckCurrResult(ui->excess2Ch, ui->excess2Ch->text(), option_->GetExcess2Ch());
}
void MainWindow::on_excess2K_returnPressed()
{
    SetStyleLineEdit(ui->averageExceedances2);
    ui->averageExceedances2->setText("");
    ui->allAverageExceedances1->setText("");
    CheckCurrResult(ui->excess2K, ui->excess2K->text(), option_->GetExcess2K());
}
void MainWindow::on_excess2Result_returnPressed()
{
    SetStyleLineEdit(ui->averageExceedances2);
    ui->averageExceedances2->setText("");
    ui->allAverageExceedances1->setText("");
    CheckCurrResult(ui->excess2Result, ui->excess2Result->text(), option_->GetExcess2Result());
}
void MainWindow::on_averageExceedances2_returnPressed()
{
    CheckCurrResult(ui->averageExceedances2, ui->averageExceedances2->text(), option_->GetAverageExceedances2());
}
//-----------------------------------------------------------------------------
void MainWindow::on_excess3Ch_textEdited(const QString& arg)
{
    SetStyleLineEdit(ui->excess3Ch);
    CheckTextEdit(ui->excess3Ch, arg);
}
void MainWindow::on_excess3K_textEdited(const QString& arg)
{
    SetStyleLineEdit(ui->excess3K);
    CheckTextEdit(ui->excess3K, arg);
}
void MainWindow::on_excess3Result_textEdited(const QString& arg)
{
    if (CheckEmptyLineEdit(ui->back3Result) || CheckEmptyLineEdit(ui->front3Result)) {
        ui->excess3Result->setText("");
        return;
    }
    SetStyleLineEdit(ui->excess3Result);
    CheckTextEdit(ui->excess3Result, arg);
}
void MainWindow::on_averageExceedances3_textEdited(const QString& arg)
{
    if (CheckEmptyLineEdit(ui->excess3Ch) || CheckEmptyLineEdit(ui->excess3K) || CheckEmptyLineEdit(ui->excess3Result)) {
        ui->averageExceedances3->setText("");
        return;
    }
    SetStyleLineEdit(ui->averageExceedances3);
    CheckTextEdit(ui->averageExceedances3, arg);
}
//-----------------------------------------------------------------------------
void MainWindow::on_excess3Ch_returnPressed()
{
    SetStyleLineEdit(ui->averageExceedances3);
    ui->averageExceedances3->setText("");
    ui->allAverageExceedances1->setText("");
    CheckCurrResult(ui->excess3Ch, ui->excess3Ch->text(), option_->GetExcess3Ch());
}
void MainWindow::on_excess3K_returnPressed()
{
    SetStyleLineEdit(ui->averageExceedances3);
    ui->averageExceedances3->setText("");
    ui->allAverageExceedances1->setText("");
    CheckCurrResult(ui->excess3K, ui->excess3K->text(), option_->GetExcess3K());
}
void MainWindow::on_excess3Result_returnPressed()
{
    SetStyleLineEdit(ui->averageExceedances3);
    ui->averageExceedances3->setText("");
    ui->allAverageExceedances1->setText("");
    CheckCurrResult(ui->excess3Result, ui->excess3Result->text(), option_->GetExcess3Result());
}
void MainWindow::on_averageExceedances3_returnPressed()
{
    CheckCurrResult(ui->averageExceedances3, ui->averageExceedances3->text(), option_->GetAverageExceedances3());
}
//-----------------------------------------------------------------------------
void MainWindow::on_excess4Ch_textEdited(const QString& arg)
{
    SetStyleLineEdit(ui->excess4Ch);
    CheckTextEdit(ui->excess4Ch, arg);
}
void MainWindow::on_excess4K_textEdited(const QString& arg)
{
    SetStyleLineEdit(ui->excess4K);
    CheckTextEdit(ui->excess4K, arg);
}
void MainWindow::on_excess4Result_textEdited(const QString& arg)
{
    if (CheckEmptyLineEdit(ui->back4Result) || CheckEmptyLineEdit(ui->front4Result)) {
        ui->excess4Result->setText("");
        return;
    }
    SetStyleLineEdit(ui->excess4Result);
    CheckTextEdit(ui->excess4Result, arg);
}
void MainWindow::on_averageExceedances4_textEdited(const QString& arg)
{
    if (CheckEmptyLineEdit(ui->excess4Ch) || CheckEmptyLineEdit(ui->excess4K) || CheckEmptyLineEdit(ui->excess4Result)) {
        ui->averageExceedances4->setText("");
        return;
    }
    SetStyleLineEdit(ui->averageExceedances4);
    CheckTextEdit(ui->averageExceedances4, arg);
}
//-----------------------------------------------------------------------------
void MainWindow::on_excess4Ch_returnPressed()
{
    SetStyleLineEdit(ui->averageExceedances4);
    ui->averageExceedances4->setText("");
    ui->allAverageExceedances1->setText("");
    CheckCurrResult(ui->excess4Ch, ui->excess4Ch->text(), option_->GetExcess4Ch());
}
void MainWindow::on_excess4K_returnPressed()
{
    SetStyleLineEdit(ui->averageExceedances4);
    ui->averageExceedances4->setText("");
    ui->allAverageExceedances1->setText("");
    CheckCurrResult(ui->excess4K, ui->excess4K->text(), option_->GetExcess4K());
}
void MainWindow::on_excess4Result_returnPressed()
{
    SetStyleLineEdit(ui->averageExceedances4);
    ui->averageExceedances4->setText("");
    ui->allAverageExceedances1->setText("");
    CheckCurrResult(ui->excess4Result, ui->excess4Result->text(), option_->GetExcess4Result());
}
void MainWindow::on_averageExceedances4_returnPressed()
{
    CheckCurrResult(ui->averageExceedances4, ui->averageExceedances4->text(), option_->GetAverageExceedances4());
}
//-----------------------------------------------------------------------------
void MainWindow::on_excess5Ch_textEdited(const QString& arg)
{
    SetStyleLineEdit(ui->excess5Ch);
    CheckTextEdit(ui->excess5Ch, arg);
}
void MainWindow::on_excess5K_textEdited(const QString& arg)
{
    SetStyleLineEdit(ui->excess5K);
    CheckTextEdit(ui->excess5K, arg);
}
void MainWindow::on_excess5Result_textEdited(const QString& arg)
{
    if (CheckEmptyLineEdit(ui->back5Result) || CheckEmptyLineEdit(ui->front5Result)) {
        ui->excess5Result->setText("");
        return;
    }
    SetStyleLineEdit(ui->excess5Result);
    CheckTextEdit(ui->excess5Result, arg);
}
void MainWindow::on_averageExceedances5_textEdited(const QString& arg)
{
    if (CheckEmptyLineEdit(ui->excess5Ch) || CheckEmptyLineEdit(ui->excess5K) || CheckEmptyLineEdit(ui->excess5Result)) {
        ui->averageExceedances5->setText("");
        return;
    }
    SetStyleLineEdit(ui->averageExceedances5);
    CheckTextEdit(ui->averageExceedances5, arg);
}
//-----------------------------------------------------------------------------
void MainWindow::on_excess5Ch_returnPressed()
{
    SetStyleLineEdit(ui->averageExceedances5);
    ui->averageExceedances5->setText("");
    ui->allAverageExceedances1->setText("");
    CheckCurrResult(ui->excess5Ch, ui->excess5Ch->text(), option_->GetExcess5Ch());
}
void MainWindow::on_excess5K_returnPressed()
{
    SetStyleLineEdit(ui->averageExceedances5);
    ui->averageExceedances5->setText("");
    ui->allAverageExceedances1->setText("");
    CheckCurrResult(ui->excess5K, ui->excess5K->text(), option_->GetExcess5K());
}
void MainWindow::on_excess5Result_returnPressed()
{
    SetStyleLineEdit(ui->averageExceedances5);
    ui->averageExceedances5->setText("");
    ui->allAverageExceedances1->setText("");
    CheckCurrResult(ui->excess5Result, ui->excess5Result->text(), option_->GetExcess5Result());
}
void MainWindow::on_averageExceedances5_returnPressed()
{
    CheckCurrResult(ui->averageExceedances5, ui->averageExceedances5->text(), option_->GetAverageExceedances5());
}
//-----------------------------------------------------------------------------
void MainWindow::on_allBack1_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->allBack1);
    CheckTextEdit(ui->allBack1, arg);
}
void MainWindow::on_allFront1_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->allFront1);
    CheckTextEdit(ui->allFront1, arg);
}
void MainWindow::on_allExcess1_textEdited(const QString &arg)
{
    if (   CheckEmptyLineEdit(ui->excess1Ch) || CheckEmptyLineEdit(ui->excess1K)
        || CheckEmptyLineEdit(ui->excess2Ch) || CheckEmptyLineEdit(ui->excess2K)
        || CheckEmptyLineEdit(ui->excess3Ch) || CheckEmptyLineEdit(ui->excess3K)
        || CheckEmptyLineEdit(ui->excess4Ch) || CheckEmptyLineEdit(ui->excess4K)
        || CheckEmptyLineEdit(ui->excess5Ch) || CheckEmptyLineEdit(ui->excess5K)
       ) {
        ui->allExcess1->setText("");
        return;
    }
    SetStyleLineEdit(ui->allExcess1);
    CheckTextEdit(ui->allExcess1, arg);
}
void MainWindow::on_allAverageExceedances1_textEdited(const QString &arg)
{
    if (
        CheckEmptyLineEdit(ui->averageExceedances1)
        || CheckEmptyLineEdit(ui->averageExceedances2)
        || CheckEmptyLineEdit(ui->averageExceedances3)
        || CheckEmptyLineEdit(ui->averageExceedances4)
        || CheckEmptyLineEdit(ui->averageExceedances5)
       ) {
        ui->allAverageExceedances1->setText("");
        return;
    }
    SetStyleLineEdit(ui->allAverageExceedances1);
    CheckTextEdit(ui->allAverageExceedances1, arg);
}
void MainWindow::on_totalBackAndFront1_textEdited(const QString &arg)
{
    if (CheckEmptyLineEdit(ui->allBack1) || CheckEmptyLineEdit(ui->allFront1)) {
        ui->totalBackAndFront1->setText("");
        return;
    }
    SetStyleLineEdit(ui->totalBackAndFront1);
    CheckTextEdit(ui->totalBackAndFront1, arg);
}
void MainWindow::on_totalAllExcess1_textEdited(const QString &arg)
{
    if (CheckEmptyLineEdit(ui->allExcess1)) {
        ui->totalAllExcess1->setText("");
        return;
    }
    SetStyleLineEdit(ui->totalAllExcess1);
    CheckTextEdit(ui->totalAllExcess1, arg);
}
//-----------------------------------------------------------------------------
void MainWindow::on_allBack1_returnPressed()
{
    CheckCurrResult(ui->allBack1, ui->allBack1->text(), option_->GetAllBack1());
}
void MainWindow::on_allFront1_returnPressed()
{
    CheckCurrResult(ui->allFront1, ui->allFront1->text(), option_->GetAllFront1());
}
void MainWindow::on_allExcess1_returnPressed()
{
    CheckCurrResult(ui->allExcess1, ui->allExcess1->text(), option_->GetAllExcess1());
}
void MainWindow::on_allAverageExceedances1_returnPressed()
{
    CheckCurrResult(ui->allAverageExceedances1, ui->allAverageExceedances1->text(), option_->GetAllAverageExceedances1());
}
void MainWindow::on_totalBackAndFront1_returnPressed()
{
    CheckCurrResult(ui->totalBackAndFront1, ui->totalBackAndFront1->text(), option_->GetTotalBackAndFront1());
}
void MainWindow::on_totalAllExcess1_returnPressed()
{
    CheckCurrResult(ui->totalAllExcess1, ui->totalAllExcess1->text(), option_->GetTotalAllExcess1());
}
