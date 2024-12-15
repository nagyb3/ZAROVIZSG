#include <iostream>
#include <algorithm>
#include <vector>

int main() {
  // Példa az std::sort használatára
  std::vector<int> v1 {5, 3, 1, 4, 2};
  std::sort(v1.begin(), v1.end());
  std::cout << "std::sort: ";
  for (auto& i : v1) {
    std::cout << i << " ";
  }
  std::cout << "\n";

  // Példa az std::is_sorted használatára
  std::vector<int> v2 {1, 2, 3, 4, 5};
  bool is_sorted = std::is_sorted(v2.begin(), v2.end());
  std::cout << "std::is_sorted (expected: true): " << std::boolalpha << is_sorted << "\n";
  is_sorted = std::is_sorted(v1.begin(), v1.end());
  std::cout << "std::is_sorted (expected: false): " << std::boolalpha << is_sorted << "\n";

  // Példa az std::partial_sort használatára
  std::vector<int> v3 {6, 8, 2, 1, 3, 5, 4, 7};
  std::partial_sort(v3.begin(), v3.begin() + 4, v3.end());
  std::cout << "std::partial_sort: ";
  for (auto& i : v3) {
    std::cout << i << " ";
  }
  std::cout << "\n";

  return 0;
}
