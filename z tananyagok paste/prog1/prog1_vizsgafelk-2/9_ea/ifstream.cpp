#include <fstream>
#include <iostream>
using namespace std;

int main () {
   char data[100];
   ifstream file;
   file.open("example.txt");
   file >> data;
   cout << data << endl;
   file.close();
   return 0;
}
