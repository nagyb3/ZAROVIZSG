#include <iostream>
#include <functional>

int sum(int x, int y) 
{


	return x + y;


}



class Add {



public:

	
	int operator() (int x, int y) const {

		
		return x + y;


	}


};

struct add_x {
  add_x(int val) : x(val) {}  // Constructor
  int operator()(int y) const { return x + y; }

private:
  int x;
};




int main() {

// Now you can use it like this:
add_x add42(42); // create an instance of the functor class
int i = add42(8); // and "call" it

std::cout << i << std::endl;

//Functors are objects that can be treated as though they are a function or function pointer. Functors are most commonly used along with STLs in a scenario like following:

// functor in action

	std::function<int(int, int)> func;

	func = sum;


	std::cout << func(5, 7) << std::endl;


	
// lambda in action

	std::function<double(double, double)> sum

		
		= [](double A, double B) { return A + B; };



	std::cout << sum(4.6, 5.9) << std::endl;


	return 0;


}
