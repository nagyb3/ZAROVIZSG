#include <cstdio>
#include <iostream>
using namespace std;

void func(int a, int b)
{
    a += b;
    cout << "In func, a = " << a << " b = " << b << endl;
}

void swapnum(int* i, int* j)
{
    int temp = *i;
    *i = *j;
    *j = temp;
}

void multiply(int& a, int num) {
    a = a * num;
}

int factorial(int n) {
    if (n > 1) {
        return n * factorial(n - 1);
    }
    else {
        return 1;
    }
}


int main() {

    //túlcsordulás

    int a = 10;
    int* b = &a;
    //int* c = a;

    cout << a << " " << &a << " " << b << " " << &b << endl;

    cout << *b << endl;
    cout << sizeof(b) << endl;

    *b = 15;
    cout << a << " " << *b << endl;

    int* ptr = NULL;
    cout << "A pointer értéke:" << ptr;
    if (ptr) {
        cout << "Nem null" << endl;
    }
    else {
        cout << "null" << endl;
    }

    int z = 10;
    int* zptr = &z;
    int** zpptr = &zptr;

    cout << z << " " << *zptr << " " << **zpptr << endl;

    int num = 10;

    /*if (num % 2 == 0)
        // jump to even
        goto even;
    else
        // jump to odd
        goto odd;

even:
    printf("%d is even", num);
    // return if even
    return 0;
odd:
    printf("%d is odd", num);*/

    factorial(10);

    int x = 5, y = 7;

    // Passing parameters by value
    func(x, y);
    cout << "In main, x = " << x << " y = " << y << endl;

    int a1 = 10, b1 = 20;

    // passing parameters by reference
    swapnum(&a1, &b1);

    cout << "a is " << a1 << " and b is " << b1 << endl;

    int m = 2;
    multiply(m, 10);

    cout << "m is " << m << endl;

    /*
        1. (paraméterátadás gyakorlás)Legyen egy struktúra egy személyre alapadatokkal, majd egy függvény számítsa ki, hogy mennyi kalóriát és egyebet kell bevinnie. Legyen egy függvény, aminek a bemenete, hogy mennyi csirkerizst fogyasztott, és ez alapján csökkenti a napi fennmaradó kalóriaigényt. Egy függvény adja meg, hogy mennyi csirkerizst kell megennie ma, hogy 0-ra jöjjön ki.
        2. pointer memóriajáték. Legyen kiírva 10 cím, és számokkal lehessen megadni, hogy melyik 2-t fordítja fel. Ha a változó értéke ugyanaz, akkor azt késõbb már nem kell megjeleníteni.
        3. GOTO kalandjáték. Nagyon rövid, 5-10 üzenetváltásos játék mondjuk labirintussal. 4 válaszból választhat a felhasználó, az alapján címkével meg tovább és írja a következõt. Zsákutca, meghaltál, nyertél.
        4. Nõi geek herok.


    
    */

    return 0;
}