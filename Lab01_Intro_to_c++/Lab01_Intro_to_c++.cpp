#include <iostream> 

int main() 
{
	//Starting print code
	std::cout << "Hello World! \n" << std::endl;


	// Degrees to radians conversion ----------------------------
	float angleInDegrees = 180.0f;
	float pi = 3.1415927f;

	float angleInRadians = angleInDegrees * pi / 180.0f;

	// Output the result
	std::cout << angleInDegrees << " degrees is equal to "
			  << angleInRadians << " radians." << std::endl;
	// ---------------------------------------------------------


	//If statements---------------------------------------------
	std::cout << "\nIf statement\n------------" << std::endl; // Prints text 
	std::cout << angleInDegrees << " degrees is an"; //Pirnts angle then text 

	if (angleInDegrees < 90) //if angle in degrees is less than 90
		std::cout << " acute angle." << std::endl; //print actute aganle

	else
		std::cout << " Obtuse angle." << std::endl; //else print obtuse angle 
	// ---------------------------------------------------------



	//For Loops------------------------------------------------- 

	//Outputs the first 10 powers of 2 
	std::cout << "\nFor loop|n--------" << std::endl;
	int powerOfTwo = 1;


	for (unsigned int i = 0; i < 10; i++)
	{
		powerOfTwo *= 2; //PowerOfTwo Var
		std::cout << "2^" << i + 1 << " = " << powerOfTwo << std::endl; //Prints 2^ then i + 1 equals powerOfTwo which is *= 2
	}

	return 0;






}
