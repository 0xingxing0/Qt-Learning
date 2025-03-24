#include "function_widget.h"
#include "ui_function_widget.h"

function_widget::function_widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::function_widget)
{
    ui->setupUi(this);
}

function_widget::~function_widget()
{
    delete ui;
}
