#include "Student.hpp"

void Student::printStudentDetails() 
{
    std::cout << "\nName: " << name << "\nLast Name: " << lastname << "\nCourse: " << course << "\nID: " << ID << "\nLevel: " << level << "\nMarks Awarded: " << marks << std::endl;
}

//Student define method 
Student::Student(const std::string nameInput, const std::string lastnameInput, const std::string courseInput, const int IDNum, const int WhatLevel, const float marksAmount)
{
    name = nameInput;
    lastname = lastnameInput;
    course = courseInput;
    ID = IDNum;
    level = WhatLevel;
    marks = marksAmount;


    std::cout << "\nCar Object created" << std::endl;
}