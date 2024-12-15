#include <iostream>
#include <iomanip>

int main() {
    int x = 42;
    std::cout << "Az x értéke: " << std::setw(5) << std::setfill(' ') << x << std::endl; // Az x értéke:    42
    return 0;
}
