#include <iostream>
using namespace std;

int square(int);

int main() {
    int number = 8;
    cout <<  "In main(): " << &number << endl;
    cout << number << endl;         // 8
    cout << square(number) << endl; // 64
    cout << number << endl;         // 8 - no change
}
 
int square(int n) {  // non-const
    cout <<  "In square(): " << &n << endl;  // copy of number! address different!!
    n *= n;           // clone modified inside the function
    return n;
}