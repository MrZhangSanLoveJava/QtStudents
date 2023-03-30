/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QLineEdit *R;
    QLabel *label_2;
    QLabel *m;
    QPushButton *pull;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(530, 246);
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 90, 72, 15));
        R = new QLineEdit(Dialog);
        R->setObjectName(QString::fromUtf8("R"));
        R->setGeometry(QRect(120, 90, 113, 21));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(260, 90, 72, 15));
        m = new QLabel(Dialog);
        m->setObjectName(QString::fromUtf8("m"));
        m->setGeometry(QRect(320, 90, 101, 21));
        m->setFrameShape(QFrame::Panel);
        m->setFrameShadow(QFrame::Sunken);
        pull = new QPushButton(Dialog);
        pull->setObjectName(QString::fromUtf8("pull"));
        pull->setGeometry(QRect(320, 150, 93, 28));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QApplication::translate("Dialog", "\345\215\212\345\276\204\357\274\232", nullptr));
        label_2->setText(QApplication::translate("Dialog", "\351\235\242\347\247\257\357\274\232", nullptr));
        m->setText(QString());
        pull->setText(QApplication::translate("Dialog", "\350\256\241\347\256\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
