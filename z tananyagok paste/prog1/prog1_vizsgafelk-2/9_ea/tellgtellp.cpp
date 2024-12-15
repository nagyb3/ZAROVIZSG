#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream file("example.txt", ios::out);

    if (file.is_open())
    {
        // Az írás pozíciójának állítása
        file.seekp(50);

        // Adatok írása az állományba
        file.write("Hello, world!", 13);

        cout << "Az írás pozíciója: " << file.tellp() << endl;

        // Az olvasás pozíciójának állítása
        file.seekg(10);

        char buffer[20];

        // Adatok olvasása az állományból
        file.read(buffer, 20);

        cout << "Az olvasás pozíciója: " << file.tellg() << endl;

        file.close();
    }
    else
    {
        cout << "Hiba történt az állomány megnyitása során.";
    }

    return 0;
}
