#include <typeinfo>

int main() {
    int i = 42;
    const std::type_info& type = typeid(i);
    std::cout << "A típusinformáció: " << type.name() << '\n';
}
