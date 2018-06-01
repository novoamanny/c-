#include <iostream>
#include <string>
#include "student.cpp"

using namespace std;

int main(){
    int i;
    double tmp;


    Student student{"Bjarne Stroustrup"};

    for (i = 0; i < 3; i++){
        
                cout << "Enter Grade: ";
                cin >> tmp;
                student.exam(tmp);
        
            }

            cout << student.name() << endl;
            cout << student.average() << endl;

    return 0;
}