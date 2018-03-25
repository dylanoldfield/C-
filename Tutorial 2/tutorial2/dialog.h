#pragma once
#include <QDialog>
#include <QPainter>
#include "ball.h"
#include <QTimer>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

public slots:
    void nextFrame();

private:
    Ui::Dialog *ui;
    Ball m_ball;
    int m_counter;

protected:
    void paintEvent(QPaintEvent *event);


};

