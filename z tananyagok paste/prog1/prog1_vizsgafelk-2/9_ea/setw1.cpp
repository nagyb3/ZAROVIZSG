#include <iostream>
#include <iomanip>  // Manipulátorok használata miatt
using namespace std;

int main() {
   int x;
   cout << "Add meg az x értékét: ";
   cin >> x;
   cout << "Az x tízszerese: " << setw(5) << x * 10 << endl;
   return 0;
}
