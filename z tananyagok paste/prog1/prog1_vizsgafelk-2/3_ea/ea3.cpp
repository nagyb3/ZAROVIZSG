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

    //t�lcsordul�s

    int a = 10;
    int* b = &a;
    //int* c = a;

    cout << a << " " << &a << " " << b << " " << &b << endl;

    cout << *b << endl;
    cout << sizeof(b) << endl;

    *b = 15;
    cout << a << " " << *b << endl;

    int* ptr = NULL;
    cout << "A pointer �rt�ke:" << ptr;
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
        1. (param�ter�tad�s gyakorl�s)Legyen egy strukt�ra egy szem�lyre alapadatokkal, majd egy f�ggv�ny sz�m�tsa ki, hogy mennyi kal�ri�t �s egyebet kell bevinnie. Legyen egy f�ggv�ny, aminek a bemenete, hogy mennyi csirkerizst fogyasztott, �s ez alapj�n cs�kkenti a napi fennmarad� kal�riaig�nyt. Egy f�ggv�ny adja meg, hogy mennyi csirkerizst kell megennie ma, hogy 0-ra j�jj�n ki.
        2. pointer mem�riaj�t�k. Legyen ki�rva 10 c�m, �s sz�mokkal lehessen megadni, hogy melyik 2-t ford�tja fel. Ha a v�ltoz� �rt�ke ugyanaz, akkor azt k�s�bb m�r nem kell megjelen�teni.
        3. GOTO kalandj�t�k. Nagyon r�vid, 5-10 �zenetv�lt�sos j�t�k mondjuk labirintussal. 4 v�laszb�l v�laszthat a felhaszn�l�, az alapj�n c�mk�vel meg tov�bb �s �rja a k�vetkez�t. Zs�kutca, meghalt�l, nyert�l.
        4. N�i geek herok.


    
    */

    return 0;
}