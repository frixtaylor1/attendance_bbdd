#include "../include/Course.hpp"

Course::Course(/* args */)
{
}

Course::~Course()
{
}

void Course::setIdentifier(int identifier)
{ 
    this->identifier = identifier;
}
void Course::setName(string name)
{
    this->name = name;   
}
int Course::getIdentifier() const
{
    return this->identifier;
}
string Course::getName() const
{
    return name;
}
