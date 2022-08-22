#ifndef BOOK_H
#define BOOK_H
 
#include <string>
#include "Author.h"   // Author class!!
using namespace std;
 
class Book {
private:
    string name;
    Author author; // data member author is an instance of class Author
    double price;
    int qtyInStock;
 
public:
    // Book(string name, Author author, double price, int qtyInStock = 0);
    Book(const string & name, const Author & author, double price, int qtyInStock = 0);
    string getName() const;
    Author getAuthor() const; 
    double getPrice() const;
    void setPrice(double price);
    int getQtyInStock() const;
    void setQtyInStock(int qtyInStock);
    void print() const;
    string getAuthorName() const;
};
 
#endif