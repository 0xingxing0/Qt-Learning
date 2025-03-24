/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QPushButton *pushButton_login;
    QPushButton *pushButton_4;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *login_name;
    QLineEdit *login_password;

    void setupUi(QWidget *mainWidget)
    {
        if (mainWidget->objectName().isEmpty())
            mainWidget->setObjectName("mainWidget");
        mainWidget->resize(346, 280);
        horizontalLayout = new QHBoxLayout(mainWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        widget = new QWidget(mainWidget);
        widget->setObjectName("widget");
        pushButton_login = new QPushButton(widget);
        pushButton_login->setObjectName("pushButton_login");
        pushButton_login->setGeometry(QRect(70, 170, 56, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font.setPointSize(12);
        pushButton_login->setFont(font);
        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(170, 170, 56, 21));
        pushButton_4->setFont(font);
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 50, 61, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font1.setPointSize(22);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(70, 97, 56, 21));
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(70, 130, 61, 21));
        pushButton_2->setFont(font);
        login_name = new QLineEdit(widget);
        login_name->setObjectName("login_name");
        login_name->setGeometry(QRect(160, 100, 109, 19));
        login_password = new QLineEdit(widget);
        login_password->setObjectName("login_password");
        login_password->setGeometry(QRect(160, 130, 109, 19));

        horizontalLayout->addWidget(widget);


        retranslateUi(mainWidget);

        QMetaObject::connectSlotsByName(mainWidget);
    } // setupUi

    void retranslateUi(QWidget *mainWidget)
    {
        mainWidget->setWindowTitle(QCoreApplication::translate("mainWidget", "mainWidget", nullptr));
        pushButton_login->setText(QCoreApplication::translate("mainWidget", "\347\241\256\350\256\244", nullptr));
        pushButton_4->setText(QCoreApplication::translate("mainWidget", "\345\217\226\346\266\210", nullptr));
        label->setText(QCoreApplication::translate("mainWidget", "\347\231\273\345\275\225", nullptr));
        pushButton->setText(QCoreApplication::translate("mainWidget", "\350\264\246\345\217\267\357\274\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("mainWidget", "\345\257\206\347\240\201\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainWidget: public Ui_mainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
