#ifndef _PUZZLE_H
#define _PUZZLE_H

#include <iostream>
#include <string>

using namespace std;

class Puzzle{
public:
    Puzzle(string tmp_solution): solution(tmp_solution) {}
    bool guess(char c);
    bool solve(string proposed_solution);
    string to_string();
    string get_solution();

private:
string solution;
bool guesses[255];
};



#endif