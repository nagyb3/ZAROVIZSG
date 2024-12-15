#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream file("example.txt");

    if (file.good())
    {
        char buffer[20];

        while (!file.eof())
        {
            file.getline(buffer, 20);

            if (file.fail())
            {
                cout << "Hiba történt az állomány olvasása során." << endl;
                break;
            }

            cout << buffer << endl;
        }

        file.close();
    }
    else
    {
        cout << "Hiba történt az állomány megnyitása során.";
    }

    return 0;
}
