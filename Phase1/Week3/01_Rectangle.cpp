#include <iostream>
using namespace std;

class Rectangle {
        int width, height;
    public:
        Rectangle ();
        Rectangle (int, int);
        // Rectangle (int x, int y) : width(x), height(y) {}
        void set_values (int, int);
        int area(void) {return width*height;} // difference btw area() vs. area(void) ??
};

Rectangle::Rectangle (int a, int b) {
    width = a; height = b;
}

void Rectangle::set_values (int x, int y) {
    width = x;
    height = y;
}

int main() {
    // Rectangle rect;
    // rect.set_values (3,4);
    // cout << "area: " << rect.area() << endl;
    Rectangle rectb (5, 6);
    cout << "area: " << rectb.area() << endl;
    return 0;
};