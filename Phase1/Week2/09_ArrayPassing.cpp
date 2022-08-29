// Array is passed by reference! 
// either int[] or int * (following are equiv.)
// int max(int numbers[], int size);
// int max(int *numbers, int size);
// int max(int number[50], int size); // 50 is actually ignored.

// unless declare as const variable, modifiable inside the function

// To write a function that operates on a range of the given array, 
// you can pass the begin pointer and the end pointer

// const int *p" : *p (content pointed-to) is constant, but p is not constant.
#include <iostream>
using namespace std;
 
int max(const int arr[], int size);
void replaceByMax(int arr[], int size);
void print(const int arr[], int size);
void fun(const int *arr, int size);
 
int main() {
   const int SIZE = 4;
   int numbers[SIZE] = {11, 22, 33, 22};
   print(numbers, SIZE);
   cout << max(numbers, SIZE) << endl;
   replaceByMax(numbers, SIZE);
   print(numbers, SIZE);
   cout << "sizeof in main() is " << sizeof(numbers) << endl;
   cout << "address in main() is " << numbers << endl;

   fun(numbers, SIZE);
}
 
// The array is declared const, and cannot be modified inside the function.
int max(const int arr[], int size) {
   int max = arr[0];
   for (int i = 1; i < size; ++i) {
      if (max < arr[i]) max = arr[i];
   }
   return max;
}
 
// Array is passed by reference. Modify the caller's copy.
void replaceByMax(int arr[], int size) {
   int maxValue = max(arr, size);
   for (int i = 0; i < size; ++i) {
      arr[i] = maxValue;
   }
}
 
void print(const int arr[], int size) {
   cout << "{";
   for (int i = 0; i < size; ++i) {
      cout << arr[i];
      if (i < size - 1) cout << ",";
   }
   cout << "}" << endl;
}

void fun(const int *arr, int size) {
   cout << "sizeof in function is " << sizeof(arr) << endl;
   cout << "address in function is " << arr << endl;
}

// {11,22,33,22}
// 33
// {33,33,33,33}
// sizeof in main() is 16
// address in main() is 0x7ff7bf6b13b0
// sizeof in function is 8
// address in function is 0x7ff7bf6b13b0