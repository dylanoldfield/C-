#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton
{
public:
    static Singleton& getInstance();
protected:
    Singleton();
};

#endif // SINGLETON_H
