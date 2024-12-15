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

class Account {
public:
    float salary = 60000;
    void printsalary() { cout << salary << endl; }
};
class Programmer : public Account {
public:
    float bonus = 5000;
};

//láthatóság magyarázat, getter setter értelme
//csak getter vagy csak setter mire jó?

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

//többszörös öröklõdés

class A
{
protected:
    int a;
public:
    void get_a(int n)
    {
        a = n;
    }
};

class B
{
protected:
    int b;
public:
    void get_b(int n)
    {
        b = n;
    }
};
class C : public A, public B
{
public:
    void display()
    {
        std::cout << "The value of a is : " << a << std::endl;
        std::cout << "The value of b is : " << b << std::endl;
        cout << "Addition of a and b is : " << a + b;
    }
};

/*
    polimorfizmus: compile vagy runtime
    compile time: The overloaded functions are invoked by matching the type and number of arguments. 
    This information is available at the compile time and, therefore, compiler selects the appropriate function at the compile time. 
    It is achieved by function overloading and operator overloading which is also known as static binding or early binding.

    runtime: The overloaded functions are invoked by matching the type and number of arguments. 
    This information is available at the compile time and, therefore, compiler selects the appropriate function at the compile time. 
    It is achieved by function overloading and operator overloading which is also known as static binding or early binding.

*/

class base {
public:
    virtual void print()
    {
        cout << "print base class\n";
    }

    void show()
    {
        cout << "show base class\n";
    }
};

class derived : public base {
public:
    void print()
    {
        cout << "print derived class\n";
    }

    void show()
    {
        cout << "show derived class\n";
    }
};

//overloading: operator és függvény

class Cal {
public:
    static int add(int a, int b) {
        return a + b;
    }
    static int add(int a, int b, int c)
    {
        return a + b + c;
    }
};

//overriding

class Animal {
public:
    void eat() {
        cout << "Eating...";
    }
};
class Dog : public Animal
{
public:
    void eat()
    {
        cout << "Eating bread...";
    }
};

/*
    A C++ virtual function is a member function in the base class that you redefine in a derived class. It is declared using the virtual keyword.
It is used to tell the compiler to perform dynamic linkage or late binding on the function.
There is a necessity to use the single pointer to refer to all the objects of the different classes. So, we create the pointer to the base class that refers to all the derived objects. But, when base class pointer contains the address of the derived class object, always executes the base class function. This issue can only be resolved by using the 'virtual' function.
A 'virtual' is a keyword preceding the normal declaration of a function.
When the function is made virtual, C++ determines which function is to be invoked at the runtime based on the type of the object pointed by the base class pointer.

Late binding or dynamic linkage: In late binding function call is resolved during runtime. Therefore compiler determines the type of object at runtime, and then binds the function call.

Szabályok: Virtual functions must be members of some class.
Virtual functions cannot be static members.
They are accessed through object pointers.
They can be a friend of another class.
A virtual function must be defined in the base class, even though it is not used.
The prototypes of a virtual function of the base class and all the derived classes must be identical. If the two functions with the same name but different prototypes, C++ will consider them as the overloaded functions.
We cannot have a virtual constructor, but we can have a virtual destructor
Consider the situation when we don't use the virtual keyword.

Tisztán virtuális függvények:
    A virtual function is not used for performing any task. It only serves as a placeholder.
When the function has no definition, such function is known as "do-nothing" function.
The "do-nothing" function is known as a pure virtual function. A pure virtual function is a function declared in the base class that has no definition relative to the base class.
A class containing the pure virtual function cannot be used to declare the objects of its own, such classes are known as abstract base classes.
The main objective of the base class is to provide the traits to the derived classes and to create the base pointer used for achieving the runtime polymorphism.
*/

class Base2
{
public:
    virtual void show() = 0;
};
class Derived2 : public Base2
{
public:
    void show()
    {
        std::cout << "Derived class is derived from the base class." << std::endl;
    }
};

//Interfész és absztrakt osztály:
/*
Abstract classes are the way to achieve abstraction in C++. Abstraction in C++ is the process to hide the internal details and showing functionality only. Abstraction can be achieved by two ways:

Abstract class
Interface
Abstract class and interface both can have abstract methods which are necessary for abstraction.

In C++ class is made abstract by declaring at least one of its functions as <>strong>pure virtual function. A pure virtual function is specified by placing "= 0" in its declaration. Its implementation must be provided by derived classes.
*/

/*
Absztrakció

Data Abstraction is a process of providing only the essential details to the outside world and hiding the internal details, i.e., representing only the essential details in the program.
Data Abstraction is a programming technique that depends on the seperation of the interface and implementation details of the program.
Let's take a real life example of AC, which can be turned ON or OFF, change the temperature, change the mode, and other external components such as fan, swing. But, we don't know the internal details of the AC, i.e., how it works internally. Thus, we can say that AC seperates the implementation details from the external interface.
C++ provides a great level of abstraction. For example, pow() function is used to calculate the power of a number without knowing the algorithm the function follows.

In C++ program if we implement class with private and public members then it is an example of data abstraction.

Data Abstraction can be achieved in two ways:

Abstraction using classes
Abstraction in header files.

Abstraction using classes: An abstraction can be achieved using classes. A class is used to group all the data members and member functions into a single unit by using the access specifiers. A class has the responsibility to determine which data member is to be visible outside and which is not.

Abstraction in header files: An another type of abstraction is header file. For example, pow() function available is used to calculate the power of a number without actually knowing which algorithm function uses to calculate the power. Thus, we can say that header files hides all the implementation details from the user.

Access Specifiers Implement Abstraction:

Public specifier: When the members are declared as public, members can be accessed anywhere from the program.
Private specifier: When the members are declared as private, members can only be accessed only by the member functions of the class.

Advantages Of Abstraction:
Implementation details of the class are protected from the inadvertent user level errors.
A programmer does not need to write the low level code.
Data Abstraction avoids the code duplication, i.e., programmer does not have to undergo the same tasks every time to perform the similar operation.
The main aim of the data abstraction is to reuse the code and the proper partitioning of the code across the classes.
Internal implementation can be changed without affecting the user level code.
*/



/*class Vehicle {
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
};*/

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

    //Car2 carObj1("BMW", "X5", 1999);
    //Car2 carObj2("Ford", "Mustang", 1969);

    // Print values
    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";

    Programmer p1;
    cout << "Salary: " << p1.salary << endl;
    cout << "Bonus: " << p1.bonus << endl;

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

    base* bptr;
    derived d;
    bptr = &d;

    // Virtual function, binded at runtime
    bptr->print();

    // Non-virtual function, binded at compile time
    bptr->show();

    Cal C;                                                    //     class object declaration.   
    cout << C.add(10, 20) << endl;
    cout << C.add(12, 20, 23);

    Dog dog = Dog();
    dog.eat();

    Base2* bptr2;
    //Base b;  
    Derived2 d2;
    bptr2 = &d2;
    bptr2->show();

    /*Car3 myCar;
    myCar.honk();
    cout << myCar.brand + " " + myCar.model;*/
    return 0;

    //https://www.javatpoint.com/cpp-function-overriding innen minden kell
}