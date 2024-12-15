#include <iostream>
#include <iomanip>

int main() {
    int x;
    std::cout << "Adjon meg egy számot: ";
    std::cin >> std::setw(5) >> std::setfill('0') >> x;
    std::cout << "A beolvasott x értéke: " << x << std::endl;
    return 0;
}
