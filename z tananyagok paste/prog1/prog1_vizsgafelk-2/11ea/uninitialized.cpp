#include <iostream>
#include <memory>
#include <algorithm>
#include <vector>

struct MyType {
    int x;
    MyType(int a): x(a) {}
    ~MyType() {
        std::cout << "Destructor called for x = " << x << std::endl;
    }
};

int main() {
    // Létrehozunk egy tízelemes vektort
    std::vector<MyType> v(10, MyType(0));

    // Előre lefoglalunk egy másik tízelemes tartományt
    std::unique_ptr<MyType[]> ptr(new MyType[10]);

    // Az uninitialized_copy függvénnyel átmásoljuk a v tartomány elemeit a ptr tartományba
    std::uninitialized_copy(v.begin(), v.end(), ptr.get());

    // Az eredeti vektor elemeit megsemmisítjük
    std::destroy(v.begin(), v.end());

    // Az átmásolt tartomány elemeit kiírjuk
    for(int i = 0; i < 10; ++i) {
        std::cout << ptr[i].x << std::endl;
    }

    // Az ptr tartomány elemeit megsemmisítjük
    std::destroy_n(ptr.get(), 10);

    return 0;
}

