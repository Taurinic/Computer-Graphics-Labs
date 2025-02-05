#pragma once 

#include <iostream>


class Student
{
public:

	std::string name; 
	std::string lastname;
	std::string course;

	int ID;
	int level;
	float marks = 12.0f;

	//Constructor 
	Student(const std::string, const std::string, const std::string, const int ID, const int level, const float marks);

	//methods 
	void printStudentDetails();




};