class MyException {};

try {
    throw MyException();
}
catch(std::exception& e) {
    // Ez sosem fut le, mert a MyException nem származik az std::exception osztályból
}
