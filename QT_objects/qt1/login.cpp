#include "login.h"
#include "ui_login.h"


mainWidget::mainWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::mainWidget)
{
    ui->setupUi(this);
}

mainWidget::~mainWidget()
{
    delete ui;
}
