#include <cassert>

//típushiba
int divide(int x, int y) {
    assert(y != 0 && "Nullával való osztás.");
    return x / y;
}

int main() {
    int a = 5;
    int b = 10;

    assert(a < b);

    // kód, amely az assert-et követi
	divide(10,2);
	divide(2,0);
    return 0;
}
