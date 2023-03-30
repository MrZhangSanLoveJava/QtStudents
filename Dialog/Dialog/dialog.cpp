#include "dialog.h"
#include "ui_dialog.h"
#include "QDebug"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(ui->pull, &QPushButton::clicked, [=]{
        QString temp;
        double r = ui->R->text().toInt();
//        qDebug() << r.toInt();
        double m = this->PI * r * r;
        ui->m->setText(temp.setNum(m));
    });
}

Dialog::~Dialog()
{
    delete ui;
}

