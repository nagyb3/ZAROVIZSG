#include <fstream>
#include <iostream>
#include <string>

int main() {
    std::string filename = "example.txt";
    std::ofstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Hiba: A fájl nem nyitható meg!" << std::endl;
        return 1;
    }
    file << "Ez egy példa szöveg." << std::endl;
    file.close();
    return 0;
}
