// Create a Car class with some attributes
#include <iostream>
#include <string>

using namespace std;

class Car {
public:
    string brand;
    string model;
    int year;
};

class MyClass {        // The class
public:              // Access specifier
    void myMethod() {  // Method/function defined inside the class
        cout << "Hello World!";
    }
    void myMethod2();   // Method/function declaration
};

void MyClass::myMethod2() {
    cout << "Hello World!";
}

class Car2 {        // The class
public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute
    Car2(string x, string y, int z) { // Constructor with parameters
        brand = x;
        model = y;
        year = z;
        cout << "Konstruktor hívás" << endl;
    }

    ~Car2() {
        cout << "Destruktor" << endl;
    };
};

class Employee {
private:
    // Private attribute
    int salary;

public:
    // Setter
    void setSalary(int s) {
        salary = s;
    }
    // Getter
    int getSalary() {
        return salary;
    }
};

class Vehicle {
public:
    string brand = "Ford";
    void honk() {
        cout << "Tuut, tuut! \n";
    }
};

// Derived class
class Car3 : public Vehicle {
public:
    string model = "Mustang";
};

int main() {
    // Create an object of Car
    Car carObj1;
    carObj1.brand = "BMW";
    carObj1.model = "X5";
    carObj1.year = 1999;

    // Create another object of Car
    Car carObj2;
    carObj2.brand = "Ford";
    carObj2.model = "Mustang";
    carObj2.year = 1969;

    // Print attribute values
    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";

    MyClass myObj;     // Create an object of MyClass
    myObj.myMethod();  // Call the method
    myObj.myMethod2();

    Car2 carObj1("BMW", "X5", 1999);
    Car2 carObj2("Ford", "Mustang", 1969);

    // Print values
    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";

    /*
    public - members are accessible from outside the class
private - members cannot be accessed (or viewed) from outside the class
protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes. You will learn more about Inheritance later.
*/

    /*
    The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users. To achieve this, you must declare class variables/attributes as private (cannot be accessed from outside the class). If you want others to read or modify the value of a private member, you can provide public get and set methods.
    */

    Employee myObj2;
    myObj2.setSalary(50000);
    cout << myObj2.getSalary();

    Car3 myCar;
    myCar.honk();
    cout << myCar.brand + " " + myCar.model;
    return 0;

    //https://www.javatpoint.com/cpp-function-overriding innen minden kell
}