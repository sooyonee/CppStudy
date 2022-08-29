#include <iostream>
using namespace std;

int &squareRef(int &); // input, return reference
int *squarePtr(int *); // input, return pointer

int main() {
   int number1 = 8;
   cout <<  "Address of number1 in main() &number1: " << &number1 << endl;
   int &result = squareRef(number1);
   cout <<  "Address of result in main() &result: " << &result << endl;
   cout << result << endl;   // 64
   cout << number1 << endl;  // 64
 
   int number2 = 9;
   cout <<  "Address of number2 in main() &number2: " << &number2 << endl;
   int *pResult = squarePtr(&number2);
   cout <<  "Address of result in main() pResult: " << pResult << endl;
   cout << *pResult << endl;   // 81
   cout << number2 << endl;    // 81
}
 
int &squareRef(int &rNumber) {
   cout <<  "Address of rNumber in squareRef(): " << &rNumber << endl;
   rNumber *= rNumber;
   return rNumber;
}
 
int *squarePtr(int *pNumber) {
   cout <<  "Address of pNumber in squarePtr(): " << pNumber << endl;
   *pNumber *= *pNumber;
   return pNumber;
}