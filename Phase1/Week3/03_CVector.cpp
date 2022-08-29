// type operator sign (parameters) {}
// Cartesian Vector addition : (3,1) + (1,2) = (4,3)
#include <iostream>
using namespace std;

class CVector {
    public:
        int x,y;
        CVector () {};
        CVector (int a,int b) : x(a), y(b) {}
        CVector operator + (const CVector&);
};

CVector CVector::operator+ (const CVector& param) {
    CVector temp;
    temp.x = x + param.x;
    temp.y = y + param.y;
    return temp;
}

// non-member function
CVector operator+ (const CVector& lhs, const CVector& rhs) {
    CVector temp;
    temp.x = lhs.x + rhs.x;
    temp.y = lhs.y + rhs.y;
    return temp;
}

int main () {
    CVector foo (3,1);
    CVector bar (1,2);
    CVector result;
    result = foo + bar; // implicit
    // result = foo.operator+ (b); // explicit
    cout << result.x << ',' << result.y << '\n';
    return 0;
}