// =0 : pure virtual function (no definition)
// ABC : Classes with at least one pure virtual function
//     : cannot be used to instantiate objects but to create pointers
#include <iostream>
using namespace std;

class Polygon {
    protected:
        int width, height;
    public:
        void set_values(int a, int b) { width=a; height=b; }
        virtual int area (void) =0; // till here, seems useless... but...
        // objects of different but related types (Rectangle, Triangle) using a unique type of pointer (Polygon)
        // allows a member of ABC Polygon to use 'this'
        void printarea() {cout << this->area() << endl;}
};

class Rectangle: public Polygon {
    public:
        int area(void) { return (width * height); }
};

class Triangle: public Polygon {
    public:
        int area(void) { return (width * height / 2); }
};

int main () {
    Rectangle rect;
    Triangle trgl;
    Polygon *ppoly1 = &rect;
    Polygon *ppoly2 = &trgl;
    ppoly1->set_values (4,5);
    ppoly2->set_values (4,5);
    cout << ppoly1->area() << '\n';
    cout << ppoly2->area() << '\n';
    ppoly1-> printarea();
    ppoly2-> printarea();
    return 0;
}
