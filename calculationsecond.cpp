#include "calculationsecond.h"
#include "ui_calculationsecond.h"
#include <QDate>
CalculationSecond::CalculationSecond(Option* option, QWidget *parent) :
    option_(option),
    QWidget(parent),
    ui(new Ui::CalculationSecond)
{
    ui->setupUi(this);
    this->setWindowTitle("Второе окно");
    QWidget::setFixedWidth(700);
    QWidget::setFixedHeight(732);
    const QString date = QDateTime::currentDateTime().toString("dd.MM.yyyy");
    ui->label_65->setText(ui->label_65->text() + "<b>" + date + "</b>");
    calcT_ = new CalculationThird(option_);
    ui->pushButton->setText(QString::fromUtf8("\u2192"));
    ui->pushButton_2->setText(QString::fromUtf8("\u2190"));
    connect(calcT_, &CalculationThird::ShowCalculationSecond, this, &CalculationSecond::ShowCalculationSecond);
}

void CalculationSecond::SetEmptyInformation() {
    ui->name->setText("");
    ui->surname->setText("");
    ui->group->setText("");
    calcT_->SetEmptyInformation();
};
CalculationSecond::~CalculationSecond()
{
    delete ui;
}
void CalculationSecond::SetOption(int option) {
    ui->option->setText("Вариант: <b>" + QString().number(option) + "</b>");
    calcT_->SetOption(option);
};
void CalculationSecond::SetInformation(QString name, QString surname, QString group) {
    ui->name->setText("Имя: <b>" + name + "</b>");
    ui->surname->setText("Фамилия: <b>" + surname + "</b>");
    ui->group->setText("Группа: <b>" + group + "</b>");
    calcT_->SetInformation(name, surname, group);
};

void CalculationSecond::SetEmptyField(QLineEdit* textEdit) {
    textEdit->setText("");
}
void CalculationSecond::SetAllEmptyField() {
    SetEmptyField(ui->back6Result);
    SetStyleLineEdit(ui->back6Result);
    SetEmptyField(ui->front6Result);
    SetStyleLineEdit(ui->front6Result);
    SetEmptyField(ui->excess6Ch);
    SetStyleLineEdit(ui->excess6Ch);
    SetEmptyField(ui->excess6K);
    SetStyleLineEdit(ui->excess6K);
    SetEmptyField(ui->excess6Result);
    SetStyleLineEdit(ui->excess6Result);
    SetEmptyField(ui->averageExceedances6);
    SetStyleLineEdit(ui->averageExceedances6);
    SetEmptyField(ui->back7Result);
    SetStyleLineEdit(ui->back7Result);
    SetEmptyField(ui->front7Result);
    SetStyleLineEdit(ui->front7Result);
    SetEmptyField(ui->excess7Ch);
    SetStyleLineEdit(ui->excess7Ch);
    SetEmptyField(ui->excess7K);
    SetStyleLineEdit(ui->excess7K);
    SetEmptyField(ui->excess7Result);
    SetStyleLineEdit(ui->excess7Result);
    SetEmptyField(ui->averageExceedances7);
    SetStyleLineEdit(ui->averageExceedances7);
    SetEmptyField(ui->back8Result);
    SetStyleLineEdit(ui->back8Result);
    SetEmptyField(ui->front8Result);
    SetStyleLineEdit(ui->front8Result);
    SetEmptyField(ui->excess8Ch);
    SetStyleLineEdit(ui->excess8Ch);
    SetEmptyField(ui->excess8K);
    SetStyleLineEdit(ui->excess8K);
    SetEmptyField(ui->excess8Result);
    SetStyleLineEdit(ui->excess8Result);
    SetEmptyField(ui->averageExceedances8);
    SetStyleLineEdit(ui->averageExceedances8);
    SetEmptyField(ui->back9Result);
    SetStyleLineEdit(ui->back9Result);
    SetEmptyField(ui->front9Result);
    SetStyleLineEdit(ui->front9Result);
    SetEmptyField(ui->excess9Ch);
    SetStyleLineEdit(ui->excess9Ch);
    SetEmptyField(ui->excess9K);
    SetStyleLineEdit(ui->excess9K);
    SetEmptyField(ui->excess9Result);
    SetStyleLineEdit(ui->excess9Result);
    SetEmptyField(ui->averageExceedances9);
    SetStyleLineEdit(ui->averageExceedances9);
    SetEmptyField(ui->back10Result);
    SetStyleLineEdit(ui->back10Result);
    SetEmptyField(ui->front10Result);
    SetStyleLineEdit(ui->front10Result);
    SetEmptyField(ui->excess10Ch);
    SetStyleLineEdit(ui->excess10Ch);
    SetEmptyField(ui->excess10K);
    SetStyleLineEdit(ui->excess10K);
    SetEmptyField(ui->excess10Result);
    SetStyleLineEdit(ui->excess10Result);
    SetEmptyField(ui->averageExceedances10);
    SetStyleLineEdit(ui->averageExceedances10);
    SetEmptyField(ui->allBack2);
    SetStyleLineEdit(ui->allBack2);
    SetEmptyField(ui->allFront2);
    SetStyleLineEdit(ui->allFront2);
    SetEmptyField(ui->allExcess2);
    SetStyleLineEdit(ui->allExcess2);
    SetEmptyField(ui->allAverageExceedances2);
    SetStyleLineEdit(ui->allAverageExceedances2);
    SetEmptyField(ui->totalBackAndFront2);
    SetStyleLineEdit(ui->totalBackAndFront2);
    SetEmptyField(ui->totalAllExcess2);
    SetStyleLineEdit(ui->totalAllExcess2);
    SetEmptyField(ui->totalAllBack2);
    SetStyleLineEdit(ui->totalAllBack2);
    SetEmptyField(ui->totalAllFront2);
    SetStyleLineEdit(ui->totalAllFront2);
    SetEmptyField(ui->allExcess1AndExcess2);
    SetStyleLineEdit(ui->allExcess1AndExcess2);
    SetEmptyField(ui->totalAllAverageExceedances2);
    SetStyleLineEdit(ui->totalAllAverageExceedances2);
    SetEmptyField(ui->totalAllExcess1AndExcess2);
    SetStyleLineEdit(ui->totalAllExcess1AndExcess2);

    calcT_->SetAllEmptyField();
}

