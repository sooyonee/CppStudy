#include <iostream>
#include <cstdlib>  // rand(), srand()
#include <ctime>    // time()
using namespace std;
 
int main() {
   cout << "RAND_MAX is " << RAND_MAX << endl;   // 32767
 
   for (int i = 0; i < 10; ++i) {
      cout << rand() % 100 << " "; 
   }
   cout << endl;
 
   srand(time(0));
   for (int i = 0; i < 10; ++i) {
      cout << rand() % 100 << " "; 
   }
   cout << endl;
}