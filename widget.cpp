#include "widget.h"
#include "ui_widget.h"
#include "qtimer.h"
#include "qdatetime.h"


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    timerUpdate();
    QTimer*timer = new QTimer(this);

    connect(timer,SIGNAL(timeout()),this,SLOT(timerUpdate()));

    timer->start(1000);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::timerUpdate(void)
{
    QDateTime time = QDateTime::currentDateTime();
    QString str = time.toString("hh.mm.ss");
    count += 1;
    ui->label->setText(str);
}

void Widget::timerUpdate2(void)
{
    QString display;
    int a,b,c;
    //bool ok;
    a=count/3600;
    b=(count-3600*a)/60;
    c=count-3600*a-60*b;
    display=QString("%1:%2:%3").arg(a).arg(b).arg(c);
    ui->label_2->setText(display);

}


void Widget::on_pushButton_clicked()
{
    QTimer *timer2 = new QTimer(this);
    connect(timer2,SIGNAL(timeout()),this,SLOT(timerUpdate2()));
    timer2->start(1000);
}

