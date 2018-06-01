#include "controller.h"
#include "view.h"
#include "library.h"
#include "publication.h"
#include "genre.h"
#include "media.h"
#include "age.h"
#include <iostream>
#include <string>

using namespace std;

void Controller::cli() {
  int cmd = -1;
  while (cmd != 0) {
    view.show_menu();
    cout << "Command? ";
    cin >> cmd;
    cin.ignore(); // consume \n
    execute_cmd(cmd);
  }
}

void Controller::execute_cmd(int cmd) {
  if (cmd == 1) { // Add publication
    string title, author, copyright, isbn;
    int genre, media, age;

    cout << "Title? ";
    getline(cin, title);

    cout << "Author? ";
    getline(cin, author);

    cout << "Copyright date? ";
    getline(cin, copyright);

    for (int i = 0; i < Genre::num_genres; ++i) 
      cout << "  " << i << ") " << Genre(i).to_string() << endl;
    cout << "Genre? ";
    cin >> genre;
    cin.ignore(); // consume \n

    for (int i = 0; i < Media::num_media; ++i) 
      cout << "  " << i << ") " << Media(i).to_string() << endl;
    cout << "Media? ";
    cin >> media;
    cin.ignore(); // consume \n

    for (int i = 0; i < Age::num_ages; ++i) 
      cout << "  " << i << ") " << Age(i).to_string() << endl;
    cout << "Age? ";
    cin >> age;
    cin.ignore(); // consume \n

    cout << "ISBN? ";
    getline(cin, isbn);

    library.add_publication(Publication(title, author, copyright, genre, media, age, isbn));

 } else if (cmd == 2) { // List all publications
    view.list_publications();

 } else if (cmd == 3) { // Check out publication
    int pub;
    string pat;
    string pat_phone;

    view.list_publications();
    cout << "Publication number? ";
    cin >> pub;
    cin.ignore(); // consume \n

    cout << "Patron name? ";
    getline(cin, pat);
    cout << "Patron phone? ";
    getline(cin, pat_phone);

    try {
      library.check_out(pub, pat, pat_phone);
    } catch(Publication::Invalid_transaction e) {
      cout << "ERROR: That publication is already checked out!" << endl;
    }
    
 } else if (cmd == 4) { // Check in publication
    int pub;
    view.list_publications();
    cout << "Publication number? ";
    cin >> pub;
    cin.ignore(); // consume \n

    try {
      library.check_in(pub);
    } catch(Publication::Invalid_transaction e) {
      cout << "ERROR: That publication is already checked in!" << endl;
    }

 } else if (cmd == 9) { // Help
    view.help();
 } else if (cmd == 0) { // Exit
 } else if (cmd == 99) { // Easter Egg
   library.easter_egg();
 } else {
   cerr << "**** Invalid command - type 9 for help" << endl << endl;
 }
}

