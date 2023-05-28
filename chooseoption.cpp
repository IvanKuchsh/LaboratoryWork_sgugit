#include "chooseoption.h"
#include "ui_chooseoption.h"

ChooseOption::ChooseOption(Option* option, QWidget *parent) :
    option_(option),
    QWidget(parent),
    ui(new Ui::ChooseOption)
{
    ui->setupUi(this);
    this->setWindowTitle("Выбор варианта");
    QWidget::setFixedWidth(400);
    QWidget::setFixedHeight(225);
    mainWin_ = new MainWindow(option_, nullptr);
    connect(mainWin_, &MainWindow::ShowChooseOpt, this, &ChooseOption::ShowChooseOpt);

}

ChooseOption::~ChooseOption()
{
    delete ui;
}

void ChooseOption::on_lineEdit_textEdited(const QString &arg1)
{
    QString text = arg1;
    if (text.size() != 0 && (text[text.size() - 1] < '0' || text[text.size() - 1] > '9' || text.size() > 3)) {
        text.resize(text.size() - 1);
        ui->lineEdit->setText(text);
    };
}

void ChooseOption::Information(QString name, QString surname, QString group) {
    name_ = name;
    surname_ = surname;
    group_ = group;
}


void ChooseOption::InitField() {

    option_->CalcBack1Ch();
    option_->CalcFront1Ch();
    mainWin_->SetValBack1Ch(option_->GetBack1Ch());
    mainWin_->SetValFront1Ch(option_->GetFront1Ch());
    option_->CalcBack1K();
    option_->CalcFront1K();
    option_->CalcBack1Result();
    option_->CalcFront1Result();
    option_->CalcExcess1Ch();
    option_->CalcExcess1K();
    option_->CalcExcess1Result();
    option_->CalcAverageExceedances1();
    mainWin_->SetValBack1K(option_->GetBack1K());
    mainWin_->SetValFront1K(option_->GetFront1K());
    option_->CalcBack2Ch();
    option_->CalcFront2Ch();
    mainWin_->SetValBack2Ch(option_->GetBack2Ch());
    mainWin_->SetValFront2Ch(option_->GetFront2Ch());
    option_->CalcBack2K();
    option_->CalcFront2K();
    option_->CalcBack2Result();
    option_->CalcFront2Result();
    option_->CalcExcess2Ch();
    option_->CalcExcess2K();
    option_->CalcExcess2Result();
    option_->CalcAverageExceedances2();
    mainWin_->SetValBack2K(option_->GetBack2K());
    mainWin_->SetValFront2K(option_->GetFront2K());
    option_->CalcBack3Ch();
    option_->CalcFront3Ch();
    mainWin_->SetValBack3Ch(option_->GetBack3Ch());
    mainWin_->SetValFront3Ch(option_->GetFront3Ch());
    option_->CalcBack3K();
    option_->CalcFront3K();
    option_->CalcBack3Result();
    option_->CalcFront3Result();
    option_->CalcExcess3Ch();
    option_->CalcExcess3K();
    option_->CalcExcess3Result();
    option_->CalcAverageExceedances3();
    mainWin_->SetValBack3K(option_->GetBack3K());
    mainWin_->SetValFront3K(option_->GetFront3K());
    option_->CalcBack4Ch();
    option_->CalcFront4Ch();
    mainWin_->SetValBack4Ch(option_->GetBack4Ch());
    mainWin_->SetValFront4Ch(option_->GetFront4Ch());
    option_->CalcBack4K();
    option_->CalcFront4K();
    option_->CalcBack4Result();
    option_->CalcFront4Result();
    option_->CalcExcess4Ch();
    option_->CalcExcess4K();
    option_->CalcExcess4Result();
    option_->CalcAverageExceedances4();
    mainWin_->SetValBack4K(option_->GetBack4K());
    mainWin_->SetValFront4K(option_->GetFront4K());
    option_->CalcBack5Ch();
    option_->CalcFront5Ch();
    mainWin_->SetValBack5Ch(option_->GetBack5Ch());
    mainWin_->SetValFront5Ch(option_->GetFront5Ch());
    option_->CalcBack5K();
    option_->CalcFront5K();
    option_->CalcBack5Result();
    option_->CalcFront5Result();
    option_->CalcExcess5Ch();
    option_->CalcExcess5K();
    option_->CalcExcess5Result();
    option_->CalcAverageExceedances5();
    mainWin_->SetValBack5K(option_->GetBack5K());
    mainWin_->SetValFront5K(option_->GetFront5K());
    option_->CalcAllBack1();
    option_->CalcAllFront1();
    option_->CalcAllExcess1();
    option_->CalcAllAverageExceedances1();
    option_->CalcTotalBackAndFront1();
    option_->CalcTotalAllExcess1();
}

void ChooseOption::ChooseOpt() {
    double opt = ui->lineEdit->text().toDouble();
    if (opt >= 30 && opt <= 650) {
        option_->ChooseOption(opt);
        this->close();
        if (prevOpt_ != option_->GetOption()) {
            prevOpt_ = option_->GetOption();
            mainWin_->SetAllEmptyField();
            mainWin_->SetOption(opt);
        }
        mainWin_->show();
        InitField();
        mainWin_->InitField();
        mainWin_->SetEmptyInformation();
        mainWin_->SetInformation(name_, surname_, group_);
    }
}

void ChooseOption::on_pushButton_clicked()
{
    ChooseOpt();
}


void ChooseOption::on_lineEdit_returnPressed()
{
    ChooseOpt();
}

void ChooseOption::ShowChooseOpt() {
    this->show();
}

