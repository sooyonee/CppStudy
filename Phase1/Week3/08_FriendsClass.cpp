#include <iostream>
using namespace std;

class Square; // necessary since Rectangle uses Square when initializing

class Rectangle {
        int width, height;
    public:
        int area () {return (width * height);}
        void convert (Square a);
};

class Square {
    friend class Rectangle; // Square allows Rectangle's member function to access private members of Square
    // Not Bi-Directional!
    private:
        int side;
    public:
        Square (int a) : side(a) {}
};

void Rectangle::convert (Square a) {
    width = a.side;
    height = a.side;
}
  
int main () {
    Rectangle rect;
    Square sqr (4);
    rect.convert(sqr);
    cout << rect.area();
    return 0;
}