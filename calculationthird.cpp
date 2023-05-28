#include "calculationthird.h"
#include "ui_calculationthird.h"
#include <QDate>
CalculationThird::CalculationThird(Option* option, QWidget *parent) :
    option_(option),
    QWidget(parent),
    ui(new Ui::CalculationThird)
{
    ui->setupUi(this);
    this->setWindowTitle("Третье окно");
    QWidget::setFixedWidth(725);
    QWidget::setFixedHeight(668);
    const QString date = QDateTime::currentDateTime().toString("dd.MM.yyyy");
    ui->label_65->setText(ui->label_65->text() + "<b>" + date + "</b>");
    ui->pushButton_2->setText(QString::fromUtf8("\u2190"));
    ui->label_55->setText("\u2211 hизм. = ");
    ui->label_56->setText("\u2211 hтеор. = ");
    ui->label_57->setText("fh = ");
    ui->label_58->setText("fhдоп.= ");
}
void CalculationThird::SetEmptyInformation() {
    ui->name->setText("");
    ui->surname->setText("");
    ui->group->setText("");
};
void CalculationThird::SetInformation(QString name, QString surname, QString group) {
    ui->name->setText("Имя: <b>" + name + "</b>");
    ui->surname->setText("Фамилия: <b>" + surname + "</b>");
    ui->group->setText("Группа: <b>" + group + "</b>");
};
void CalculationThird::SetEmptyField(QLineEdit* textEdit) {
    textEdit->setText("");
}

void CalculationThird::SetAllEmptyField() {
    SetEmptyField(ui->measExceed0);
    SetStyleLineEdit(ui->measExceed0);
    SetEmptyField(ui->measExceed1);
    SetStyleLineEdit(ui->measExceed1);
    SetEmptyField(ui->measExceed2);
    SetStyleLineEdit(ui->measExceed2);
    SetEmptyField(ui->measExceed3);
    SetStyleLineEdit(ui->measExceed3);
    SetEmptyField(ui->measExceed4);
    SetStyleLineEdit(ui->measExceed4);
    SetEmptyField(ui->measExceed5);
    SetStyleLineEdit(ui->measExceed5);
    SetEmptyField(ui->measExceed6);
    SetStyleLineEdit(ui->measExceed6);
    SetEmptyField(ui->amendment0);
    SetStyleLineEdit(ui->amendment0);
    SetEmptyField(ui->amendment1);
    SetStyleLineEdit(ui->amendment1);
    SetEmptyField(ui->amendment2);
    SetStyleLineEdit(ui->amendment2);
    SetEmptyField(ui->amendment3);
    SetStyleLineEdit(ui->amendment3);
    SetEmptyField(ui->amendment4);
    SetStyleLineEdit(ui->amendment4);
    SetEmptyField(ui->amendment5);
    SetStyleLineEdit(ui->amendment5);
    SetEmptyField(ui->amendment6);
    SetStyleLineEdit(ui->amendment6);
    SetEmptyField(ui->equalExceed0);
    SetStyleLineEdit(ui->equalExceed0);
    SetEmptyField(ui->equalExceed1);
    SetStyleLineEdit(ui->equalExceed1);
    SetEmptyField(ui->equalExceed2);
    SetStyleLineEdit(ui->equalExceed2);
    SetEmptyField(ui->equalExceed3);
    SetStyleLineEdit(ui->equalExceed3);
    SetEmptyField(ui->equalExceed4);
    SetStyleLineEdit(ui->equalExceed4);
    SetEmptyField(ui->equalExceed5);
    SetStyleLineEdit(ui->equalExceed5);
    SetEmptyField(ui->equalExceed6);
    SetStyleLineEdit(ui->equalExceed6);
    SetEmptyField(ui->pointMarker1);
    SetStyleLineEdit(ui->pointMarker1);
    SetEmptyField(ui->pointMarker2);
    SetStyleLineEdit(ui->pointMarker2);
    SetEmptyField(ui->pointMarker3);
    SetStyleLineEdit(ui->pointMarker3);
    SetEmptyField(ui->pointMarker4);
    SetStyleLineEdit(ui->pointMarker4);
    SetEmptyField(ui->pointMarker5);
    SetStyleLineEdit(ui->pointMarker5);
    SetEmptyField(ui->pointMarker6);
    SetStyleLineEdit(ui->pointMarker6);
    SetEmptyField(ui->total1);
    SetStyleLineEdit(ui->total1);
    SetEmptyField(ui->total2);
    SetStyleLineEdit(ui->total2);
    SetEmptyField(ui->total3);
    SetStyleLineEdit(ui->total3);
    SetEmptyField(ui->total4);
    SetStyleLineEdit(ui->total4);
}

