#include <iostream>
#include <array>

int main() {
  // Létrehozunk egy 5 elemű tömböt, amelynek elemei típusa int
  std::array<int, 5> myArray;

  // Felvesszük az értékeket
  for (int i = 0; i < 5; ++i) {
    myArray[i] = i;
  }

  // Kiírjuk az értékeket
  for (int i = 0; i < 5; ++i) {
    std::cout << myArray[i] << " ";
  }

  return 0;
}
