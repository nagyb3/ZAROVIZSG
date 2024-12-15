class MyException {
public:
    MyException(const std::string& message) : message_(message) {}
    std::string message() const { return message_; }
private:
    std::string message_;
};

void foo() {
    throw MyException("Hiba történt!");
}

int main() {
    try {
        foo();
    }
    catch (std::exception& ex) {
        std::cerr << ex.what() << std::endl;
    }
}
