#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

int main() {
    std::vector<int> numbers(10);
    std::iota(numbers.begin(), numbers.end(), 1); // numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
    
    int sum = std::accumulate(numbers.begin(), numbers.end(), 0); // sum = 55
    std::cout << "Sum of numbers: " << sum << std::endl;
    
    int dot_product = std::inner_product(numbers.begin(), numbers.begin() + 5, numbers.begin() + 5, 0);
    // dot_product = 130
    std::cout << "Dot product of first 5 and last 5 numbers: " << dot_product << std::endl;
    
    std::vector<int> partial_sums(10);
    std::partial_sum(numbers.begin(), numbers.end(), partial_sums.begin()); 
	// partial_sums = {1, 3, 6, 10, 15, 21, 28, 36, 45, 55}
    
    std::cout << "Partial sums of numbers: ";
    for (const auto& num : partial_sums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}

