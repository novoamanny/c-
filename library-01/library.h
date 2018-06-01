#ifndef _LIBRARY_H
#define _LIBRARY_H

#include <iostream>
#include <string>
#include <vector>
#include "publication.h"
#include "library.h"

using namespace std;

class Library{
private:
    vector <Publication> pub;

public: 
    void add_publication(); //This should be used to assign the publications to the vector
    void check_out(int publication_index, string patron_name, string patron_phone); // Thsi will allow the user to check out a publication
    void check_in(int publication_index); // this will allow the user to check in their checked out book
    string publication_to_string(int publication_index); // This will allow the user to display their publication
    int number_of_publications(); //  This will display the number of publications that are currently in the system
};






#endif