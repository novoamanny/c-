#include <iostream>
#include <string>
#include "puzzle.h"
#include "fuse.h"

using namespace std;

int main(){
    string tmp_solution;
    string guess;
    char c;
    int i;
    bool returnBool = true;
    bool loopBool = true;
    int TIME = 5;
    cout << "Please enter the solution: ";
    getline(cin, tmp_solution);

    Puzzle puzzle(tmp_solution);
    Fuse fuse(TIME);

    for (i = 0; i < 81; i++){

        cout << endl;

    }

    while (loopBool == true){
        string proposed_solution;
        
        
        
        cout << "----------------------" << endl;
        cout << "----------------------" << endl;
        cout << "       B O O M        " << endl;
        cout << "----------------------" << endl;
        cout << "----------------------" << endl;
        
        cout << fuse.to_string() << endl << endl;

        cout << puzzle.to_string() << endl;

        cout << "Enter lower case letter to guess," << endl;
        cout << "! to propose a solution," << endl;
        cout << "0 to exit." << endl;
        cout << "-> ";
        cin >> c;
        cout << endl;
        
        if (c == '!'){

            cout << "Enter Your Proposed Solution: ";
            getline(cin, proposed_solution);
            

            returnBool = puzzle.solve(proposed_solution);

            if (returnBool == true){
                cout << "Congratulations Guessed the solution correctly." << endl;
                cout << "Solution: " << puzzle.get_solution() << endl;
                loopBool = false;
            }

            else{
                cout << "You have guessed wrong." << endl;
                returnBool = fuse.burn();

                if (returnBool == false){
                    cout << fuse.to_string() << endl;
                    loopBool = false;
                }
            }
        }

        if (c == '0'){
            cout << "Thank you for playing." << endl;
            loopBool = false;
        }

        else{
            returnBool = puzzle.guess(c);

            if (returnBool == false){
                returnBool = fuse.burn();
                if (returnBool == false){
                    cout << fuse.to_string() << endl;
                    loopBool = false;
                }
                else{
                cout << puzzle.to_string() << endl;
                }
            }
            else{
                cout << puzzle.to_string() << endl;
            }
        }
    }
    return 0;
}