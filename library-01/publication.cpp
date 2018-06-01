#include <iostream>
#include <string>
#include <vector>
#include "publication.h"
#include "library.h"

using namespace std;

string Publication::to_string(){
    string tmp;
    tmp = "Title: " + title + ", " + "Author: " + author + ", " + "Copyright: " + copyright + ", " + "ISBN: " + isbn;
    return tmp;
}

void Publication::check_out(string name, string phone){
    bool check;
    check = is_checked_out();

    if (check == true){
        string tmp;
        tmp = to_string();
        cout << tmp << endl;
        cout << "This publication is currently checked out." << endl;
        cout << "Patron: " << patron_name << endl;
        cout << "Phone: " << patron_phone << endl;
        cout << endl;
    }
    else{
        string tmp;
        patron_name = name;
        patron_phone = phone;
        checked_out = true;
        tmp = to_string();
        cout << tmp << endl;
        cout << "Patron: " << patron_name << endl;
        cout << "Phone: " << patron_phone << endl;
        cout << endl;
        cout << "Checked out!" << endl << endl;
    }
}

bool Publication::is_checked_out(){
    return checked_out;
}

void Publication::check_in(){
    checked_out = false;
    cout << endl;
    cout << "Thank You for your return..." << endl << endl;
}