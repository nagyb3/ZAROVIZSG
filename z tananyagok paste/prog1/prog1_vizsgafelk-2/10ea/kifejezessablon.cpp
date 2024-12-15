#include <iostream>

template <int N>
struct Factorial {
  enum { value = N * Factorial<N - 1>::value };
};

template <>
struct Factorial<0> {
  enum { value = 1 };
};

int main(){
	std::cout << Factorial<5>::value << std::endl;   // eredmény: 120
}