void CalculationThird::SetOption(int option) {
    ui->option->setText("Вариант: <b>" + QString().number(option) + "</b>");
};
CalculationThird::~CalculationThird()
{
    delete ui;
}

void CalculationThird::on_pushButton_2_clicked()
{
    this->close();
    emit ShowCalculationSecond();
}


void CalculationThird::SetValPointMarker0() {
    ui->pointMarker0->setText(QString().number(option_->GetPointMarker0(), 'f', 4));
}
void CalculationThird::SetValPointMarker7() {
    ui->pointMarker7->setText(QString().number(option_->GetPointMarker7(), 'f', 4));
};

void CalculationThird::CheckTextEdit(QLineEdit* lineEdit, const QString &arg) {
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

void CalculationThird::CheckCurrResult(QLineEdit* textEdit, QString result, double currResult) {
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
void CalculationThird::CheckCurrResultTotal(QLineEdit* textEdit, QString result, double currResult) {
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
    } else if (abs(currResult - res) < 0.00001) {
        textEdit->setStyleSheet("QLineEdit{background-color:green; color:white; border: 1px solid black}");
    } else if (abs(currResult - res) < std::numeric_limits<double>::epsilon()) {
        textEdit->setStyleSheet("QLineEdit{background-color:green; color:white; border: 1px solid black}");
    } else if (qAbs(res - currResult) <= 0.000000000001 * qMin(qAbs(res), qAbs(currResult))) {
        textEdit->setStyleSheet("QLineEdit{background-color:green; color:white; border: 1px solid black}");
    } else {
        textEdit->setStyleSheet("QLineEdit{background-color:red; color:white; border: 1px solid black}");
    }
}
void CalculationThird::SetStyleLineEdit(QLineEdit* textEdit) {
    textEdit->setStyleSheet("QLineEdit{background-color:white; color:black; border: 1px solid black}");
}
bool CalculationThird::CheckEmptyLineEdit(QLineEdit* textEdit) {
    QString text = textEdit->text();
    return text.size() == 0 || text.size() == 1 && text[0] == '-';
}

//------------------------------------------------------------------------
void CalculationThird::on_measExceed0_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->measExceed0);
    CheckTextEdit(ui->measExceed0, arg);
}
void CalculationThird::on_measExceed1_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->measExceed1);
    CheckTextEdit(ui->measExceed1, arg);
}
void CalculationThird::on_measExceed2_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->measExceed2);
    CheckTextEdit(ui->measExceed2, arg);
}
void CalculationThird::on_measExceed3_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->measExceed3);
    CheckTextEdit(ui->measExceed3, arg);
}
void CalculationThird::on_measExceed4_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->measExceed4);
    CheckTextEdit(ui->measExceed4, arg);
}
void CalculationThird::on_measExceed5_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->measExceed5);
    CheckTextEdit(ui->measExceed5, arg);
}
void CalculationThird::on_measExceed6_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->measExceed6);
    CheckTextEdit(ui->measExceed6, arg);
}
//------------------------------------------------------------------------

void CalculationThird::on_measExceed0_returnPressed()
{
    CheckCurrResult(ui->measExceed0, ui->measExceed0->text(), option_->GetMeasExceed0());
}


void CalculationThird::on_measExceed1_returnPressed()
{
    CheckCurrResult(ui->measExceed1, ui->measExceed1->text(), option_->GetMeasExceed1());
}


void CalculationThird::on_measExceed2_returnPressed()
{
    CheckCurrResult(ui->measExceed2, ui->measExceed2->text(), option_->GetMeasExceed2());
}


