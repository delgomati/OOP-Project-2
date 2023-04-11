//
// Created by Owner on 11/27/2022.
//

#include "Book.h"

Book::Book(){
    checkedOutBy = nullptr;
}
Book::Book(string aTitle, int pages){
    checkedOutBy = nullptr;
    title = aTitle;
    numPages = pages;
}
Book::~Book(){
    delete this->checkedOutBy;
}
string Book::getTitle() const{
    return title;
}
void Book::setTitle(string aTitle){
    title = aTitle;
}
int Book::getNumPages() const{
    return numPages;
}
void Book::setNumPages(int pages){
    numPages = pages;
}

Patron* Book::getCurrentPatron() const{
    return checkedOutBy;
}
void Book::checkOut(Patron* aPatron){
    checkedOutBy = aPatron;

}
void Book::returnBook(){
    checkedOutBy = nullptr;
}
bool Book::isCheckedOut() const{
    if (checkedOutBy != nullptr){
        return true;
    }
    return false;
}
