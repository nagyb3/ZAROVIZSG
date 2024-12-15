class MyException : public std::exception {
public:
    virtual const char* what() const throw() {
        return "Hiba történt";
    }
};

try {
    throw MyException();
}
catch(std::exception& e) {
    std::cout << "Hiba: " << e.what() << std::endl; // Általános hibaüzenet, nem ad semmi konkrét információt
}
