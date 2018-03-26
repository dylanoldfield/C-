#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"

namespace week4
{
class Student : public Person
{
public:
    Student(const std::string &givenName, const std::string &surname,
            const Date &date, const std::string &degree): Person(givenName, surname, date), m_degree(new std::string(degree)){}
    virtual ~Student(){delete m_degree;}

    virtual std::string getRecord() const{
        std::stringstream ss;

        ss << "Name: " << this->getFirstName() << " " << this->getSurname() << "\nDate of Birth: " << this->m_dateOfBirth.dateAsString() << "\nDegree: " << *m_degree;

        return ss.str();
    }

private:
    std::string* m_degree;
    mutable int m_recordAccessed;
};
} // namespace Week4
#endif // STUDENT_H
