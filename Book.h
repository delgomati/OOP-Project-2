//
// Created by Owner on 11/27/2022.
//

#ifndef HW5_BOOK_H
#define HW5_BOOK_H

#include <string>
class Patron;
using namespace std;

class Book {
public:
    Book();
    Book(string aTitle, int pages);
    ~Book();
    string getTitle() const;
    void setTitle(string aTitle);
    int getNumPages() const;
    void setNumPages(int pages);
    Patron* getCurrentPatron() const;
    void checkOut(Patron* aPatron);
    void returnBook();
    bool isCheckedOut() const;


private:
    string title;
    int numPages;
    Patron* checkedOutBy;

};


#endif //HW5_BOOK_H