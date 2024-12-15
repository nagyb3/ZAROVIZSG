// Example program
#include <iostream>
#include <string>


int main()
{
	int i = 1;
	std::cout << &i << std::endl;
	//túlcsordulás
	

	double d = 2.100;

	char c = 'c';
	char sztring[] = "string";
	bool logikai = false;

	enum szin { piros, zold, kek};
	szin sz = piros;
	std::cout << sz << std::endl;

	int tomb[3] = { 1,2,3 };

	struct {
		int suly;
		int magassag;
	} rekord;

	rekord.suly = 90;
	rekord.magassag = 170;

	std::cout << rekord.suly << " " << rekord.magassag << std::endl;

	int a = 10;
	int& b = a;

	std::cout << a << " " << b << std::endl;

	a = 1;

	std::cout << a << " " << b << std::endl;

	b = 10;

	std::cout << a << " " << b << std::endl;

	std::string kaja = "Pizza";
	std::string* ptr = &kaja;

	std::cout << kaja << " " << &kaja << " " << ptr << " "<< *ptr << " " << &ptr << std::endl;

	//Kezdõértékadás
	int e;
	//std::cout << e << std::endl;

	int tomb2[2];
	std::cout << tomb2[0] << " " << tomb2[1] << " " << tomb2[2] << std::endl;

	using namespace std;
	int a1 = 1, b1 = 2;
	int c1 = a1 * b1 + b1 == 0; // c = 0
	//cout << a * b + b == 0; // outputs 4

	/*
	4


Because the precedence of these operators are operator* > operator+ > operator<< > operator==. Then cout << a*b + b==0; is equivalent with (cout << ((a*b) + b)) == 0;.

Then the result of ((a*b) + b)), i.e. 4 will be printed out, then the returned value of (cout << ((a*b) + b)), i.e. cout is compared with 0. Before C++11 cout could be implicitly converted to void* via operator void*, which returns a null pointer when steram has any errors. So here it's compared with 0 (i.e. the null pointer), and does nothing further more with the result.
	*/

	while (1) {
		std::cout << i << std::endl;
		i = i * 2;
	}
  
}

