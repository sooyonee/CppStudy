#include <iostream>
#include <iomanip> // test implicit type casting
#include <cstdlib> // enables EXIT_SUCCESS, EXIT_FAILURE, exit, abort
using namespace std;

void printArray(const int array[][3], int rows) {
   for (int i = 0; i < rows; ++i) {
      for (int j = 0; j < 3; ++j) {
         cout << array[i][j] << " ";
      }
      cout << endl;
   }
}

int main() {
    cout << "1. Confusing points" << endl;
    int x;
    x = 5;
    cout << x++ << endl;  // Save x (5); Increment x (=6); Print old x (5).
    x = 5;
    cout << ++x << "\n" << endl;  // Increment x (=6); Print x (6).
    // This is confusing! Try to avoid! What is i=++i? What is i=i++?

    cout << "2. Implicit Type-Conversion vs. Explicit Type-Casting" << endl;
    cout << "  2-1. Implicit(Automatic) Type-Conversion" << endl;
    int i;
    double d;
    
    // print floating point number in fixed format with 1 decimal place
    cout << fixed << setprecision(1);
    
    i = 3;
    d = i;    // Assign an int value to double
    cout << "d = " << d << endl;  // 3.0
    
    d = 5.5;
    i = d;    // Assign a double value to int
    cout << "i = " << i << endl;  // 5 (truncated, no warning!)
    
    i = 6.6;  // Assign a double literal to int
    cout << "i = " << i << endl;  // 6 (truncated, no warning!)

    cout << "  2-2. Explicit Type-Casting" << endl;
    cout << fixed << setprecision(1);
 
    cout << (double)5 << endl;  // int 5 → double 5.0
    cout << (int)5.5 << endl;   // double 5.5 → int 5
    
    double aDouble = 5.6;
    int anInt = (int)aDouble; // return 5 and assign to anInt. aDouble does not change!
    
    // C++ also supports function-style type cast.
    cout << double(5) << endl;     // 5.0
    cout << int(5.5) << endl;      // 5
    cout << int(aDouble) << "\n" << endl;  // 5

    cout << "3. Array" << endl;
    int a3[] = {31, 32, 33, 34, 35};   // Size deduced from init values
    int a3Size = sizeof(a3)/sizeof(int);
    cout << "Size is " << a3Size << endl;   // 5
    for (int i = 0; i < a3Size; ++i) cout << a3[i] << " ";
    cout << endl;
    
    cout << "2D array" << endl;
    int myArray[][3] = {{8, 2, 4}, {7, 5, 2}}; // 2x3 initialized
                 // Only the first index can be omitted and implied
    printArray(myArray, 2);
}

