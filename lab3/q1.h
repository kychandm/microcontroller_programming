#ifndef Q1_H
#define Q1_H

#include <iostream>
using namespace std;

class Book {
    public:
        string publisher;
        void displayAuorinfo() {
            cout << "Author: " << author << endl;
        }
    private:
        string title;
        int pages;
        string author = "Peter";
    protected:
        int price;
};

#endif
