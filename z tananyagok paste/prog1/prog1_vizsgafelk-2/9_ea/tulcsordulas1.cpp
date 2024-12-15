#include <iostream>
#include <limits>

int main() {
  int num;
  
  std::cout << "Enter a number: ";
  if (!(std::cin >> num)) {
    std::cerr << "Error: Invalid input!" << std::endl;
    return 1;
  }
  
  if (std::cin.peek() != '\n') {
    std::cerr << "Error: Trailing characters!" << std::endl;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return 1;
  }
  
  std::cout << "You entered: " << num << std::endl;
  
  return 0;
}
