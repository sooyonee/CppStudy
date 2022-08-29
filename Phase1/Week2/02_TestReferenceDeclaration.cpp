#include <iostream>
using namespace std;

int main() {
    int number = 88;
    int &refNumber = number; // Both refNumber and number refers to the same value

    cout << number << endl;
    cout << refNumber << endl;

    refNumber = 99;
    cout << number << endl;
    cout << refNumber << endl;

    number = 55;
    cout << number << endl;
    cout << refNumber << endl;
}