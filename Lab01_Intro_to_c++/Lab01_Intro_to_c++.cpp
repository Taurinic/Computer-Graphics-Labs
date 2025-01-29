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
	
	//---------------------------------------------------------


	//While Loop

	//Count the numbner of steps Collatz sequence takes to reach 1 

	//Variables 
	int n, step, nsave; 

	n = 10;
	step = 0;
	nsave = n;

	std::cout << "\nWhile loop\n--------\n" << n;

	while (n > 1) // condition 
	{
		if (n % 2 == 0) //if n remainder 2 = 0; 
			n /= 2; //then print n /=2 

		else
			n = 3 * n + 1; // else print 3 * whatever n is + 1;

		step++; //Increment step from 0 - 1 on first loop then by 1 each time until condition is met 
		std::cout << " -> " << n;

	}
	std::cout << "\n\nThe Collatz sequence starting at " << nsave // prints text + current
			  << "took " << step << " steps to reach 1. " << std::endl;







	return 0;






}