void CalculationSecond::InitField()
{
    option_->CalcMeasExceed0();
    option_->CalcMeasExceed1();
    option_->CalcMeasExceed2();
    option_->CalcMeasExceed3();
    option_->CalcMeasExceed4();
    option_->CalcMeasExceed5();
    option_->CalcMeasExceed6();

    option_->CalcPointMarker0();
    option_->CalcPointMarker7();
    calcT_->SetValPointMarker0();
    calcT_->SetValPointMarker7();
    option_->CalcTotal1();
    option_->CalcTotal2();
    option_->CalcTotal3();
    option_->CalcTotal4();

    option_->CalcAmendment0();
    option_->CalcAmendment1();
    option_->CalcAmendment2();
    option_->CalcAmendment3();
    option_->CalcAmendment4();
    option_->CalcAmendment5();
    option_->CalcAmendment6();

    option_->CalcEqualExceed0();
    option_->CalcEqualExceed1();
    option_->CalcEqualExceed2();
    option_->CalcEqualExceed3();
    option_->CalcEqualExceed4();
    option_->CalcEqualExceed5();
    option_->CalcEqualExceed6();

    option_->CalcPointMarker1();
    option_->CalcPointMarker2();
    option_->CalcPointMarker3();
    option_->CalcPointMarker4();
    option_->CalcPointMarker5();
    option_->CalcPointMarker6();
}

void CalculationSecond::on_pushButton_2_clicked()
{
    this->close();
    emit ShowMainWindow();
}

void CalculationSecond::ShowCalculationSecond() {
    this->show();
}

