#include <iostream> 
#include "Car.hpp"
#include "Student.hpp"

// Global Variables
float pi = 3.1415927f;


// Function Example: Power Calculation -------------------------
float power(const float x, const int y) {
    // Uses const to ensure inputs do not change during execution
    float xPowerY = 1.0f;
    for (unsigned int i = 0; i < y; i++) {
        xPowerY *= x;
    }
    return xPowerY;
}
// ------------------------------------------------------------

// Function to Convert Degrees to Radians --------------------
void radians(float& angle) {
    angle *= pi / 180;
}
// ------------------------------------------------------------

// Main Program ------------------------------------------------
int main() {
    // Starting print
    std::cout << "Hello World! \n" << std::endl;

    // Degrees to radians conversion ----------------------------
    float angleInDegrees = 180.0f;
    float angleInRadians = angleInDegrees * pi / 180.0f;

    // Output the result
    std::cout << angleInDegrees << " degrees is equal to "
        << angleInRadians << " radians." << std::endl;
    // ---------------------------------------------------------

    // If Statements ---------------------------------------------
    std::cout << "\nIf statement\n------------" << std::endl;
    std::cout << angleInDegrees << " degrees is an";

    if (angleInDegrees < 90) // If angle in degrees is less than 90
        std::cout << " acute angle." << std::endl;
    else
        std::cout << " Obtuse angle." << std::endl;
    // ---------------------------------------------------------

    // For Loop: Outputs the first 10 powers of 2 ---------------
    std::cout << "\nFor loop\n--------" << std::endl;
    int powerOfTwo = 1;

    for (unsigned int i = 0; i < 10; i++) {
        powerOfTwo *= 2; // Multiply powerOfTwo by 2 each iteration
        std::cout << "2^" << i + 1 << " = " << powerOfTwo << std::endl;
    }
    // ---------------------------------------------------------

    // While Loop: Collatz Sequence ----------------------------
    std::cout << "\nWhile loop\n--------\n" << std::endl;
    int n = 10, step = 0, nsave = n;

    std::cout << n;
    while (n > 1) {
        if (n % 2 == 0) // If n is even
            n /= 2;
        else // If n is odd
            n = 3 * n + 1;

        step++; // Increment step
        std::cout << " -> " << n;
    }

    std::cout << "\n\nThe Collatz sequence starting at " << nsave
        << " took " << step << " steps to reach 1. " << std::endl;
    // ---------------------------------------------------------

    // MyArray ---------------------------------------------------
    unsigned int myArray[] = { 3, 1, 4, 1, 5, 9, 2, 6, 5 };
    std::cout << "\nArrays\n-------" << std::endl;

    // Loop through array and print values
    for (unsigned int i = 0; i < 9; i++) {
        std::cout << "myArray[" << i << "] = " << myArray[i] << std::endl;
    }

    std::cout << "\nSize of myArray = " << sizeof(myArray) << std::endl;
    std::cout << "\nNumber of elements = " << sizeof(myArray) / sizeof(unsigned int) << std::endl;
    // ------------------------------------------------------------

    // Functions: Power Calculation -----------------------------
    float twoPowerTen = power(2.0f, 10);

    std::cout << "\nFunctions\n---------" << std::endl;
    std::cout << "2^10 = " << twoPowerTen << std::endl;
    // ------------------------------------------------------------

    // Function Parameters: Degrees to Radians Conversion ------
    float angle = angleInDegrees;
    radians(angle);
    std::cout << "\n" << angleInDegrees << " degrees is equal to " << angle << " radians." << std::endl;
    // ------------------------------------------------------------

    // Define and use Car class --------------------------------
    std::cout << "\nClasses\n-------" << std::endl;
    //Delorean
    Car delorean("Delorean", "DMC-12", 1982);

    //Print Car
    delorean.outputDetails();

    //print student 
    std::cout << "\n StudentDetialsExercise\n----------";
    Student ellie("Ellie", "Williams", "Computer Science" , 12345678, 5, 12);

    ellie.printStudentDetails();



    //Accelerate the delorean 
    delorean.accelerate(88.0f);


    //Convert speed from mph to kph 
    std::cout << "\n" << 88 << "mph is equivalent to " << Car::mph2kph(88.0f) << "kph." << std::endl;
    // ------------------------------------------------------------

    return 0;


}
 