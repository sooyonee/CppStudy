#include <iostream>
using namespace std;
 
#define SQUARE(x) x*x     // Macro
 
inline int square(int x) { return x*x; }  // inline function
 
int main() {
   cout << SQUARE(5) << endl;
   int x = 2, y = 3;
   cout << SQUARE(x) << endl;
 
   // macro
   cout << SQUARE(5+5) << endl;
   cout << square(5+5) << endl;
   cout << SQUARE(x+y) << endl;
   cout << square(x+y) << endl;
 
   cout << SQUARE(++x) << endl;
   cout << x << endl;          
   cout << square(++y) << endl;
   cout << y << endl;          
}