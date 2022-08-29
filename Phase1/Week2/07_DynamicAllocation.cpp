#include <iostream>
#include <cstdlib>
using namespace std;

int *p1, *p2;

void allocate() {
    p1 = new int;
    *p1 = 88;
    p2 = new int(99);
}

int main() {
    allocate();
    cout << *p1 << endl;  // 88
    cout << *p2 << endl;  // 99
    delete p1;  // Deallocate
    delete p2;
    // return 0;

    const int SIZE = 5;
    int *pArray;
    pArray = new int[SIZE];

    for (int i=0; i<SIZE; i++) {
        *(pArray+i) = rand()%100;
    }
    for (int i=0; i<SIZE; i++) {
        cout << (pArray+i) << endl; // refer to 08_PointerArray.cpp !!
    }
    for (int i=0; i<SIZE; i++) {
        cout << *(pArray+i) << " ";
    }
    cout << endl;

    delete[] pArray;
    return 0;
}