#include <iostream>

int main() {
  int num;
  
  std::cout << "Enter a number: ";
  if (!(std::cin >> num)) {
    std::cerr << "Error: Invalid input!" << std::endl;
    return 1;
  }
  
  std::cout << "You entered: " << num << std::endl;
  
  return 0;
}
