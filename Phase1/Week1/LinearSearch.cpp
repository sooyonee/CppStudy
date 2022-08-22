#include <iostream>
using namespace std;
 
int linearSearch(const int a[], int size, int key);
 
int main() {
   const int SIZE = 8;
   int a1[SIZE] = {8, 4, 5, 3, 2, 9, 4, 1};
 
   cout << linearSearch(a1, SIZE, 8) << endl;
   cout << linearSearch(a1, SIZE, 4) << endl;
   cout << linearSearch(a1, SIZE, 99) << endl;
}
 
int linearSearch(const int a[], int size, int key) {
   for (int i = 0; i < size; ++i) {
      if (a[i] == key) return i;
   }
   return size;
}