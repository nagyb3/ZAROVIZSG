#include <fstream>
#include <iostream>
using namespace std;

int main () {
   ofstream file;
   file.open ("example.txt");
   file << "This is an example.\n";
   file.close();
   return 0;
}
