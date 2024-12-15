#include <iostream>


/*
Well, recursion when used with lists and pattern matching, lets you create a powerful function but this holds only partially true for C++. The languages like C++, iteration is preferable for the reason that recursion comes at a cost of time and space. The very first step to call a function is to allocate the memory from stack for function’s arguments and local variables and this is exactly where we get to see the problem. Many programs, during start; allocate a huge single chunk of memory from the stack.

Sima rekurzió esetén több értéket kell a memóriában tárolni

However, there exists a solution to this problem as well called tail recursion. It is a special case of recursion where the calling function does no more computation after making a recursive call. Take a look here.
*/


unsigned factorial_TR(int x, int y)

{



	if (x == 0)


	{
	
		return y;

	};


	return factorial_TR(x - 1, x*y);


}


unsigned int factorial(int x)

{



	return factorial_TR(x, 1);


}

int main()

{


	std::cout << factorial(3) << std::endl;
	return 0;

}
