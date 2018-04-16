#pragma once
#include <QObject>
#include <QString>
#include <QDialog>
#include <QApplication>
#include <QFile>
#include <QDebug>
#include <QJsonArray>
#include <QPainter>
#include <QTimer>
#include <table.h>
#include <stage1ball.h>
#include <ball.h>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog(){delete ui;}

    void addTable(table::table* table);
    void addBalls( std::vector<ball*> balls);
    void resizeWindow();

public slots:
    void nextFrame();
protected:
    void paintEvent(QPaintEvent *event);

private:
    Ui::Dialog *ui;
    table *tab;
    std::vector<ball::ball*> balls;
    int counter;
};


