#include <cstdio>

using namespace std;

int main () {
   int result;
   result= rename( "example.txt" , "newname.txt" );
   if ( result == 0 )
      cout << "File renamed";
   else
      cout << "Error renaming file";
   return 0;
}
