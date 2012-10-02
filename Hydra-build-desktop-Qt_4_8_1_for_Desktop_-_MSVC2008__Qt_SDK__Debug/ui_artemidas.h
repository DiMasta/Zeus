/********************************************************************************
** Form generated from reading UI file 'artemidas.ui'
**
** Created: Wed Oct 3 00:38:58 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARTEMIDAS_H
#define UI_ARTEMIDAS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Artemidas
{
public:
    QWidget *centralWidget;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QMainWindow *Artemidas)
    {
        if (Artemidas->objectName().isEmpty())
            Artemidas->setObjectName(QString::fromUtf8("Artemidas"));
        Artemidas->resize(400, 300);
        centralWidget = new QWidget(Artemidas);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(90, 120, 113, 20));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 50, 46, 13));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(90, 190, 75, 23));
        Artemidas->setCentralWidget(centralWidget);

        retranslateUi(Artemidas);
        QObject::connect(pushButton, SIGNAL(clicked()), Artemidas, SLOT(ButtonClickedHandler()));

        QMetaObject::connectSlotsByName(Artemidas);
    } // setupUi

    void retranslateUi(QMainWindow *Artemidas)
    {
        Artemidas->setWindowTitle(QApplication::translate("Artemidas", "Artemidas", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Artemidas", "TextLabel", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Artemidas", "PushButton", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Artemidas: public Ui_Artemidas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARTEMIDAS_H
