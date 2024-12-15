#include <iostream>
#include <stdexcept>

int divide(int a, int b) {
    if (b == 0) {
        throw std::invalid_argument("Nullával való osztás!");
    }
    return a / b;
}

int main() {
    int a = 10, b = 0;
    try {
        int result = divide(a, b);
        std::cout << "Az eredmény: " << result << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Hiba: " << e.what() << std::endl;
    }
    return 0;
}
