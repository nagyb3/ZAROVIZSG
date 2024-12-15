#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
    char* name;
public:
    Person(const char* n) {
        if (n == nullptr) {
            throw "Error: Name cannot be null!";
        }
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        cout << "Person object created" << endl;
    }

    ~Person() {
        delete[] name;
        cout << "Person object destroyed" << endl;
    }

    const char* getName() const {
        return name;
    }
};

int main() {
    try {
        Person p1("John");
        Person p2(nullptr);
    }
    catch (const char* msg) {
        cerr << "Exception caught: " << msg << endl;
    }

    return 0;
}
