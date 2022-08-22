/*
#ifndef AUTHOR_H
#define AUTHOR_H
 
#include <string>
using namespace std;
 
class Author {
private:
    string name;
    string email;
    char gender;   // 'm', 'f', or 'u' for unknown
 
public:
    Author(string name, string email, char gender);
    string getName() const;
    string getEmail() const;
    void setEmail(string email);
    void setEmail(const string & email);
    char getGender() const;
    void print() const;
};
 
#endif
*/

// Pass by Reference
#ifndef AUTHOR_H
#define AUTHOR_H
 
#include <string>
 
class Author {
private:
    std::string name;
    std::string email;
    char gender;
 
public:
    Author(const std::string & name, const std::string & email, char gender);
            // & specifies pass by reference, const for non-mutable
    std::string getName() const;
    std::string getEmail() const;
    void setEmail(const std::string & email);
    char getGender() const;
    void print() const;
};
 
#endif
