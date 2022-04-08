#ifndef COURSE_HPP
#define COURSE_HPP

#include <iostream>

using std::string;

class Course
{
private:
    int identifier;
    string name;
public:
    Course(/* args */);
    ~Course();
    void setIdentifier(int identifier);
    void setName(string name);
    int getIdentifier() const;
    string getName() const;
};

#endif // COURSE_HPP