void CalculationThird::on_measExceed3_returnPressed()
{
    CheckCurrResult(ui->measExceed3, ui->measExceed3->text(), option_->GetMeasExceed3());
}


void CalculationThird::on_measExceed4_returnPressed()
{
    CheckCurrResult(ui->measExceed4, ui->measExceed4->text(), option_->GetMeasExceed4());
}


void CalculationThird::on_measExceed5_returnPressed()
{
    CheckCurrResult(ui->measExceed5, ui->measExceed5->text(), option_->GetMeasExceed5());
}


void CalculationThird::on_measExceed6_returnPressed()
{
    CheckCurrResult(ui->measExceed6, ui->measExceed6->text(), option_->GetMeasExceed6());
}
//------------------------------------------------------------------------
void CalculationThird::on_total1_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->total1);
    CheckTextEdit(ui->total1, arg);
}
void CalculationThird::on_total2_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->total2);
    CheckTextEdit(ui->total2, arg);
}
void CalculationThird::on_total3_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->total3);
    CheckTextEdit(ui->total3, arg);
}
void CalculationThird::on_total4_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->total4);
    CheckTextEdit(ui->total4, arg);
}
//------------------------------------------------------------------------

void CalculationThird::on_total1_returnPressed()
{
    CheckCurrResultTotal(ui->total1, ui->total1->text(), option_->GetTotal1());
}
void CalculationThird::on_total2_returnPressed()
{
    CheckCurrResultTotal(ui->total2, ui->total2->text(), option_->GetTotal2());
}
void CalculationThird::on_total3_returnPressed()
{
    CheckCurrResultTotal(ui->total3, ui->total3->text(), option_->GetTotal3());
}
void CalculationThird::on_total4_returnPressed()
{
    CheckCurrResultTotal(ui->total4, ui->total4->text(), option_->GetTotal4());
}
//------------------------------------------------------------------------
void CalculationThird::on_amendment0_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->amendment0);
    CheckTextEdit(ui->amendment0, arg);
}
void CalculationThird::on_amendment1_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->amendment1);
    CheckTextEdit(ui->amendment1, arg);
}
void CalculationThird::on_amendment2_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->amendment2);
    CheckTextEdit(ui->amendment2, arg);
}
void CalculationThird::on_amendment3_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->amendment3);
    CheckTextEdit(ui->amendment3, arg);
}
void CalculationThird::on_amendment4_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->amendment4);
    CheckTextEdit(ui->amendment4, arg);
}
void CalculationThird::on_amendment5_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->amendment5);
    CheckTextEdit(ui->amendment5, arg);
}
void CalculationThird::on_amendment6_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->amendment6);
    CheckTextEdit(ui->amendment6, arg);
}
//------------------------------------------------------------------------
void CalculationThird::on_amendment0_returnPressed()
{
    CheckCurrResult(ui->amendment0, ui->amendment0->text(), option_->GetAmendment0());
}
void CalculationThird::on_amendment1_returnPressed()
{
    CheckCurrResult(ui->amendment1, ui->amendment1->text(), option_->GetAmendment1());
}
void CalculationThird::on_amendment2_returnPressed()
{
    CheckCurrResult(ui->amendment2, ui->amendment2->text(), option_->GetAmendment2());
}
void CalculationThird::on_amendment3_returnPressed()
{
    CheckCurrResult(ui->amendment3, ui->amendment3->text(), option_->GetAmendment3());
}
void CalculationThird::on_amendment4_returnPressed()
{
    CheckCurrResult(ui->amendment4, ui->amendment4->text(), option_->GetAmendment4());
}
void CalculationThird::on_amendment5_returnPressed()
{
    CheckCurrResult(ui->amendment5, ui->amendment5->text(), option_->GetAmendment5());
}
void CalculationThird::on_amendment6_returnPressed()
{
    CheckCurrResult(ui->amendment6, ui->amendment6->text(), option_->GetAmendment6());
}
//------------------------------------------------------------------------

