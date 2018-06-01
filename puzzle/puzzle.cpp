#include <iostream>
#include <string>
#include "puzzle.h"
#include "fuse.h"

using namespace std;

int i, j;


bool Puzzle::guess(char c){

    int str_length = solution.length();

    for (i = 0; i < str_length; i++){

        if (c == solution[i]){

            for (j = 0; j < 255; j++){

                if (c == guesses[j]){

                    if (guesses[j] == false){

                        guesses[j] = true;
                        
                    }

                    else {
                        cout << "That character has already been guessed." << endl;
                        return true;
                    }
                }
            }
            return true;
        }
        else{
            
            if(c == guesses[j]){

                if(guesses[j] == false){
                    guesses[j] = true;
                }
            }
            return false;
        }
    
    
    }
}


bool Puzzle::solve(string proposed_solution){
    if (solution == proposed_solution){
        return true;
    }
    else{
        return false;
    }
}

string Puzzle::to_string(){
    int str_length = solution.length();
    string str = solution;

    for (i = 0; i < str_length; i++){

        str[i] = '-';

    }
    
    for (i = 0; i < 255; i++){

        if (guesses[i] == true){

            for (j = 0; j < str_length; j++){

                if (guesses[i] == solution[j])
                {
                    str[j] = guesses[i];
                }

            }

        }

    }
    return str;
}

string Puzzle::get_solution(){

    return solution;

}