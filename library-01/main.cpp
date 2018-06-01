#include <iostream>
#include <string>
#include "library.h"
#include "publication.h"

using namespace std;

int main(){
    Library library;
    string tmp;
    int size;
    int loop = -1,i,j,num;

    while (loop < 0){
        int command;
        for(i = 0; i < 2; i++){
            for (j = 0; j < 10; j++){
                cout << "-";
            }
            cout << endl;
        }
        cout << "CSE1325 Library Management" << endl;
        for(i = 0; i < 2; i++){
            for (j = 0; j < 10; j++){
                cout << "-";
            }
            cout << endl;
        }
        cout << endl;
        cout << "Publications" << endl;
        for(i = 0; i < 1; i++){
            for (j = 0; j < 10; j++){
                cout << "-";
            }
            cout << endl;
        }
        cout << "(1) ADD Publication" << endl;
        cout << "(2) List All Publications" << endl;
        cout << "(3) Check Out Publication" << endl;
        cout << "(4) Check In Publication" << endl;
        cout << endl;
        cout << "Utility" << endl;
        for(i = 0; i < 1; i++){
            for (j = 0; j < 10; j++){
                cout << "-";
            }
            cout << endl;
        }
        cout << endl;
        cout << "(9) Help" << endl;
        cout << "(0) Exit" << endl;
        cout << "-> ";
        cin >> command;
        cin.ignore();

        if (command == 1){
            library.add_publication();
        }

        if (command == 2){
            size = library.number_of_publications();
            
            if (size == 0){
                while (command != 1){
                   cout << endl;
                   cout << "No Publications" << endl << endl;
                   cout << "(1) Continue" << endl;
                   cout << "-> ";
                   cin >> command;
                }
            }
            else{
                while (command != 1){
                    cout << endl;
                    for (i = 0; i < size; i++){
                        tmp = library.publication_to_string(i);
                        cout << "Index: (" << i << ") " << tmp << endl << endl;
                    }
                    cout << "(1) Continue" << endl;
                    cout << "-> ";
                    cin >> command;
                 }
            }
        }

        if (command == 3){
            int index = -1;
            while (index < 0){
                cout << endl;
                cout << "Please enter the Index number of the Publication" << endl;
                cout << "-> ";
                cin >> index;
                cin.ignore();
                if (index >= size || index < 0){
                    cout << endl;
                    cout << "No Publications found for that index." << endl;
                    index = -1;
                    cout << endl;
                }
                if (index < size){
                    string name;
                    string phone;
                    cout << "Enter Name" << endl;
                    cout << "-> ";
                    getline(cin, name);
                    cout << endl;
                    cout << "Enter Phone:" << endl;
                    cout << "-> ";
                    getline(cin, phone);
                    cout << endl;

                    library.check_out(index, name, phone);
                    index++;
                }

            }
        }

        if (command == 4){
            int index = -1;
            while (index < 0){
                cout << endl;
                cout << "Please enter the Index number of the Publication" << endl;
                cout << "-> ";
                cin >> index;
                cin.ignore();
                if (index >= size || index < 0){
                    cout << endl;
                    cout << "No Publications found for that index." << endl;
                    index = -1;
                    cout << endl;
                }
                if (index < size){
                    cout << endl;

                    library.check_in(index);
                    index++;
                }

            }
        }

        if (command == 9){
            while (command != 1){
                for(i = 0; i < 2; i++){
                    for (j = 0; j < 10; j++){
                        cout << "-";
                    }
                    cout << endl;
                }
                cout << "Help" << endl;
                for(i = 0; i < 2; i++){
                    for (j = 0; j < 10; j++){
                        cout << "-";
                    }
                    cout << endl;
                }
                cout << "Enter the integer to switch menus." << endl;
                cout << "Enter (1) to add a new Publication." << endl;
                cout << "Enter (2) to list all of the current Publications." << endl;
                cout << "Enter (3) to check out a Publication." << endl;
                cout << "Enter (4) to check in a Publication." << endl;
                cout << "Enter (0) to EXIT." << endl << endl;
                cout << "(1) Continue" << endl;
                cout << "-> ";
                cin >> command;
            }

        }

        if (command == 0){
            loop++;
        }
              
    }


    return 0;
}