void CalculationThird::on_equalExceed0_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->equalExceed0);
    CheckTextEdit(ui->equalExceed0, arg);
}
void CalculationThird::on_equalExceed1_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->equalExceed1);
    CheckTextEdit(ui->equalExceed1, arg);
}
void CalculationThird::on_equalExceed2_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->equalExceed2);
    CheckTextEdit(ui->equalExceed2, arg);
}
void CalculationThird::on_equalExceed3_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->equalExceed3);
    CheckTextEdit(ui->equalExceed3, arg);
}
void CalculationThird::on_equalExceed4_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->equalExceed4);
    CheckTextEdit(ui->equalExceed4, arg);
}
void CalculationThird::on_equalExceed5_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->equalExceed5);
    CheckTextEdit(ui->equalExceed5, arg);
}
void CalculationThird::on_equalExceed6_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->equalExceed6);
    CheckTextEdit(ui->equalExceed6, arg);
}
//------------------------------------------------------------------------
void CalculationThird::on_equalExceed0_returnPressed()
{
    CheckCurrResult(ui->equalExceed0, ui->equalExceed0->text(), option_->GetEqualExceed0());
}
void CalculationThird::on_equalExceed1_returnPressed()
{
    CheckCurrResult(ui->equalExceed1, ui->equalExceed1->text(), option_->GetEqualExceed1());
}
void CalculationThird::on_equalExceed2_returnPressed()
{
    CheckCurrResult(ui->equalExceed2, ui->equalExceed2->text(), option_->GetEqualExceed2());
}
void CalculationThird::on_equalExceed3_returnPressed()
{
    CheckCurrResult(ui->equalExceed3, ui->equalExceed3->text(), option_->GetEqualExceed3());
}
void CalculationThird::on_equalExceed4_returnPressed()
{
    CheckCurrResult(ui->equalExceed4, ui->equalExceed4->text(), option_->GetEqualExceed4());
}
void CalculationThird::on_equalExceed5_returnPressed()
{
    CheckCurrResult(ui->equalExceed5, ui->equalExceed5->text(), option_->GetEqualExceed5());
}
void CalculationThird::on_equalExceed6_returnPressed()
{
    CheckCurrResult(ui->equalExceed6, ui->equalExceed6->text(), option_->GetEqualExceed6());
}
//------------------------------------------------------------------------
void CalculationThird::on_pointMarker1_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->pointMarker1);
    CheckTextEdit(ui->pointMarker1, arg);
}
void CalculationThird::on_pointMarker2_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->pointMarker2);
    CheckTextEdit(ui->pointMarker2, arg);
}
void CalculationThird::on_pointMarker3_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->pointMarker3);
    CheckTextEdit(ui->pointMarker3, arg);
}
void CalculationThird::on_pointMarker4_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->pointMarker4);
    CheckTextEdit(ui->pointMarker4, arg);
}
void CalculationThird::on_pointMarker5_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->pointMarker5);
    CheckTextEdit(ui->pointMarker5, arg);
}
void CalculationThird::on_pointMarker6_textEdited(const QString &arg)
{
    SetStyleLineEdit(ui->pointMarker6);
    CheckTextEdit(ui->pointMarker6, arg);
}
//------------------------------------------------------------------------
void CalculationThird::on_pointMarker1_returnPressed()
{
    CheckCurrResult(ui->pointMarker1, ui->pointMarker1->text(), option_->GetPointMarker1());
}
void CalculationThird::on_pointMarker2_returnPressed()
{
    CheckCurrResult(ui->pointMarker2, ui->pointMarker2->text(), option_->GetPointMarker2());
}
void CalculationThird::on_pointMarker3_returnPressed()
{
    CheckCurrResult(ui->pointMarker3, ui->pointMarker3->text(), option_->GetPointMarker3());
}
void CalculationThird::on_pointMarker4_returnPressed()
{
    CheckCurrResult(ui->pointMarker4, ui->pointMarker4->text(), option_->GetPointMarker4());
}
void CalculationThird::on_pointMarker5_returnPressed()
{
    CheckCurrResult(ui->pointMarker5, ui->pointMarker5->text(), option_->GetPointMarker5());
}
void CalculationThird::on_pointMarker6_returnPressed()
{
    CheckCurrResult(ui->pointMarker6, ui->pointMarker6->text(), option_->GetPointMarker6());
}

