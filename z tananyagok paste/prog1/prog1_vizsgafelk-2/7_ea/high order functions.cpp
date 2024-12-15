#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>


int main() {
	
//Higher-order functions take other functions as parameter or return them. All the programming languages that supports FP offers map, filter and fold functions.
// transform in action

	
std::vector<int> v{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };


	std::transform(v.begin(), v.end(), v.begin(),


		[](int n) {return n + (n * 2); }


	);


	std::for_each(v.begin(), v.end(),


		[](const int&x) {std::cout << x << std::endl; });



// remove_if in action


	std::remove_if(v.begin(), v.end(),


		[](int n) {return n % 2 != 0; }

	);


	std::for_each(v.begin(), v.end(),


		[](const int&x) {std::cout << x << std::endl; });



// copy_if in action


	std::vector<int> v1;


	std::copy_if(v.begin(), v.end(),


		std::back_inserter(v1),

	
	[](int n) {return n % 2 != 0; }

	);

	std::for_each(v1.begin(), v1.end(),


		[](const int&y) {std::cout << y << std::endl; });



//accumulate in action


	std::vector<int> v2 = { 2, 9, -4, 2 };


	auto sum = std::accumulate(begin(v2), end(v2), 0);


	std::for_each(v2.begin(), v2.end(),


		[](const int&z) {std::cout << z << std::endl; });

}

