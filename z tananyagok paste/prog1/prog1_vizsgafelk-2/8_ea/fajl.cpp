#include <iostream>
#include <exception>
#include <fstream>

int main(){
	
	std::ifstream inputFile("myfile.txt");
	try {
		if (!inputFile) {
		// A fájl nem található vagy nem olvasható
		throw std::runtime_error("A fájl nem található vagy nem olvasható.");
		}
		// Fájl olvasása
		int num;
		while (inputFile >> num) {
			std::cout << num << '\n';
		}
	} catch(std::exception& e) {
		// A fájlkezelési hiba kezelése
		std::cerr << "Fájlkezelési hiba: " << e.what() << '\n';
	}
}