#include <iostream>
#include <map>

int main() {
    std::multimap<char, int> myMap;

    // Elemek hozzáadása
    myMap.insert(std::make_pair('a', 10));
    myMap.insert(std::make_pair('b', 20));
    myMap.insert(std::make_pair('c', 30));
    myMap.insert(std::make_pair('a', 40));
    myMap.insert(std::make_pair('b', 50));

    // Az összes kulcs-érték pár kiíratása
    for (auto it = myMap.begin(); it != myMap.end(); ++it) {
        std::cout << it->first << " -> " << it->second << std::endl;
    }

    // Az "a" kulcshoz tartozó értékek kiíratása
    auto range = myMap.equal_range('a');
    for (auto it = range.first; it != range.second; ++it) {
        std::cout << "a -> " << it->second << std::endl;
    }

    return 0;
}
