#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class mainWidget;
}
QT_END_NAMESPACE

class mainWidget : public QWidget
{
    Q_OBJECT

public:
    mainWidget(QWidget *parent = nullptr);
    ~mainWidget();

private slots:
    void on_pushButton_login_clicked();

private:
    Ui::mainWidget *ui;
};
#endif // LOGIN_H
