#ifndef DATE_H
#define DATE_H
#include <sstream>
#include <string>

namespace week4 {
class Date
{
public:
    Date(int day, int month, int year);
    ~Date();

    int getYear(){return m_year;}
    int getMonth(){return m_month;}
    int getDay(){return m_day;}
    int const getThisYear(){
        return 2018;
    }
    int const getThisMonth(){
        return 3;
    }
    int const getThisDay(){return 26;}

    std::string dateAsString() const{
        std::stringstream ss;
        ss << m_day << "/" << m_month << "/" << m_year;
        return ss.str();
    }
private:
    int m_day;
    int m_month;
    int m_year;


};
}


#endif // DATE_H
