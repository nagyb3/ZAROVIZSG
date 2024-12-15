#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> v = {7, 6, 5, 4, 3, 2, 1};

    std::make_heap(v.begin(), v.end());
    std::cout << "After make_heap: ";
    for (auto i : v) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    v.push_back(8);
    std::push_heap(v.begin(), v.end());
    std::cout << "After push_heap: ";
    for (auto i : v) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    std::pop_heap(v.begin(), v.end());
    std::cout << "After pop_heap: ";
    for (auto i : v) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    v.pop_back();
    std::cout << "After pop_back: ";
    for (auto i : v) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
