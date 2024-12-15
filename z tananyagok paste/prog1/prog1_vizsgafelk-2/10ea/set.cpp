#include <iostream>
#include <set>
#include <string>

int main() {
    std::set<std::string> names;

    // elem hozzáadása a set-hez
    names.insert("Alice");
    names.insert("Bob");
    names.insert("Charlie");

    // elemek elérése a set-ből
    for (const auto& name : names) {
        std::cout << name << std::endl;
    }

    return 0;
}
