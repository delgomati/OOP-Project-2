//
// Created by Owner on 11/27/2022.
//

#ifndef HW5_PATRON_H
#define HW5_PATRON_H

#include <string>
#include <vector>
class Book;
using namespace std;

class Patron {
public:
    Patron();
    Patron(string aName, string anAddress, string aPhone);
    ~Patron();
    string getName() const;
    void setName(const string& name);
    string getAddress() const;
    void setAddress(const string& address);
    string getPhoneNumber() const;
    void setPhoneNumber(const string & phoneNumber);
    void addCheckedBook(Book* aBook);
    void removeCheckedBook(Book* aBook);
    bool isBookCheckedOutByPatron(Book* aBook);


private:
    string name;
    string address;
    string phoneNumber;
    vector<Book*> *listCheckedBooks;

};


#endif //HW5_PATRON_H