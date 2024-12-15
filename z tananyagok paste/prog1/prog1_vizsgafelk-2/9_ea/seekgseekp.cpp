#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char buffer[20];
    ofstream file("example.txt", ios::out);

    if (file.is_open())
    {
        // Az írás pozíciójának állítása
        file.seekp(50);

        // Adatok írása az állományba
        file.write("Hello, world!", 13);

        // Az olvasás pozíciójának állítása
        file.seekg(10);

        // Adatok olvasása az állományból
        file.read(buffer, 20);

        file.close();
    }
    else
    {
        cout << "Hiba történt az állomány megnyitása során.";
    }

    return 0;
}
