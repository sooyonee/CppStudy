// this : pointer to the object whose member function is being executed
//      : used within a class's member function to refer to the object itself
// static : only one common variable for all the objects of that same class, sharing the same value
#include <iostream>
using namespace std;

class Dummy {
    public:
        bool isitme (Dummy &param);
        static int n;
        Dummy() { n++; };
};

int Dummy::n=0;

bool Dummy::isitme (Dummy &param) {
    if (&param == this) return true;
    else return false;
}

int main () {
    Dummy a; // execute default constructor
    Dummy *b = &a; // b points a
    if ( b->isitme(a) ) // b.isitme(a) is impossible since b is pointer
        cout << "yes, &a is b\n";

    Dummy c;
    Dummy d[5];
    cout << c.n << endl;
    Dummy *e = new Dummy;
    cout << Dummy::n << endl;
    delete e;
    return 0;
}