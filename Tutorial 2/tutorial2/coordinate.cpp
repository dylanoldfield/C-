#pragma once
#include "coordinate.h"

Coordinate::Coordinate(unsigned
    int xCoordinate,
    unsigned int yCoordinate,
           unsigned int frameHeight): m_xCoordinate(xCoordinate), m_yCoordinate(yCoordinate), m_frameHeight(frameHeight){

}
    int Coordinate::getQtRenderingYCoordinate()
    {
        return m_frameHeight - m_yCoordinate;
    }

    int Coordinate::getQtRenderingXCoordinate()
    {
        return m_xCoordinate;
    }

    void Coordinate::changeInXCoordinate(int change){
        m_xCoordinate += change;
    }

    void Coordinate::changeInYCoordinate(int change){
        m_yCoordinate += change;
    }

    void Coordinate::setYCoordinateToZero(int offset){
        m_yCoordinate = offset;

    }




