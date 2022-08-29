#include <iostream>
using namespace std;
 
int arithmetic(int, int, int (*)(int, int));
int add(int, int);
int sub(int, int);
 
int add(int n1, int n2) { return n1 + n2; }
int sub(int n1, int n2) { return n1 - n2; }
 
int arithmetic(int n1, int n2, int (*operation) (int, int)) {
   return (*operation)(n1, n2);
}
 
int main() {
   int number1 = 5, number2 = 6;
 
   cout << arithmetic(number1, number2, add) << endl;
   cout << arithmetic(number1, number2, sub) << endl;
}