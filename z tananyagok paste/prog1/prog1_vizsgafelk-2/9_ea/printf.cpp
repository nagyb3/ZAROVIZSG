#include <cstdio>

int main() {
    int x = 42;
    std::printf("Az x értéke: %d\n", x); // Az x értéke: 42
    std::printf("Az x értéke: %5d\n", x); // Az x értéke:    42
    std::printf("Az x értéke: %-5d\n", x); // Az x értéke: 42   
    return 0;
}
