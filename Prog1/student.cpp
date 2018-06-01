#include <iostream>
#include <string>

using namespace std;

class Student{

public:
    Student(string name): student_name{name} {}
    string name()
    {
        return student_name;
    }

   void exam(double grade){
    
    double tmp = grade;

    if (tmp >= 0){

    exam_sum = exam_sum + tmp;
    exam_num_grades = exam_num_grades + 1;
    }
    
}

   double average(){
    double average;

    average = exam_sum / exam_num_grades;

    return average;


   }


private:
    string student_name;
    double exam_sum = 0;
    double exam_num_grades = 0;
};

