#ifndef _PUBLICATION_H
#define _PUBLICATION_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Publication{
private:
string title;
string author;
string copyright;
string isbn;
bool checked_out = false;
string patron_name;
string patron_phone;

public:
    Publication(string title, string author, string copyright, string isbn): title(title), author(author), copyright(copyright), isbn(isbn) { } // this will store the publication into th eprivate class
    void check_out(string patron_name, string patron_phone); // this allows the user to check out the current publication.
    void check_in(); //this is used to convert the bool checked_out back into false.
    bool is_checked_out(); // this returns true if the publication is currently checked out
    string to_string(); // return the publication to be displayed
};

#endif