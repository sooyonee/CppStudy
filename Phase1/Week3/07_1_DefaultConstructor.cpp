// default constructor : constructor called when objects of a class are declared, 
//                       but are not initialized with any arguments

// as soon as a class has some constructor taking any number of parameters explicitly declared, 
// the compiler no longer provides an implicit default constructor, 
// and no longer allows the declaration of new objects of that class without arguments

// C::C()
#include <iostream>
#include <string>
using namespace std;

class Example3 {
    string data;
  public:
    Example3 (const string& str) : data(str) {}
    Example3() {} // Default constructor also declared
    const string &content() const {return data;} // & : What for?
};

int main() {
  Example3 foo;
  Example3 bar ("Example");

  cout << "bar's content: " << bar.content() << '\n';
  return 0;
}