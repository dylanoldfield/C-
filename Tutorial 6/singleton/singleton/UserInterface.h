#ifndef USERINTERFACE_H
#define USERINTERFACE_H

class UserInterface
{
public:
   static UserInterface& getInstance(int height, int width);
    int getInterfaceHeight();
    int getInterfaceWidth();

private:
    UserInterface(int height, int width);
    int m_height;
    int m_width;
};

#endif // USERINTERFACE_H
