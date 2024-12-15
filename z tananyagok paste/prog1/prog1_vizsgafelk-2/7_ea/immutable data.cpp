#include <iostream>


/*
Immutability is a powerful yet a simple concept in FP with almost the same story as that of purity. Basically, immutability refers to the idea that the object state does not change one the object has been created. The same is true for a class as well. Immutable objects simplify the concurrent programming to a great extent. It solves the problem with synchronization as the state of the objects accessed by threads won’t change so there’s no more need for synchronization.
*/

/*
Yet, there should be no confusion between const and constexpr. const is practically for objects to declare them immutable. Like const, constexpr can be applied to variables and the compiler will raise an error if any code attempts to modify the value. const can only be used with non-static member function but constexpr can also be applied to functions and class constructors as long as the argument and return type are literal. constexpr indicates that the value, or return value, is constant and will be computed at compile time which drastically improves the performance. A constexpr integral value can be used wherever a const integer is required, such as in template arguments and array declarations.

*/

constexpr int Fibonacci(int x)

{


	return (x <= 1) ? x : Fibonacci(x - 1) + Fibonacci(x - 2);


}


int main()

{



	const int series = Fibonacci(10);


	std::cout << series << std::endl;


	return 0;


}
