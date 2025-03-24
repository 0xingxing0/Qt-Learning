#include "login.h"
#include "ui_login.h"
#include "iostream"
#include "function_widget.h"
#include "QDebug"
#include <windows.h>
using namespace std;


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

void mainWidget::on_pushButton_login_clicked()
{

    std::string login_name = ui->login_name->text().toStdString();
    std::string login_password = ui->login_password->text().toStdString();

    cout << "Login name: " << login_name << endl;
    cout << "Login password: " << login_password << endl;

    if (login_name == "admin" && login_password == "admin")
    {
        // 在堆上创建 function_widget
        function_widget *w = new function_widget();
        w->show();  // 显示主界面
        // 关闭当前（登录）窗口
        this->close();
    }
    else
    {
        qDebug() << "账号或密码错误，请重新输入";
    }
}

