#include <iostream>
#include <algorithm>
#include <vector>

int main() {
  std::vector<int> vec1 = {1, 2, 3, 4, 5};
  std::vector<int> vec2(5);

  // copy
  std::copy(vec1.begin(), vec1.end(), vec2.begin());
  std::cout << "vec2: ";
  for (auto i : vec2) {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  // fill
  std::fill(vec1.begin(), vec1.end(), 0);
  std::cout << "vec1: ";
  for (auto i : vec1) {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  // remove
  vec2 = {1, 2, 3, 4, 5, 4};
  auto it = std::remove(vec2.begin(), vec2.end(), 4);
  vec2.erase(it, vec2.end());
  std::cout << "vec2: ";
  for (auto i : vec2) {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  // replace
  vec2 = {1, 2, 3, 4, 5};
  std::replace(vec2.begin(), vec2.end(), 3, 0);
  std::cout << "vec2: ";
  for (auto i : vec2) {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  // swap
  std::swap(vec1, vec2);
  std::cout << "vec1: ";
  for (auto i : vec1) {
    std::cout << i << " ";
  }
  std::cout << std::endl;
  std::cout << "vec2: ";
  for (auto i : vec2) {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  return 0;
}
