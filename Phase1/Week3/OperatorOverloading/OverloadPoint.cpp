/*
How to execute
g++ -o OverloadPoint.exe OverloadPoint.cpp Point.cpp
./OverloadPoint.exe
*/
#include "Point.h"
#include <iostream>
using namespace std;
 
int main() {
    Point p1(1, 2), p2(4, 5);
    // Use overloaded operator +
    Point p3 = p1 + p2;
    p1.print();  // (1,2)
    p2.print();  // (4,5)
    p3.print();  // (5,7)
    
    // Invoke via usual dot syntax, same as p1+p2
    Point p4 = p1.operator+(p2);
    p4.print();  // (5,7)
    
    // Chaining
    Point p5 = p1 + p2 + p3 + p4;
    p5.print();  // (15,21)
}