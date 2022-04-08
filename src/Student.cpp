#include "../include/Student.hpp"

Student::Student(/* args */)
{
}

Student::~Student()
{
}

void Student::setName(std::string name)
{
    this->name = name;
}

void Student::setSurname(std::string surname)
{
    this->surname = surname;
}

void Student::setIdentifier(int identifier)
{
    this->identifier = identifier;
}

std::string Student::getName() const
{
    return name;
}

std::string Student::getSurname() const
{
    return surname;
}

int Student::getIdentifier() const
{
    return identifier;   
}
