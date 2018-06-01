#include <iostream>
#include <string>
#include "student.cpp"

using namespace std;

int main(){
    int i;
    double tmp;
    string s1;

    cout << "Enter student name: ";
    getline(cin, s1);

    Student student{s1};

    for (i = 0; i < 3; i++){
        cout << "Enter Grade: ";
        cin >> tmp;
        if (tmp < 0){
            tmp = 0;
            break;
        }
        student.exam(tmp);
    }

    cout << student.name() << " " << "has a "<< student.average() << " average" << endl;
    


    return 0;
}