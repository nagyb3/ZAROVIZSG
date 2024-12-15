#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  // for_each: elemenként végigmegyünk a vektoron és kiírjuk az elemeket
  std::for_each(numbers.begin(), numbers.end(), [](int num) {
    std::cout << num << " ";
  });
  std::cout << std::endl;

  // count: megszámolja, hogy hány 5-ös van a vektorban
  int count = std::count(numbers.begin(), numbers.end(), 5);
  std::cout << "Count of 5: " << count << std::endl;

  // find: megkeresi az első 7-est a vektorban
  auto seven = std::find(numbers.begin(), numbers.end(), 7);
  if (seven != numbers.end()) {
    std::cout << "Found 7 at position: " << std::distance(numbers.begin(), seven) << std::endl;
  } else {
    std::cout << "7 not found." << std::endl;
  }

  // find_if: megkeresi az első páratlan számot a vektorban
  auto odd = std::find_if(numbers.begin(), numbers.end(), [](int num) {
    return num % 2 != 0;
  });
  if (odd != numbers.end()) {
    std::cout << "Found odd number: " << *odd << std::endl;
  } else {
    std::cout << "No odd numbers found." << std::endl;
  }

  return 0;
}
