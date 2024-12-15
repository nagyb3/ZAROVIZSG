#include <iostream>
#include <algorithm>
#include <vector>

bool even(int n) {
    return n % 2 == 0;
}

int main() {
    std::vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Felosztjuk a v tömböt páros és páratlan számokra
    auto it = std::partition(v.begin(), v.end(), even);

    // Az it iterátorral megkapjuk a felosztás helyét
    std::cout << "A felosztás helye: " << std::distance(v.begin(), it) << std::endl;

    // Ellenőrizzük, hogy az elemek fel vannak-e osztva
    bool is_partitioned = std::is_partitioned(v.begin(), v.end(), even);

    std::cout << "A tömb fel van-e osztva? " << std::boolalpha << is_partitioned << std::endl;

    // Kiírjuk a páratlan számokat
    std::cout << "Páratlan számok: ";
    std::copy_if(v.begin(), it, std::ostream_iterator<int>(std::cout, " "), [](int n){ return !even(n); });

    std::cout << std::endl;

    // Kiírjuk a páros számokat
    std::cout << "Páros számok: ";
    std::copy_if(it, v.end(), std::ostream_iterator<int>(std::cout, " "), even);

    std::cout << std::endl;

    return 0;
	/*
	A felosztás helye: 5
	A tömb fel van-e osztva? true
	Páratlan számok: 1 3 5 7 9
	Páros számok: 2 4 6 8 10
	
	
	*/
}


