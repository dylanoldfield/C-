#ifndef PERSON_H
#define PERSON_H

#include "Date.h"
#include <string>

namespace week4
{
class Person
{
public:
    Person(std::string firstName,
        std::string surname,
           Date dateOfBirth): m_firstName(firstName), m_surname(surname), m_dateOfBirth(dateOfBirth){}
    virtual ~Person(){}

    // pass by reference: that means the underlying variable will not be mutated
    void changeFirstName(const std::string& firstName){m_firstName = firstName;}
    std::string getFirstName() const {return m_firstName;}

    void changeSurname(const std::string& surname){m_surname = surname;
                                                  }
    // returned by const, const methods will not change the state of the class
    std::string getSurname() const {return m_surname;}

    int const getYearOfBirth(){
        return m_dateOfBirth.getYear();
    }
    int const getCurrentAge(){
        int age = m_dateOfBirth.getYear();

        if(m_dateOfBirth.getMonth() <= m_dateOfBirth.getThisMonth())
        return age + 1;
    }

    virtual std::string getRecord() const = 0;

protected:
    std::string m_firstName;
    std::string m_surname;
    Date m_dateOfBirth;
};
} // namespace  Week4
#endif // PERSON_H
