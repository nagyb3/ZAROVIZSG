class MyException : public std::exception {
public:
    virtual const char* what() {
        return "Hiba történt";
    }
};

try {
    throw MyException();
}
catch(std::exception& e) {
    // Az std::exception::what() metódusa nem garantál kivételdobást, így lehet, hogy a try-catch blokk nem fogja elkapni a kivételt
}
