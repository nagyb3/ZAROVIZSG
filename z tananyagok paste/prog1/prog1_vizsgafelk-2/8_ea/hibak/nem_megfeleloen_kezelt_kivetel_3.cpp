#include <iostream>
using namespace std;

void divide(int a, int b) {
    if (b == 0) {
        throw "Error: Division by zero!";
    }
    int result = a / b;
    cout << "Result: " << result << endl;
}

int main() {
    int a = 10;
    int b = 0;
    divide(a, b);
    cout << "Program continues to run..." << endl;
    return 0;
}
