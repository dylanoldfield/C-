#pragma once
#include "dialog.h"
#include "factory.h"
#include "ball.h"
#include "table.h"
#include <QJsonDocument>
#include <QJsonValue>
#include <QJsonArray>
#include <QJsonObject>

class stage1Factory: public factory{
public:
    stage1Factory(QJsonObject table_info, QJsonArray ball_info)
        :table_info(table_info), ball_info(ball_info){}

    virtual ~stage1Factory(){}

    table* createTable();
    std::vector<ball*> createBalls();

private:
QJsonArray ball_info;
QJsonObject table_info;
};
