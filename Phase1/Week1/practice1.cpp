#include <iostream>
#include <cmath>
#include <climits> // integer limits
#define PI 3.1415926545 // DO NOT terminate preprocessor directive with a semi-colon
/*
const double PI = 3.1415926545; // this is possible (non-modifiable variables)
#include <cfloat> // floating numbers
#include <limits>
*/
using namespace std;

void cylinder(double r, double h) {
    cout << PI*r*r*h << endl;
}

int main() {
    int r; int h;
    cout << "radius value: ";
    cin >> r;
    cout << "height value: ";
    cin >> h;
    cout << "The volume of the cylinder is " ;
 
    cylinder(3,5);
    cout << "sizeof(char) is " << sizeof(char) << " bytes " << endl;
    cout << "sizeof(short) is " << sizeof(short) << " bytes " << endl;
    cout << "sizeof(int) is " << sizeof(int) << " bytes " << endl;
    cout << "sizeof(long) is " << sizeof(long) << " bytes " << endl;
    cout << "sizeof(long long) is " << sizeof(long long) << " bytes " << endl;
    cout << "sizeof(float) is " << sizeof(float) << " bytes " << endl;
    cout << "sizeof(double) is " << sizeof(double) << " bytes " << endl;
    cout << "sizeof(long double) is " << sizeof(long double) << " bytes " << endl;
    cout << "sizeof(bool) is " << sizeof(bool) << " bytes " << endl;
    cout << "\n" << endl;
    cout << "int max = " << INT_MAX << endl;
    cout << "int min = " << INT_MIN << endl;
    cout << "unsigned int max = " << UINT_MAX << endl;
    cout << "long long max = " << LLONG_MAX << endl;
    cout << "long long min = " << LLONG_MIN << endl;
    cout << "unsigned long long max = " << ULLONG_MAX << endl;
    cout << "Bits in char = " << CHAR_BIT << endl;
    cout << "char max = " << CHAR_MAX << endl;
    cout << "char min = " << CHAR_MIN << endl;
    cout << "signed char max = " << SCHAR_MAX << endl;
    cout << "signed char min = " << SCHAR_MIN << endl;
    cout << "unsigned char max = " << UCHAR_MAX << endl;
    return 0;
}