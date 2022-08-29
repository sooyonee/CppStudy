#include <iostream>
using namespace std;

template <typename T>
void mySwap (T &a, T &b);

// Overloading
template <typename T>
void mySwap(T a[], T b[], int size);
 
template <typename T>
void print(const T * const array, int size);

// Explicit Specialization
template <>
void mySwap<int> (int &a, int &b);

int main() {
    int i1 = 1, i2 = 2;
    mySwap(i1, i2);
    cout << "i1 is " << i1 << ", i2 is " << i2 << endl;

    char c1 = 'a', c2 = 'b';
    mySwap(c1, c2);
    cout << "c1 is " << c1 << ", c2 is " << c2 << endl;

    double d1 = 1.1, d2 = 2.2;
    mySwap(d1, d2);
    cout << "d1 is " << d1 << ", d2 is " << d2 << endl;

    const int SIZE = 3;
    int ar1[] = {1, 2, 3}, ar2[] = {4, 5, 6};
    mySwap(ar1, ar2, SIZE);
    print(ar1, SIZE);
    print(ar2, SIZE);
}

template <typename T>
void mySwap(T &a, T &b) {
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template <typename T>
void mySwap(T a[], T b[], int size) {
    T temp;
    for (int i = 0; i < size; ++i) {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}
 
template <typename T>
void print(const T * const array, int size) {
    cout << "(";
    for (int i = 0; i < size; ++i) {
        cout << array[i];
        if (i < size - 1) cout << ",";
    }
    cout << ")" << endl;
}

template <>
void mySwap<int>(int &a, int &b) {
    cout << "Specialization" << endl;
    int temp;
    temp = a;
    a = b;
    b = temp;
}