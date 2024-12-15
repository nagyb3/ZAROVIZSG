#include <iostream>

// Osztálysablon létrehozása
template <typename T>
class MyArray {
private:
    T *data; // adattagok
    int size;
public:
    // Konstruktor, másoló konstruktor és destruktor
    MyArray(int size): size(size) {
        data = new T[size];
    }
    MyArray(const MyArray& other) {
        size = other.size;
        data = new T[size];
        for (int i = 0; i < size; i++) {
            data[i] = other.data[i];
        }
    }
    ~MyArray() {
        delete[] data;
    }
    
    // Operátorok az osztálysablonhoz
    T& operator[](int index) {
        return data[index];
    }
    const T& operator[](int index) const {
        return data[index];
    }
    int Size() const {
        return size;
    }
};

int main() {
    // A sablonos típus definiálása
    MyArray<int> intArray(5);
    for (int i = 0; i < intArray.Size(); i++) {
        intArray[i] = i * 2;
    }
    std::cout << "intArray: ";
    for (int i = 0; i < intArray.Size(); i++) {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;
    
    // Másik típus definiálása
    MyArray<double> doubleArray(3);
    doubleArray[0] = 1.23;
    doubleArray[1] = 4.56;
    doubleArray[2] = 7.89;
    std::cout << "doubleArray: ";
    for (int i = 0; i < doubleArray.Size(); i++) {
        std::cout << doubleArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
