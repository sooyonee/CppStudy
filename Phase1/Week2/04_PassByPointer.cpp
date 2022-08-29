#include <iostream>
using namespace std;
 
void square(int *); // type should be void!
 
int main() {
   int number = 8;
   cout <<  "In main(): " << &number << endl;
   cout << number << endl;   // 8
   square(&number);          // Pass an address
   cout << number << endl;   // 64
}
 
void square(int *pNumber) {  // Function takes an int pointer (non-const)
   cout <<  "In square(): " << pNumber << endl; 
   *pNumber *= *pNumber;      // de-referencing to get the value pointed-to
}