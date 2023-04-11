//
// Created by Owner on 11/27/2022.
//

#ifndef HW5_LOAN_H
#define HW5_LOAN_H


#include "Book.h"
#include "Patron.h"
#include "Date.h"
using namespace std;

class Loan {
public:
    Loan();
    Loan(Book* aBook, Patron* aPatron, int year, int month, int day);
    ~Loan();
    Book* getBook() const;
    Patron* getPatron() const;
    Date getDueDate() const;
    bool isExpired() const;

private:
    Book* borrowedBook;
    Date dueDate;
    Patron* checkedOutPatron;

};


#endif //HW5_LOAN_H