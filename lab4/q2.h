#ifndef Q2_H
#define Q2_H

#include <iostream>
using namespace std;
class Book
{
private:
    string title;
    int pages;

public:
    // Constructor
    Book(string t = "Untitled", int p = 0) : title(t), pages(p)
    {
        cout << "Book Constructor: \"" << title << "\" with " << pages << " pages\n";
    }
    // Destructor
    ~Book()
    {
        cout << "Book Destructor: \"" << title << "\" destroyed\n";
    }
    // Method to display book info
    void display() const
    {
        cout << "Title: " << title << ", Pages: " << pages << endl;
    }
};

#endif