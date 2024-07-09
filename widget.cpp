#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_3_clicked()
{
    QString number;
    if(!flag){
    number = ui->lineEdit->text();
    ui->lineEdit->setText(number+"1");
    }
    else{
        number.clear();
        ui->lineEdit->setText(number+"1");
        flag = false;
    }
}


void Widget::on_pushButton_2_clicked()
{
    QString number;
    if(!flag){
        number = ui->lineEdit->text();
        ui->lineEdit->setText(number+"2");
    }
    else{
        number.clear();
        ui->lineEdit->setText(number+"2");
        flag = false;
    }
}


void Widget::on_pushButton_clicked()
{
    QString number;
    if(!flag){
        number = ui->lineEdit->text();
        ui->lineEdit->setText(number+"3");
    }
    else{
        number.clear();
        ui->lineEdit->setText(number+"3");
        flag = false;
    }
}


void Widget::on_pushButton_4_clicked()
{
    QString number;
    if(!flag){
        number = ui->lineEdit->text();
        ui->lineEdit->setText(number+"4");
    }
    else{
        number.clear();
        ui->lineEdit->setText(number+"4");
        flag = false;
    }
}


void Widget::on_pushButton_5_clicked()
{
    QString number;
    if(!flag){
        number = ui->lineEdit->text();
        ui->lineEdit->setText(number+"5");
    }
    else{
        number.clear();
        ui->lineEdit->setText(number+"5");
        flag = false;
    }
}


void Widget::on_pushButton_6_clicked()
{
    QString number;
    if(!flag){
        number = ui->lineEdit->text();
        ui->lineEdit->setText(number+"6");
    }
    else{
        number.clear();
        ui->lineEdit->setText(number+"6");
        flag = false;
    }
}


void Widget::on_pushButton_7_clicked()
{
    QString number;
    if(!flag){
        number = ui->lineEdit->text();
        ui->lineEdit->setText(number+"7");
    }
    else{
        number.clear();
        ui->lineEdit->setText(number+"7");
        flag = false;
    }
}


void Widget::on_pushButton_8_clicked()
{
    QString number;
    if(!flag){
        number = ui->lineEdit->text();
        ui->lineEdit->setText(number+"8");
    }
    else{
        number.clear();
        ui->lineEdit->setText(number+"8");
        flag = false;
    }
}


void Widget::on_pushButton_9_clicked()
{
    QString number;
    if(!flag){
        number = ui->lineEdit->text();
        ui->lineEdit->setText(number+"9");
    }
    else{
        number.clear();
        ui->lineEdit->setText(number+"9");
        flag = false;
    }
}


void Widget::on_pushButton_10_clicked()
{
    QString number;
    if(!flag){
        number = ui->lineEdit->text();
        ui->lineEdit->setText(number+"0");
    }
    else{
        number.clear();
        ui->lineEdit->setText(number+"0");
        flag = false;
    }
}


void Widget::on_pushButton_11_clicked()
{
    QString number;
    number = ui->lineEdit->text();
    number.clear();
    ui->lineEdit->setText(number);
}


void Widget::on_pushButton_12_clicked()
{
    QString number;
    number = ui->lineEdit->text();
    number.chop(1);
    ui->lineEdit->setText(number);
}


void Widget::on_pushButton_13_clicked()
{
    x = ui->lineEdit->text();
    flag = true;
    i = 1;
}


void Widget::on_pushButton_14_clicked()
{
    x = ui->lineEdit->text();
    flag = true;
    i = 2;
}


void Widget::on_pushButton_15_clicked()
{
    x = ui->lineEdit->text();
    flag = true;
    i = 3;
}


void Widget::on_pushButton_16_clicked()
{
    x = ui->lineEdit->text();
    flag = true;
    i = 4;
}


void Widget::on_pushButton_17_clicked()
{
    float a,b,c;
    bool ok;
    QString number;
    y = ui->lineEdit->text();
    a = x.toInt(&ok);
    b = y.toInt(&ok);
    if(i==1){
        c = a+b;
    }
    else if(i==2){
        c = a-b;
    }
    else if(i==3){
        c = a*b;
    }
    else if(i==4){
        c = a/b;
    }
    ui->lineEdit->setText(number.setNum(c));
}



