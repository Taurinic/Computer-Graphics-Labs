#include <iostream> 

int main() 
{
	//Starting print code
	std::cout << "Hello World! \n" << std::endl;


	// Degrees to radians conversion
	float angleInDegrees = 45.0f;
	float pi = 3.1415927f;

	float angleInRadians = angleInDegrees * pi / 180.0f;

	// Output result
	std::cout << angleInDegrees << " degrees is equal to "
			  << angleInRadians << " radians." << std::endl;

	return 0;






}
