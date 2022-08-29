// a (pointer to object) -> b (call method / variable)
#include <iostream>
using namespace std;

class Polygon {
    protected:
        int width, height;
    public:
        void set_values(int a, int b) { width=a; height=b; }
        virtual int area() { return 0; }
        // redefined in a derived class
        // preserves its calling properties through references
        // allow a member of a derived class with the same name as one in the base class
        // to be appropriately called from the pointer (for precision!)
};

class Rectangle: public Polygon {
    public:
        int area() { return width*height; }
};

class Triangle: public Polygon {
    public:
        int area() { return width*height/2; }
};

int main() {
    Rectangle rect; Triangle trgl; Polygon poly;
    Polygon *ppoly1 = &rect;
    Polygon *ppoly2 = &trgl;
    Polygon *ppoly3 = &poly;
    ppoly1 -> set_values(4,5);
    ppoly2 -> set_values(4,2);
    ppoly3 -> set_values(4,5);
    cout << rect.area() << endl;
    cout << trgl.area() << endl;
    cout << poly.area() << endl;
    cout << ppoly1->area() << endl; // without virtual, prints 0
    cout << ppoly2->area() << endl;
    cout << ppoly3->area() << endl;
    return 0;
}