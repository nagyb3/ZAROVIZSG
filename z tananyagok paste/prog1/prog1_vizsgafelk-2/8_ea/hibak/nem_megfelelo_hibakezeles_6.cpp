#include <iostream>

void foo(int x) {
    if (x < 0) {
        throw std::runtime_error("x kisebb, mint 0!");
    }
}

int main() {
    try {
        foo(-1);
        std::cout << "Sikeresen lefutott a foo függvény!" << std::endl;
    }
    catch (std::exception& ex) {
        std::cerr << ex.what() << std::endl;
    }
}
