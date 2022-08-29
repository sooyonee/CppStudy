// array's name : pointer pointing to the first element.
// numbers : int array / int pointer
// numbers = &numbers[0]
// *numbers = numbers[0]
// *(numbers+i) = numbers[i]

#include <iostream>
using namespace std;
 
int main() {
   const int SIZE = 5;
   int numbers[SIZE] = {11, 22, 44, 21, 41}; 
 
   cout << &numbers[0] << endl;
   cout << numbers << endl; 
   cout << *numbers << endl;
   cout << *(numbers + 1) << endl;
   cout << *(numbers + 4) << endl;
}