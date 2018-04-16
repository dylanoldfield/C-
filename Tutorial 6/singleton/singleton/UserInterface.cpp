#include "UserInterface.h"

    UserInterface& UserInterface::getInstance(int height, int width)
    {
        static UserInterface u(height, width);
        return u;
    }

    int UserInterface::getInterfaceHeight()
    {
        return m_height;
    }

    int UserInterface::getInterfaceWidth()
    {
        return m_width;
    }

    UserInterface::UserInterface(int height, int width):m_height(height), m_width(width){}

