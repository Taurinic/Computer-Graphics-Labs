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


	return 0;






}
