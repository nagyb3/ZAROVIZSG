#include <iostream>

int divide(int a, int b) {
    if (b == 0) {
        return -1; // hibás visszatérési érték
    }
    return a / b;
}

int main() {
    int a = 10, b = 0;
    int result = divide(a, b);
    if (result == -1) {
        std::cout << "Hiba: Nullával való osztás!" << std::endl;
    } else {
        std::cout << "Az eredmény: " << result << std::endl;
    }
    return 0;
}
