#include <iostream>
#include <cstdlib>
#include <cstring>

// Az összehasonlító függvény a qsort függvény számára.
int compare(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int main() {
    int arr[] = {5, 2, 1, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    // qsort használata
    std::qsort(arr, n, sizeof(int), compare);

    std::cout << "Rendezett tömb: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // bsearch használata
    int key = 4;
    int* result = (int*)std::bsearch(&key, arr, n, sizeof(int), compare);

    if (result != NULL) {
        std::cout << "Elem megtalálva: " << *result << std::endl;
    } else {
        std::cout << "Elem nem található." << std::endl;
    }

    return 0;
}

