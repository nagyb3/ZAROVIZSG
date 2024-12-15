#include <iostream>
#include <cmath>

int main() {

/*
Pure functions always produce the same result when given the same parameter meaning the return value only depends on the input. Also, they do not have any side-effect and immutability applies that there won’t be any change in the state. Pure functions do not communicate with the outside world. For example, mathematical functions like pow, abs, sqrt, etc. are examples of pure functions.
*/

	
std::cout << "Absolute value of +0.025 is " << abs(+0.025) << std::endl;


	std::cout << "Absolute value of -1.62 is " << abs(-1.62) << std::endl;


	std::cout << "Square root of 25 is " << sqrt(25) << std::endl;


	std::cout << "square of 10 is " << pow(10, 2) << std::endl;



	return 0;


}
