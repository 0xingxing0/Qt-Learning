#ifndef FUNCTION_WIDGET_H
#define FUNCTION_WIDGET_H

#include <QWidget>

namespace Ui {
class function_widget;
}

class function_widget : public QWidget
{
    Q_OBJECT

public:
    explicit function_widget(QWidget *parent = nullptr);
    ~function_widget();

private:
    Ui::function_widget *ui;
};

#endif // FUNCTION_WIDGET_H
