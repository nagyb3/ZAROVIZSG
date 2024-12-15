#include <iostream>


/*

    [] is lambda introducer or lambda closure
    () is for argument list (you can skip these parenthesis if lambda is not taking any argument)
    {} contains the body of lambda
    () is used to call the lambda
    
	[]		captures nothing	
	[&]		all captures done by reference	
	[=]		all captures done by value	
	[&A, =B]	captures A by reference, B by value	
	[=, &A]	captures A by reference, everything else by value	
	[*this]	captures ‘this’ (C++17 still not widely supported)

*/

int main()
{
	[]() {

		std::cout << "Hello from C++ Lambda!" << std::endl; }

	();

	auto sum = [](double A, double B) { return A + B; };

	auto add = sum;
	
	auto add2 = [](double A, double B) -> double { return A + B; };

	std::cout << add(3.25, 5.65) << std::endl;
	std::cout << add2(3.25, 5.65) << std::endl;

	double pi = 3.1416;

	auto func = [pi]() {

		std::cout << "The value of pi is " << pi << std::endl;

	};
	func();

	auto gene_lambda = [](auto arg) { return arg + arg; };

	std::cout << gene_lambda(5) << std::endl;

	std::cout << gene_lambda(3.1416) << std::endl;
}
