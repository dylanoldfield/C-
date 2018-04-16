#include "Singleton.h"

Singleton::Singleton()
{
}

Singleton& Singleton::getInstance()
{
    static Singleton s;
    return s;
}
