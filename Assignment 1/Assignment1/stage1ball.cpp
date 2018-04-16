#include "stage1ball.h"

#include "ball.h"
#include "vector.h"
#include "dialog.h"


void stage1ball::setTelemetry(float xCoordinate, float yCoordinate, float xVelocity, float yVelocity)
{
    m_telemetry->coordinate.setX(xCoordinate);
    m_telemetry->coordinate.setY(yCoordinate);
    m_telemetry->velocity.setX(xVelocity);
    m_telemetry->velocity.setY(yVelocity);
}
 std::string stage1ball::getColour()
 {
     return m_colour;
 }

float stage1ball::getMass()
 {
     return m_mass;
 }

 float stage1ball::getRadius()
 {
     return m_radius;
 }

QVector2D stage1ball::getCoordinate()
 {
     return m_telemetry->coordinate;
 }

QVector2D stage1ball::getVelocity()
 {
     return m_telemetry->velocity;
 }

//void ball::render(QPainter &painter, unsigned int time)
//{
//    if (isCollision()) {
//        *coordinate->setYCoordinateToZero(*physical->getRadius());
//        // velocity decreases after hitting the ground
//        *physical->y_velocity *= -0.8;

//        // friction on the ground
//        if (*physical->x_velocity > 0) {
//            *physical->x_velocity -= 0.1;
//        }
//        else {
//           // need to make sure the ball doesn't go backwards
//           *physical->x_velocity = 0;
//        }
//    }

//    painter.setPen ( Qt::black );
//    painter.setBrush( QBrush( Qt::yellow ) );
//    painter.drawEllipse(*coordinate->getQtRenderingXCoordinate() - *physical->getRadius(),
//        *coordinate->getQtRenderingYCoordinate() - *physical->getRadius(),
//        *physical->getRadius() * 2,
//        *physical->getRadius() * 2);
//    *physical->y_velocity += -9.8 / 32.0;
//    *coordinate->changeInXCoordinate(*physical->x_velocity);
//    *coordinate->changeInYCoordinate(*physical->y_velocity);
//}
