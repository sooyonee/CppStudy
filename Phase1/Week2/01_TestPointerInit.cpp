// Declaring Pointers
// type *ptr;
// type* ptr;
// type * ptr;
#include <iostream>
using namespace std;
int main() {
    int number = 88;
    int *pNumber = &number; 
    cout << pNumber << endl;  // content of pNumber = address of number
    cout << &number << endl;  // address of number
    cout << *pNumber << endl; // value pointed by pNumber
    cout << number << endl;
    *pNumber = 99;
    cout << pNumber << endl;
    cout << &number << endl;
    cout << *pNumber << endl;
    cout << number << endl;

    cout << &pNumber << endl; // address of pointer

    int *p = NULL; // Null pointer : points to nothing
}