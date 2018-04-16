
#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    :QDialog(parent),ui(new Ui::Dialog)
{
        ui->setupUi(this);
        QTimer *timer = new QTimer(this);
        connect(timer, SIGNAL(timeout()), this, SLOT(nextFrame()));
        timer->start(10000);

//        this->update();

}

void Dialog::addTable(table *table)
{
    this->tab = table;
}

void Dialog::addBalls(std::vector<ball*> balls)
{
    this->balls= balls;
}

void Dialog::resizeWindow(){
    this->setMinimumSize((int)this->tab->getXsize()*1.1, (int) this->tab->getYsize()*1.1);
}


void Dialog::paintEvent(QPaintEvent *event)
{

    bool animation = true;
    if (animation) {

        QPainter painter(this);
        QPen pen;
        pen.setWidth(3);
        pen.setColor(QColor(tab->getColour().c_str()));
        QBrush brush(QColor(tab->getColour().c_str()));

        painter.setBrush(brush);

        painter.drawRect(0,0,tab->getXsize(),tab->getYsize());

        std::vector<ball*>::iterator it;
        for(it = balls.begin(); it != balls.end(); ++it)
        {
            (*it)->render(painter, 1);
        }

          counter++;
    }
}

void Dialog::nextFrame()
{
    update();
}


