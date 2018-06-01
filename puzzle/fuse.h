#ifndef _FUSE_H
#define _FUSE_H

#include <iostream>
#include <string>

using namespace std;

class Fuse{
public:
    Fuse(int TIME): time(TIME) {}
    bool burn();
    string to_string();

private:
    int time;

};




#endif