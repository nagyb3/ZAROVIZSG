template<typename T>
void foo(T& t) {
    // ...
}

int main() {
    int x = 5;
    foo(x); // pass x by reference
    // ...
    return 0;
}
