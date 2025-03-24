/********************************************************************************
** Form generated from reading UI file 'function_widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNCTION_WIDGET_H
#define UI_FUNCTION_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_function_widget
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *function_widget)
    {
        if (function_widget->objectName().isEmpty())
            function_widget->setObjectName("function_widget");
        function_widget->resize(400, 300);
        pushButton = new QPushButton(function_widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(100, 90, 111, 51));

        retranslateUi(function_widget);

        QMetaObject::connectSlotsByName(function_widget);
    } // setupUi

    void retranslateUi(QWidget *function_widget)
    {
        function_widget->setWindowTitle(QCoreApplication::translate("function_widget", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("function_widget", "\344\270\273\347\225\214\351\235\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class function_widget: public Ui_function_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNCTION_WIDGET_H
