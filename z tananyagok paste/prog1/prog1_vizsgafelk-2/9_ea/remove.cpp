#include <cstdio>

using namespace std;

int main () {
   int result;
   result= remove( "newname.txt" );
   if ( result == 0 )
      cout << "File deleted";
   else
      cout << "Error deleting file";
   return 0;
}
