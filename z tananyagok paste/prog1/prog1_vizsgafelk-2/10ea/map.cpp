#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, int> ages;

    // elem hozzáadása a map-hez
    ages["Alice"] = 25;
    ages["Bob"] = 30;
    ages["Charlie"] = 35;

    // elemek elérése a map-ből kulcs alapján
    std::cout << "Charlie's age is " << ages["Charlie"] << std::endl;

    return 0;
}
