//
// Created by Owner on 11/27/2022.
//

#ifndef HW5_LIBRARY_H
#define HW5_LIBRARY_H

#include <string>
#include <vector>
#include "Book.h"
#include "Patron.h"
#include "Loan.h"

using namespace std;

class Library {
public:
    Library();
    Library(string libraryName);
    ~Library();
    string getName() const;
    Book* searchBook(string title) const;
    Patron* searchPatron(string name) const;
    void addBook(string title, int numPages);
    void addPatron(string name, string address, string phoneNumber);
    void checkOutBook(Book* aBook, Patron* aPatron, int dueYear, int dueMonth, int dueDay);
    void returnBook(Book* aBook, Patron* aPatron);

private:
    string name;
    vector<Loan*> *loans;
    vector<Patron*> *patrons;
    vector<Book*> *books;


};


#endif //HW5_LIBRARY_H