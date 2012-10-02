#include "artemidas.h"
#include "ui_artemidas.h"

Artemidas::Artemidas(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Artemidas)
{
    ui->setupUi(this);
}

Artemidas::~Artemidas()
{
    delete ui;
}

void Artemidas::ButtonClickedHandler()
{
    ui->label->setText(ui->lineEdit->text());
}
