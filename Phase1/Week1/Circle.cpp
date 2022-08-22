/* 
The Circle class Implementation 
You CANNOT place the default arguments in the implementation
(they shall be placed in the header)
*/
#include "Circle.h"
 
// Constructor
Circle::Circle(double r, string c) {
   radius = r;
   color = c;
}
 
double Circle::getRadius() const {
   return radius;
}
 
void Circle::setRadius(double r) {
   radius = r;
}
 
string Circle::getColor() const {
   return color;
}
 
void Circle::setColor(string c) {
   color = c;
}
 
double Circle::getArea() const {
   return radius*radius*3.14159265;
}