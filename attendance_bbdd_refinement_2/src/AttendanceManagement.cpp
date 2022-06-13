#include "../include/AttendanceManagement.hpp"

AttendanceManagement::AttendanceManagement()
{
}

AttendanceManagement::~AttendanceManagement()
{
}

void AttendanceManagement::takeAttendance(Student* student, Course* course, std::string dateTime, bool state)
{
    ofstream file = wf::openFile("./attendance.csv");
    wf::fileStatus(file, "Error, opening file(write)");
    file << student << course << dateTime << ',' << state << "\n";
    wf::closeFile(file);
}

void AttendanceManagement::showAttendance()
{
    ifstream file = rf::openFile("attendance.csv");
    rf::fileStatus(file, "Error, opening file(reading)");
    rf::fileContent(rf::is_empty(file), "Can't read file, file is empty!");
    readLineByLine(file);  // line iterator function
    rf::closeFile(file);
}