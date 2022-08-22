#include <iostream>
#include "Book.h"
using namespace std;
 
int main() {
   Author peter("Peter Jones", "peter@somewhere.com", 'm');
   peter.print();
 
   Book cppDummy("C++ for Dummies", peter, 19.99);
   cppDummy.print();
 
   peter.setEmail("peter@xyz.com");
   peter.print();
   cppDummy.print();
 
   cppDummy.getAuthor().setEmail("peter@abc.com");
   cppDummy.print();
}