#include <iostream> 
#include <string>   
using namespace std;
 
class Circle {
private:
   double radius;   
   string color;    
 
public:
   Circle(double r = 1.0, string c = "red") { // Constructor
      radius = r;
      color = c;
   }
 
   double getRadius() {
      return radius;
   }
 
   string getColor() {
      return color;
   }
 
   double getArea() {
      return radius*radius*3.1416;
   }
};
 
int main() {
    // Circle c1;   // Declare c1 as an instance of Circle, and invoke the default constructor
    // Circle c1(); // Error!
    //             // (This declares c1 as a function that takes no parameter and returns a Circle instance)

    Circle c1(1.2, "blue");
    cout << "Radius=" << c1.getRadius() << " Area=" << c1.getArea()
         << " Color=" << c1.getColor() << endl;
    
    Circle c2(3.4);
    cout << "Radius=" << c2.getRadius() << " Area=" << c2.getArea()
         << " Color=" << c2.getColor() << endl;
    
    Circle c3;
    cout << "Radius=" << c3.getRadius() << " Area=" << c3.getArea()
         << " Color=" << c3.getColor() << endl;
    return 0;

    Circle c4(7.8, "blue");
    cout << "Radius=" << c4.getRadius() << " Area=" << c4.getArea()
         << " Color=" << c4.getColor() << endl;
 
    // Copy Constructor
    Circle c5(c4);
    cout << "Radius=" << c5.getRadius() << " Area=" << c5.getArea()
         << " Color=" << c5.getColor() << endl;

    Circle c6(5.6, "orange"), c7;
    cout << "Radius=" << c6.getRadius() << " Area=" << c6.getArea()
         << " Color=" << c6.getColor() << endl;

    cout << "Radius=" << c7.getRadius() << " Area=" << c7.getArea()
         << " Color=" << c7.getColor() << endl;
    
    c7 = c6; // memberwise copy assignment
    cout << "Radius=" << c7.getRadius() << " Area=" << c7.getArea()
         << " Color=" << c7.getColor() << endl;

    Circle c8 = c6;  // Invoke the copy constructor, NOT copy assignment operator
                     // Same as Circle c8(c6)
}