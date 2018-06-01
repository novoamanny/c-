#include <iostream>
#include <string>
#include <vector>
#include "library.h"
#include "publication.h"

using namespace std;

void Library::add_publication(){
    string title, author, copyright, isbn;

    cout << "Enter Title of Publication" << endl;
    cout << "-> ";
    getline(cin, title);
    cout << endl;

    cout << "Enter Author of Publication" << endl;
    cout << "-> ";
    getline(cin, author);
    cout << endl;

    cout << "Enter Copyright of Publication" << endl;
    cout << "-> ";
    getline(cin, copyright);
    cout << endl;

    cout << "Enter ISBN of Publication" << endl;
    cout << "-> ";
    getline(cin, isbn);
    cout << endl;

    pub.push_back(Publication(title, author, copyright, isbn));
}
string Library::publication_to_string(int publication_index){

    string tmp;
    tmp = pub[publication_index].to_string();
    return tmp;
    
}

int Library::number_of_publications(){
    int tmp = pub.size();
    return tmp;
}

void Library::check_out(int publication_index, string patron_name, string patron_phone){
   pub[publication_index].check_out(patron_name, patron_phone);
}

void Library::check_in(int publication_index){
    pub[publication_index].check_in();
}
