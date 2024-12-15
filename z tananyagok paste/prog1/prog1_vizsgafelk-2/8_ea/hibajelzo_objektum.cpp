#include <iostream>
#include <system_error>

std::error_code divide(int a, int b, int& result) {
    if (b == 0) {
        return std::make_error_code(std::errc::invalid_argument);
    }
    result = a / b;
    return std::error_code();
}

int main() {
    int a = 10, b = 0, result;
    std::error_code ec = divide(a, b, result);
    if (ec) {
        std::cerr << "Hiba: " << ec.message() << std::endl;
    } else {
        std::cout << "Az eredmény: " << result << std::endl;
    }
    return 0;
}
