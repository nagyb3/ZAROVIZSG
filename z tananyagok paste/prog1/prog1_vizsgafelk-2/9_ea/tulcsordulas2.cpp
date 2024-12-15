#include <iostream>
#include <limits>

int main() {
    int num;

    while (true) {
        std::cout << "Kérem, adjon meg egy egész számot: ";
        std::cin >> num;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Hiba történt a bemenet olvasásakor. Kérjük, próbálja újra." << std::endl;
        }
        else {
            break;
        }
    }

    std::cout << "A beolvasott szám: " << num << std::endl;

    return 0;
}
