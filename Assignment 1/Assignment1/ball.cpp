#include "ball.h"
#include "vector.h"
#include "dialog.h"

void ball::render(QPainter &painter, unsigned int time)
{
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

    painter.setPen (QColor(m_colour.c_str()));
    painter.setBrush(QColor(m_colour.c_str()) );
    QPointF point;
    point.setX(m_telemetry->coordinate.x());
    point.setY(m_telemetry->coordinate.y());
    painter.drawEllipse(point,m_radius,m_radius);

    m_telemetry->coordinate.setX(m_telemetry->coordinate.x()+m_telemetry->velocity.x());
    m_telemetry->coordinate.setX(m_telemetry->coordinate.x()+m_telemetry->velocity.x());


}
