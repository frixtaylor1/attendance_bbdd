#ifndef ATTENDANCEMANAGEMENT_HPP
#define ATTENDANCEMANAGEMENT_HPP

#include <string>
#include <fstream>
#include "./Student.hpp"
#include "./Course.hpp"
#include "./fileHandler.hpp"
#include "./lineIterator.hpp"

class AttendanceManagement
{
private:
public:
    AttendanceManagement();
    ~AttendanceManagement();
    void takeAttendance(Student* student, Course* course, std::string dateTime, bool state);
    void showAttendance();
};

#endif // ATTENDANCEMANAGEMENT_HPP