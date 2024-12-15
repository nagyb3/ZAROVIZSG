#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> A = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::vector<int> B = {1, 3, 5, 7, 9};
    std::vector<int> C = {2, 4, 6, 8, 10};

    // includes
    if (std::includes(A.begin(), A.end(), B.begin(), B.end())) {
        std::cout << "B is a subset of A" << std::endl;
    } else {
        std::cout << "B is not a subset of A" << std::endl;
    }

    if (std::includes(A.begin(), A.end(), C.begin(), C.end())) {
        std::cout << "C is a subset of A" << std::endl;
    } else {
        std::cout << "C is not a subset of A" << std::endl;
    }

    // set_difference
    std::vector<int> difference;
    std::set_difference(A.begin(), A.end(), B.begin(), B.end(), std::back_inserter(difference));
    std::cout << "A - B: ";
    for (auto& elem : difference) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // set_intersection
    std::vector<int> intersection;
    std::set_intersection(A.begin(), A.end(), B.begin(), B.end(), std::back_inserter(intersection));
    std::cout << "A ∩ B: ";
    for (auto& elem : intersection) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // set_union
    std::vector<int> uni;
    std::set_union(A.begin(), A.end(), B.begin(), B.end(), std::back_inserter(uni));
    std::cout << "A ∪ B: ";
    for (auto& elem : uni) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}
