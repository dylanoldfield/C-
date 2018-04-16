#include "dialog.h"
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include "ball.h"
#include "balldirector.h"
#include "stage1ballbuilder.h"
#include "stage1Factory.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFile config("config.json");

if(!config.open(QIODevice::ReadOnly | QIODevice::Text)){
    qDebug()<<"could not open config.json";
    exit(1);
}

QByteArray byte = config.readAll();
QJsonDocument doc (QJsonDocument::fromJson(byte));

if(doc.isNull())
{
    qDebug()<<"something wrong with conversion from Qfile to QJsonDoc";
    exit(2);
}

QJsonObject obj = doc.object();

if(obj.isEmpty())
{
    qDebug()<<"QJson object is empty";
    exit(3);
}

QJsonObject table_json;
QJsonArray balls_json;

// get table info
if (obj.contains("table") && obj["table"].isObject())
    table_json = obj["table"].toObject();

// get balls info array

if (obj.contains("balls") && obj["balls"].isArray())
    balls_json = obj["balls"].toArray();

factory* f = new stage1Factory(table_json,balls_json);


    Dialog w;
    w.addBalls(f->createBalls());
    w.addTable(f->createTable());
    w.show();

    return a.exec();
}
