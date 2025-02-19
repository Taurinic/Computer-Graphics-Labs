#include <iostream>

// Include the glm library
#include <glm/glm.hpp>
#include <glm/gtx/io.hpp>

int main() {
    
    //Vectors 
    printf("Vectors and matrices\n");
    printf("------------------------------\n");


    //Defining vectors 
    glm::vec3 a, b;
    a = glm::vec3(3.0f, 0.0f, 4.0f);
    b[0] = 1.0f, b[1] = 2.0f, b[2] = 3.0f;

    printf("Defining vectors\n");
    std::cout << "a = " << a << std::endl; 
    std::cout << "b = " << b << std::endl;


    //Vector length
    printf("\nVector length: \n");
    printf("length(a) = %0.3f\n", glm::length(a));
    printf("length(a) = %0.3f\n", glm::length(b));


    return 0;
}


