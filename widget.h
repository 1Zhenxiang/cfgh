#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void timerUpdate(void);
    void timerUpdate2(void);
    void on_pushButton_clicked(void);

    void on_label_linkActivated(const QString &link);

private:
    Ui::Widget *ui;
    int count = 0 ;
};
#endif // WIDGET_H
