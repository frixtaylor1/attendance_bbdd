#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <iostream>

using std::string;

class Student
{
private:
    string name;
    string surname;
    int identifier;
public:
    Student(/* args */);
    ~Student();
    void setName(string name);
    void setSurname(string surname);
    void setIdentifier(int identifier);
    string getName() const;
    string getSurname() const;
    int getIdentifier() const;
};

#endif // STUDENT_HPP