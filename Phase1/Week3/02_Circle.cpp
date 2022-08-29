// Four ways to construct objects of a class whose constructor takes a "single parameter"
#include <iostream>
using namespace std;

class Circle {
        double radius;
    public:
        Circle(double r) { radius = r; }
        double circum() {return 2*radius*3.14159265;}
        double area() {return radius*radius*3.14159265;}
};

class Cylinder {
        Circle base;
        double height;
    public:
        Cylinder(double r, double h) : base (r), height (h) {}
        double volume() {return base.area() * height;}
};

int main () {
    Circle foo (10.0);   // functional form
    Circle bar = 20.0;   // assignment init.
    // Circle baz {30.0};   // uniform init.
    // Circle qux = {40.0}; // POD-like

    cout << "foo's circumference: " << foo.circum() << endl;
    cout << "bar's circumference: " << bar.circum() << endl;

    Cylinder baz (10, 20);
    cout << "baz's volume: " << baz.volume() << endl;
    return 0;
};