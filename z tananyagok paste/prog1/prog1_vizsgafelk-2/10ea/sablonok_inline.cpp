#include <iostream>

template<typename T>
inline T max(T a, T b) {
    return a > b ? a : b;
}

int main() {
    int x = 5, y = 10;
    std::cout << max<int>(x, y) << std::endl;
    return 0;
}
