#include "information.h"
#include "ui_information.h"

Information::Information(Option* option, QWidget *parent) :
    option_(option),
    QWidget(parent),
    ui(new Ui::Information)
{
    ui->setupUi(this);
    this->setWindowTitle("Ввод данных");
    QWidget::setFixedWidth(400);
    QWidget::setFixedHeight(225);
    chooseOpt_ = new ChooseOption(option_);

    ui->name->installEventFilter(this);
    ui->surname->installEventFilter(this);
    ui->group->installEventFilter(this);
}

Information::~Information()
{
    delete ui;
}
void Information::CheckTextEdit(QLineEdit* lineEdit, const QString &arg) {
    QString text = arg;
    if (text.size() > 20) {
        text.resize(text.size() - 1);
        lineEdit->setText(text);
        return;
    }
    if (text.size() != 0 && !text[text.size() - 1].isLetter()) {
        text.resize(text.size() - 1);
        lineEdit->setText(text);
        return;
    }
}
void Information::on_surname_textEdited(const QString &arg)
{
    CheckTextEdit(ui->surname, arg);
}
void Information::on_name_textEdited(const QString &arg)
{
    CheckTextEdit(ui->name, arg);
}
void Information::on_group_textEdited(const QString &arg)
{
    QString text = arg;
    if (text.size() > 14) {
        text.resize(text.size() - 1);
        ui->group->setText(text);
        return;
    }
}
void Information::NextWindow() {
    if (ui->name->text().size() == 0 || ui->surname->text().size() == 0 || ui->group->text().size() == 0) {
        return;
    }
    this->close();
    chooseOpt_->show();
    chooseOpt_->Information(ui->name->text(), ui->surname->text(), ui->group->text().toUpper());
}
void Information::on_next_clicked()
{
    NextWindow();
}
void Information::on_group_returnPressed()
{
    NextWindow();
}

