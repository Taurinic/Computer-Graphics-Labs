#pragma once 

#include <iostream>

// Class OOP ----------------------------------------------------
class Car {
public:

    std::string make;
    std::string model;
    int year;
    float speed = 0.0f;


    //Constructor with specified attributes 
    Car(const std::string, const std::string, const int);



    // Method to output car details
    void outputDetails();
    void accelerate(const float);

    //static memeber function 
    static float mph2kph(const float);


};