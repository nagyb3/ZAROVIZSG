#include <iostream>
#include <exception>

int main(){
	try {
		// Memóriafoglalás
		int* myArray = new int[1000000000000000000];
	} catch(std::bad_alloc& e) {
		// A memóriafoglalás nem sikerült
		std::cerr << "Memóriafoglalási hiba: " << e.what() << '\n';
	}
	
	int* myArray = new (std::nothrow) int[1000000000000000000];
	if (myArray == nullptr) {
		// A memóriafoglalás nem sikerült
		std::cerr << "Memóriafoglalási hiba.\n";
	}


	
}