void CalculationSecond::on_pushButton_clicked()
{
    this->close();
    calcT_->show();
}
void CalculationSecond::CheckTextEdit(QLineEdit* lineEdit, const QString &arg) {
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
void CalculationSecond::CheckCurrResult(QLineEdit* textEdit, QString result, double currResult) {
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
void CalculationSecond::SetStyleLineEdit(QLineEdit* textEdit) {
    textEdit->setStyleSheet("QLineEdit{background-color:white; color:black; border: 1px solid black}");
}
bool CalculationSecond::CheckEmptyLineEdit(QLineEdit* textEdit) {
    QString text = textEdit->text();
    return text.size() == 0 || text.size() == 1 && text[0] == '-';
}
//-----------------------------------------------------------------------------
void CalculationSecond::SetValBack6Ch(double val) {
    ui->back6Ch->setText(QString::number(val));
};
void CalculationSecond::SetValFront6Ch(double val) {
    ui->front6Ch->setText(QString::number(val));
};
void CalculationSecond::SetValBack6K(double val) {
    ui->back6K->setText(QString::number(val));
};
void CalculationSecond::SetValFront6K(double val) {
    ui->front6K->setText(QString::number(val));
};
//-----------------------------------------------------------------------------
void CalculationSecond::SetValBack7Ch(double val) {
    ui->back7Ch->setText(QString::number(val));
};
void CalculationSecond::SetValFront7Ch(double val) {
    ui->front7Ch->setText(QString::number(val));
};
void CalculationSecond::SetValBack7K(double val) {
    ui->back7K->setText(QString::number(val));
};
void CalculationSecond::SetValFront7K(double val) {
    ui->front7K->setText(QString::number(val));
};
//-----------------------------------------------------------------------------
void CalculationSecond::SetValBack8Ch(double val) {
    ui->back8Ch->setText(QString::number(val));
};
void CalculationSecond::SetValFront8Ch(double val) {
    ui->front8Ch->setText(QString::number(val));
};
void CalculationSecond::SetValBack8K(double val) {
    ui->back8K->setText(QString::number(val));
};
void CalculationSecond::SetValFront8K(double val) {
    ui->front8K->setText(QString::number(val));
};
//-----------------------------------------------------------------------------
void CalculationSecond::SetValBack9Ch(double val) {
    ui->back9Ch->setText(QString::number(val));
};
void CalculationSecond::SetValFront9Ch(double val) {
    ui->front9Ch->setText(QString::number(val));
};
void CalculationSecond::SetValBack9K(double val) {
    ui->back9K->setText(QString::number(val));
};
void CalculationSecond::SetValFront9K(double val) {
    ui->front9K->setText(QString::number(val));
};
//-----------------------------------------------------------------------------
void CalculationSecond::SetValBack10Ch(double val) {
    ui->back10Ch->setText(QString::number(val));
};
void CalculationSecond::SetValFront10Ch(double val) {
    ui->front10Ch->setText(QString::number(val));
};
void CalculationSecond::SetValBack10K(double val) {
    ui->back10K->setText(QString::number(val));
};
void CalculationSecond::SetValFront10K(double val) {
    ui->front10K->setText(QString::number(val));
};
//-----------------------------------------------------------------------------
void CalculationSecond::on_back6Result_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->back6Result);
    CheckTextEdit(ui->back6Result, arg);
}
void CalculationSecond::on_front6Result_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->front6Result);
    CheckTextEdit(ui->front6Result, arg);
}
void CalculationSecond::on_back7Result_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->back7Result);
    CheckTextEdit(ui->back7Result, arg);
}
void CalculationSecond::on_front7Result_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->front7Result);
    CheckTextEdit(ui->front7Result, arg);
}
void CalculationSecond::on_back8Result_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->back8Result);
    CheckTextEdit(ui->back8Result, arg);
}
void CalculationSecond::on_front8Result_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->front8Result);
    CheckTextEdit(ui->front8Result, arg);
}
void CalculationSecond::on_back9Result_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->back9Result);
    CheckTextEdit(ui->back9Result, arg);
}
void CalculationSecond::on_front9Result_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->front9Result);
    CheckTextEdit(ui->front9Result, arg);
}
void CalculationSecond::on_back10Result_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->back10Result);
    CheckTextEdit(ui->back10Result, arg);
}
void CalculationSecond::on_front10Result_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->front10Result);
    CheckTextEdit(ui->front10Result, arg);
}
//-----------------------------------------------------------------------------
void CalculationSecond::on_back6Result_returnPressed()
{
    CheckCurrResult(ui->back6Result, ui->back6Result->text(), option_->GetBack6Result());
}
void CalculationSecond::on_front6Result_returnPressed()
{
    CheckCurrResult(ui->front6Result, ui->front6Result->text(), option_->GetFront6Result());
}
void CalculationSecond::on_back7Result_returnPressed()
{
    CheckCurrResult(ui->back7Result, ui->back7Result->text(), option_->GetBack7Result());
}
void CalculationSecond::on_front7Result_returnPressed()
{
    CheckCurrResult(ui->front7Result, ui->front7Result->text(), option_->GetFront7Result());
}
void CalculationSecond::on_back8Result_returnPressed()
{
    CheckCurrResult(ui->back8Result, ui->back8Result->text(), option_->GetBack8Result());
}
void CalculationSecond::on_front8Result_returnPressed()
{
    CheckCurrResult(ui->front8Result, ui->front8Result->text(), option_->GetFront8Result());
}
void CalculationSecond::on_back9Result_returnPressed()
{
    CheckCurrResult(ui->back9Result, ui->back9Result->text(), option_->GetBack9Result());
}
void CalculationSecond::on_front9Result_returnPressed()
{
    CheckCurrResult(ui->front9Result, ui->front9Result->text(), option_->GetFront9Result());
}
void CalculationSecond::on_back10Result_returnPressed()
{
    CheckCurrResult(ui->back10Result, ui->back10Result->text(), option_->GetBack10Result());
}
void CalculationSecond::on_front10Result_returnPressed()
{
    CheckCurrResult(ui->front10Result, ui->front10Result->text(), option_->GetFront10Result());
}
//-----------------------------------------------------------------------------
void CalculationSecond::on_excess6Ch_textEdited(const QString& arg)
{
    SetStyleLineEdit(ui->excess6Ch);
    CheckTextEdit(ui->excess6Ch, arg);
}
void CalculationSecond::on_excess6K_textEdited(const QString& arg)
{
    SetStyleLineEdit(ui->excess6K);
    CheckTextEdit(ui->excess6K, arg);
}
void CalculationSecond::on_excess6Result_textEdited(const QString& arg)
{
    if (CheckEmptyLineEdit(ui->back6Result) || CheckEmptyLineEdit(ui->front6Result)) {
        ui->excess6Result->setText("");
        return;
    }
    SetStyleLineEdit(ui->excess6Result);
    CheckTextEdit(ui->excess6Result, arg);
}
void CalculationSecond::on_averageExceedances6_textEdited(const QString& arg)
{
    if (CheckEmptyLineEdit(ui->excess6Ch) || CheckEmptyLineEdit(ui->excess6K) || CheckEmptyLineEdit(ui->excess6Result)) {
        ui->averageExceedances6->setText("");
        return;
    }
    SetStyleLineEdit(ui->averageExceedances6);
    CheckTextEdit(ui->averageExceedances6, arg);
}
//-----------------------------------------------------------------------------
void CalculationSecond::on_excess6Ch_returnPressed()
{
    SetStyleLineEdit(ui->averageExceedances6);
    ui->averageExceedances6->setText("");
    ui->allAverageExceedances2->setText("");
    CheckCurrResult(ui->excess6Ch, ui->excess6Ch->text(), option_->GetExcess6Ch());
}
void CalculationSecond::on_excess6K_returnPressed()
{
    SetStyleLineEdit(ui->averageExceedances6);
    ui->averageExceedances6->setText("");
    ui->allAverageExceedances2->setText("");
    CheckCurrResult(ui->excess6K, ui->excess6K->text(), option_->GetExcess6K());
}
void CalculationSecond::on_excess6Result_returnPressed()
{
    SetStyleLineEdit(ui->averageExceedances6);
    ui->averageExceedances6->setText("");
    ui->allAverageExceedances2->setText("");
    CheckCurrResult(ui->excess6Result, ui->excess6Result->text(), option_->GetExcess6Result());
}
void CalculationSecond::on_averageExceedances6_returnPressed()
{
    CheckCurrResult(ui->averageExceedances6, ui->averageExceedances6->text(), option_->GetAverageExceedances6());
}
//-----------------------------------------------------------------------------
void CalculationSecond::on_excess7Ch_textEdited(const QString& arg)
{
    SetStyleLineEdit(ui->excess7Ch);
    CheckTextEdit(ui->excess7Ch, arg);
}
void CalculationSecond::on_excess7K_textEdited(const QString& arg)
{
    SetStyleLineEdit(ui->excess7K);
    CheckTextEdit(ui->excess7K, arg);
}
void CalculationSecond::on_excess7Result_textEdited(const QString& arg)
{
    if (CheckEmptyLineEdit(ui->back7Result) || CheckEmptyLineEdit(ui->front7Result)) {
        ui->excess7Result->setText("");
        return;
    }
    SetStyleLineEdit(ui->excess7Result);
    CheckTextEdit(ui->excess7Result, arg);
}
void CalculationSecond::on_averageExceedances7_textEdited(const QString& arg)
{
    if (CheckEmptyLineEdit(ui->excess7Ch) || CheckEmptyLineEdit(ui->excess7K) || CheckEmptyLineEdit(ui->excess7Result)) {
        ui->averageExceedances7->setText("");
        return;
    }
    SetStyleLineEdit(ui->averageExceedances7);
    CheckTextEdit(ui->averageExceedances7, arg);
}
//-----------------------------------------------------------------------------
void CalculationSecond::on_excess7Ch_returnPressed()
{
    SetStyleLineEdit(ui->averageExceedances7);
    ui->averageExceedances7->setText("");
    ui->allAverageExceedances2->setText("");
    CheckCurrResult(ui->excess7Ch, ui->excess7Ch->text(), option_->GetExcess7Ch());
}
void CalculationSecond::on_excess7K_returnPressed()
{
    SetStyleLineEdit(ui->averageExceedances7);
    ui->averageExceedances7->setText("");
    ui->allAverageExceedances2->setText("");
    CheckCurrResult(ui->excess7K, ui->excess7K->text(), option_->GetExcess7K());
}
void CalculationSecond::on_excess7Result_returnPressed()
{
    SetStyleLineEdit(ui->averageExceedances7);
    ui->averageExceedances7->setText("");
    ui->allAverageExceedances2->setText("");
    CheckCurrResult(ui->excess7Result, ui->excess7Result->text(), option_->GetExcess7Result());
}
void CalculationSecond::on_averageExceedances7_returnPressed()
{
    CheckCurrResult(ui->averageExceedances7, ui->averageExceedances7->text(), option_->GetAverageExceedances7());
}
//-----------------------------------------------------------------------------
void CalculationSecond::on_excess8Ch_textEdited(const QString& arg)
{
    SetStyleLineEdit(ui->excess8Ch);
    CheckTextEdit(ui->excess8Ch, arg);
}
void CalculationSecond::on_excess8K_textEdited(const QString& arg)
{
    SetStyleLineEdit(ui->excess8K);
    CheckTextEdit(ui->excess8K, arg);
}
void CalculationSecond::on_excess8Result_textEdited(const QString& arg)
{
    if (CheckEmptyLineEdit(ui->back8Result) || CheckEmptyLineEdit(ui->front8Result)) {
        ui->excess8Result->setText("");
        return;
    }
    SetStyleLineEdit(ui->excess8Result);
    CheckTextEdit(ui->excess8Result, arg);
}
void CalculationSecond::on_averageExceedances8_textEdited(const QString& arg)
{
    if (CheckEmptyLineEdit(ui->excess8Ch) || CheckEmptyLineEdit(ui->excess8K) || CheckEmptyLineEdit(ui->excess8Result)) {
        ui->averageExceedances8->setText("");
        return;
    }
    SetStyleLineEdit(ui->averageExceedances8);
    CheckTextEdit(ui->averageExceedances8, arg);
}
//-----------------------------------------------------------------------------
void CalculationSecond::on_excess8Ch_returnPressed()
{
    SetStyleLineEdit(ui->averageExceedances8);
    ui->averageExceedances8->setText("");
    ui->allAverageExceedances2->setText("");
    CheckCurrResult(ui->excess8Ch, ui->excess8Ch->text(), option_->GetExcess8Ch());
}
void CalculationSecond::on_excess8K_returnPressed()
{
    SetStyleLineEdit(ui->averageExceedances8);
    ui->averageExceedances8->setText("");
    ui->allAverageExceedances2->setText("");
    CheckCurrResult(ui->excess8K, ui->excess8K->text(), option_->GetExcess8K());
}
void CalculationSecond::on_excess8Result_returnPressed()
{
    SetStyleLineEdit(ui->averageExceedances8);
    ui->averageExceedances8->setText("");
    ui->allAverageExceedances2->setText("");
    CheckCurrResult(ui->excess8Result, ui->excess8Result->text(), option_->GetExcess8Result());
}
void CalculationSecond::on_averageExceedances8_returnPressed()
{
    CheckCurrResult(ui->averageExceedances8, ui->averageExceedances8->text(), option_->GetAverageExceedances8());
}
//-----------------------------------------------------------------------------
void CalculationSecond::on_excess9Ch_textEdited(const QString& arg)
{
    SetStyleLineEdit(ui->excess9Ch);
    CheckTextEdit(ui->excess9Ch, arg);
}
void CalculationSecond::on_excess9K_textEdited(const QString& arg)
{
    SetStyleLineEdit(ui->excess9K);
    CheckTextEdit(ui->excess9K, arg);
}
void CalculationSecond::on_excess9Result_textEdited(const QString& arg)
{
    if (CheckEmptyLineEdit(ui->back9Result) || CheckEmptyLineEdit(ui->front9Result)) {
        ui->excess9Result->setText("");
        return;
    }
    SetStyleLineEdit(ui->excess9Result);
    CheckTextEdit(ui->excess9Result, arg);
}
void CalculationSecond::on_averageExceedances9_textEdited(const QString& arg)
{
    if (CheckEmptyLineEdit(ui->excess9Ch) || CheckEmptyLineEdit(ui->excess9K) || CheckEmptyLineEdit(ui->excess9Result)) {
        ui->averageExceedances9->setText("");
        return;
    }
    SetStyleLineEdit(ui->averageExceedances9);
    CheckTextEdit(ui->averageExceedances9, arg);
}
//-----------------------------------------------------------------------------
void CalculationSecond::on_excess9Ch_returnPressed()
{
    SetStyleLineEdit(ui->averageExceedances9);
    ui->averageExceedances9->setText("");
    ui->allAverageExceedances2->setText("");
    CheckCurrResult(ui->excess9Ch, ui->excess9Ch->text(), option_->GetExcess9Ch());
}
void CalculationSecond::on_excess9K_returnPressed()
{
    SetStyleLineEdit(ui->averageExceedances9);
    ui->averageExceedances9->setText("");
    ui->allAverageExceedances2->setText("");
    CheckCurrResult(ui->excess9K, ui->excess9K->text(), option_->GetExcess9K());
}
void CalculationSecond::on_excess9Result_returnPressed()
{
    SetStyleLineEdit(ui->averageExceedances9);
    ui->averageExceedances9->setText("");
    ui->allAverageExceedances2->setText("");
    CheckCurrResult(ui->excess9Result, ui->excess9Result->text(), option_->GetExcess9Result());
}
void CalculationSecond::on_averageExceedances9_returnPressed()
{
    CheckCurrResult(ui->averageExceedances9, ui->averageExceedances9->text(), option_->GetAverageExceedances9());
}
//-----------------------------------------------------------------------------
void CalculationSecond::on_excess10Ch_textEdited(const QString& arg)
{
    SetStyleLineEdit(ui->excess10Ch);
    CheckTextEdit(ui->excess10Ch, arg);
}
void CalculationSecond::on_excess10K_textEdited(const QString& arg)
{
    SetStyleLineEdit(ui->excess10K);
    CheckTextEdit(ui->excess10K, arg);
}
void CalculationSecond::on_excess10Result_textEdited(const QString& arg)
{
    if (CheckEmptyLineEdit(ui->back10Result) || CheckEmptyLineEdit(ui->front10Result)) {
        ui->excess10Result->setText("");
        return;
    }
    SetStyleLineEdit(ui->excess10Result);
    CheckTextEdit(ui->excess10Result, arg);
}
void CalculationSecond::on_averageExceedances10_textEdited(const QString& arg)
{
    if (CheckEmptyLineEdit(ui->excess10Ch) || CheckEmptyLineEdit(ui->excess10K) || CheckEmptyLineEdit(ui->excess10Result)) {
        ui->averageExceedances10->setText("");
        return;
    }
    SetStyleLineEdit(ui->averageExceedances10);
    CheckTextEdit(ui->averageExceedances10, arg);
}
//-----------------------------------------------------------------------------
void CalculationSecond::on_excess10Ch_returnPressed()
{
    SetStyleLineEdit(ui->averageExceedances10);
    ui->averageExceedances10->setText("");
    ui->allAverageExceedances2->setText("");
    CheckCurrResult(ui->excess10Ch, ui->excess10Ch->text(), option_->GetExcess10Ch());
}
void CalculationSecond::on_excess10K_returnPressed()
{
    SetStyleLineEdit(ui->averageExceedances10);
    ui->averageExceedances10->setText("");
    ui->allAverageExceedances2->setText("");
    CheckCurrResult(ui->excess10K, ui->excess10K->text(), option_->GetExcess10K());
}
void CalculationSecond::on_excess10Result_returnPressed()
{
    SetStyleLineEdit(ui->averageExceedances10);
    ui->averageExceedances10->setText("");
    ui->allAverageExceedances2->setText("");
    CheckCurrResult(ui->excess10Result, ui->excess10Result->text(), option_->GetExcess10Result());
}
void CalculationSecond::on_averageExceedances10_returnPressed()
{
    CheckCurrResult(ui->averageExceedances10, ui->averageExceedances10->text(), option_->GetAverageExceedances10());
}
//-----------------------------------------------------------------------------
void CalculationSecond::on_allBack2_textEdited(const QString& arg)
{
    SetStyleLineEdit(ui->allBack2);
    CheckTextEdit(ui->allBack2, arg);
}
void CalculationSecond::on_allFront2_textEdited(const QString& arg)
{
    SetStyleLineEdit(ui->allFront2);
    CheckTextEdit(ui->allFront2, arg);
}
void CalculationSecond::on_allExcess2_textEdited(const QString& arg)
{
    if (CheckEmptyLineEdit(ui->excess6Ch) || CheckEmptyLineEdit(ui->excess6K)
        || CheckEmptyLineEdit(ui->excess7Ch) || CheckEmptyLineEdit(ui->excess7K)
        || CheckEmptyLineEdit(ui->excess8Ch) || CheckEmptyLineEdit(ui->excess8K)
        || CheckEmptyLineEdit(ui->excess9Ch) || CheckEmptyLineEdit(ui->excess9K)
        || CheckEmptyLineEdit(ui->excess10Ch) || CheckEmptyLineEdit(ui->excess10K)
        ) {
        ui->allExcess2->setText("");
        return;
    }
    SetStyleLineEdit(ui->allExcess2);
    CheckTextEdit(ui->allExcess2, arg);
}
void CalculationSecond::on_allAverageExceedances2_textEdited(const QString& arg)
{
    if (
        CheckEmptyLineEdit(ui->averageExceedances6)
        || CheckEmptyLineEdit(ui->averageExceedances7)
        || CheckEmptyLineEdit(ui->averageExceedances8)
        || CheckEmptyLineEdit(ui->averageExceedances9)
        || CheckEmptyLineEdit(ui->averageExceedances10)
        ) {
        ui->allAverageExceedances2->setText("");
        return;
    }
    SetStyleLineEdit(ui->allAverageExceedances2);
    CheckTextEdit(ui->allAverageExceedances2, arg);
}
void CalculationSecond::on_totalBackAndFront2_textEdited(const QString& arg)
{
    if (CheckEmptyLineEdit(ui->allBack2) || CheckEmptyLineEdit(ui->allFront2)) {
        ui->totalBackAndFront2->setText("");
        return;
    }
    SetStyleLineEdit(ui->totalBackAndFront2);
    CheckTextEdit(ui->totalBackAndFront2, arg);
}
void CalculationSecond::on_totalAllExcess2_textEdited(const QString& arg)
{
    if (CheckEmptyLineEdit(ui->allExcess2)) {
        ui->totalAllExcess2->setText("");
        return;
    }
    SetStyleLineEdit(ui->totalAllExcess2);
    CheckTextEdit(ui->totalAllExcess2, arg);
}
//-----------------------------------------------------------------------------
void CalculationSecond::on_allBack2_returnPressed()
{
    CheckCurrResult(ui->allBack2, ui->allBack2->text(), option_->GetAllBack2());
}
void CalculationSecond::on_allFront2_returnPressed()
{
    CheckCurrResult(ui->allFront2, ui->allFront2->text(), option_->GetAllFront2());
}
void CalculationSecond::on_allExcess2_returnPressed()
{
    CheckCurrResult(ui->allExcess2, ui->allExcess2->text(), option_->GetAllExcess2());
}
void CalculationSecond::on_allAverageExceedances2_returnPressed()
{
    CheckCurrResult(ui->allAverageExceedances2, ui->allAverageExceedances2->text(), option_->GetAllAverageExceedances2());
}
void CalculationSecond::on_totalBackAndFront2_returnPressed()
{
    CheckCurrResult(ui->totalBackAndFront2, ui->totalBackAndFront2->text(), option_->GetTotalBackAndFront2());
}
void CalculationSecond::on_totalAllExcess2_returnPressed()
{
    CheckCurrResult(ui->totalAllExcess2, ui->totalAllExcess2->text(), option_->GetTotalAllExcess2());
}
//-----------------------------------------------------------------------------
void CalculationSecond::on_totalAllBack2_textEdited(const QString &arg)
{
    if (CheckEmptyLineEdit(ui->allBack2)) {
        ui->totalAllBack2->setText("");
        return;
    }
    SetStyleLineEdit(ui->totalAllBack2);
    CheckTextEdit(ui->totalAllBack2, arg);
}
void CalculationSecond::on_totalAllFront2_textEdited(const QString &arg)
{
    if (CheckEmptyLineEdit(ui->allFront2)) {
        ui->totalAllFront2->setText("");
        return;
    }
    SetStyleLineEdit(ui->totalAllFront2);
    CheckTextEdit(ui->totalAllFront2, arg);
}
void CalculationSecond::on_allExcess1AndExcess2_textEdited(const QString &arg)
{
    if (CheckEmptyLineEdit(ui->allExcess2)) {
        ui->allExcess1AndExcess2->setText("");
        return;
    }
    SetStyleLineEdit(ui->allExcess1AndExcess2);
    CheckTextEdit(ui->allExcess1AndExcess2, arg);
}
void CalculationSecond::on_totalAllExcess1AndExcess2_textEdited(const QString &arg)
{
    if (CheckEmptyLineEdit(ui->allExcess1AndExcess2)) {
        ui->totalAllExcess1AndExcess2->setText("");
        return;
    }
    SetStyleLineEdit(ui->totalAllExcess1AndExcess2);
    CheckTextEdit(ui->totalAllExcess1AndExcess2, arg);
}
void CalculationSecond::on_totalAllAverageExceedances2_textEdited(const QString &arg)
{
    if (CheckEmptyLineEdit(ui->allAverageExceedances2)) {
        ui->totalAllAverageExceedances2->setText("");
        return;
    }
    SetStyleLineEdit(ui->totalAllAverageExceedances2);
    CheckTextEdit(ui->totalAllAverageExceedances2, arg);
}
//-----------------------------------------------------------------------------
void CalculationSecond::on_totalAllBack2_returnPressed()
{
    CheckCurrResult(ui->totalAllBack2, ui->totalAllBack2->text(), option_->GetTotalAllBack2());
}
void CalculationSecond::on_totalAllFront2_returnPressed()
{
    CheckCurrResult(ui->totalAllFront2, ui->totalAllFront2->text(), option_->GetTotalAllFront2());
}
void CalculationSecond::on_allExcess1AndExcess2_returnPressed()
{
    CheckCurrResult(ui->allExcess1AndExcess2, ui->allExcess1AndExcess2->text(), option_->GetAllExcess1AndExcess2());
}
void CalculationSecond::on_totalAllExcess1AndExcess2_returnPressed()
{
    CheckCurrResult(ui->totalAllExcess1AndExcess2, ui->totalAllExcess1AndExcess2->text(), option_->GetTotalAllExcess1AndExcess2());
}
void CalculationSecond::on_totalAllAverageExceedances2_returnPressed()
{
    CheckCurrResult(ui->totalAllAverageExceedances2, ui->totalAllAverageExceedances2->text(), option_->GetTotalAllAverageExceedances2());
}


