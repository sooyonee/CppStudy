// Allows classes to have members that use template parameters as types
// When using template or declare objects of specific type, use <...>
#include <iostream>
using namespace std;

template <class T>
class mypair {
        T a, b;
    public:
        mypair (T first, T second) {a=first; b=second;}
        T getmax();
};

template <class T>
T mypair<T>::getmax() {
    T retval;
    retval = a>b? a : b;
    return retval;
}

template <class T>
class mycontainer {
        T element;
    public:
        mycontainer(T arg) {element = arg;}
        T increase() {return ++element;}
};

// class template specialization
// different implementation for a template when a specific type is passed as template argument
template<>
class mycontainer<char> {
        char element;
    public:
        mycontainer(char arg) {element=arg;}
        char uppercase() {
            if ((element>='a')&&(element<='z'))
            element+='A'-'a';
            return element;
        }
};

int main() {
    mypair<int> myobject(100, 75);
    cout << myobject.getmax() << endl;

    mycontainer<int> myint(7);
    mycontainer<char> mychar('j');
    cout << myint.increase() << endl;
    cout << mychar.uppercase() << endl;
    return 0;
}