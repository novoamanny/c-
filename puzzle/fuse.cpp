#include <iostream>
#include <string>
#include "fuse.h"
#include "puzzle.h"

using namespace std;





bool Fuse::burn(){

    time--;

    if (time > 0){
        return true;
    }
    else{
        return false;
    }


}

string Fuse::to_string(){
    int i;
    Puzzle puzzle(int time);
    
    string s1 = "\n  /\n";
    string s2 = ",+,\n";
    string s3 = "| |\n";
    string s4 = "|_|\n";
    string bomb = s1 + s2 + s3 + s4;
    string boom = "##### B O O M #####\n";

    if (time > 0){

    cout << "  ";

    for (i = 0; i < time; i++){

        cout << " _";

    }

    cout << "*";

    return bomb;
    }

    else {

        return boom;

    }

}