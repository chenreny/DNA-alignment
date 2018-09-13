//
//  helper.h
//  genome string problem
//
//  Created by Renying Chen on 8/16/18.
//  Copyright © 2018 Renying Chen. All rights reserved.
//

#ifndef helper_h
#define helper_h

#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include "murmur3.h"


using namespace std;

class Solver{
public:
    void readFile();
    void compute();
    
    
    ~Solver(){
        
        delete refer;
    }
    
    
private:
    string* refer;
   // char* refer;

    unordered_map<int,vector<pair<string, int> > > refMap;
    
    
    int size;
    
};






#endif /* helper_h */
