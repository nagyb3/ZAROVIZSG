#include <iostream>

int main() {
    int number;
    while (true) {
        std::cout << "Kérem, adjon meg egy számot: ";
        if (std::cin >> number) {
            // Ha sikeresen be tudtunk olvasni egy számot
            std::cout << "A beolvasott szám: " << number << std::endl;
            break;
        } else {
            // Ha valamiért nem sikerült beolvasni a számot
            std::cin.clear(); // Töröljük a hibát
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Töröljük a bemeneti puffert
            std::cout << "Hibás adat, kérjük próbálja újra." << std::endl;
        }
    }
    return 0;
}
