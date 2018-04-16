#include "stage1Factory.h"
#include "balldirector.h"
#include "stage1ballbuilder.h"

std::vector<ball*> stage1Factory::createBalls(){
    std::vector<ball*> balls;
    ballDirector *bd = new ballDirector();

    // converts the individual JSON ball objects and passes them to the stage1Builder
    for(int i = 0; i < ball_info.size(); i++)
    {
        QJsonObject b = ball_info[1].toObject();
        QJsonObject &b_ref = b;
        stage1BallBuilder *s1b = new stage1BallBuilder(b_ref);

        // sets Director's builder to a new stage1builder
        bd->setBuilder(s1b);

        //creates a ball and adds it to a vector
        ball::ball* toAdd = bd->Construct();
        balls.push_back(toAdd);
        delete s1b;
    }

        return balls;

    }


// creates the a generic table by extracting the table info from a JSON file
table* stage1Factory::createTable()
{
    std::string colour;
    QJsonObject size;
    float x_size;
    float y_size;
    float friction;

    if(this->table_info.contains("colour") && table_info["colour"].isString())
    {
        colour = table_info["colour"].toString().toStdString();
    }

    if(this->table_info.contains("size") && table_info["size"].isObject())
    {
        size = table_info["size"].toObject();

        if(size.contains("x") && size["x"].isDouble())
        {
            x_size = (float)size["x"].toDouble();
        }

        if(size.contains("y") && size["y"].isDouble())
        {
            y_size = (float)size["y"].toDouble();
        }
    }

    if(this->table_info.contains("friction") && table_info["friction"].isDouble())
    {
        friction = (float)size["x"].toDouble();
    }

    return new table::table(colour,x_size, y_size, friction);
}


