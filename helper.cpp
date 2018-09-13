//
//  helper.cpp
//  genome string problem
//
//  Created by Renying Chen on 8/16/18.
//  Copyright © 2018 Renying Chen. All rights reserved.
//

#include "helper.h"
#include <cstring>
#include <cstdlib>
#include <iostream>

void read(){
    int c;
    unordered_map<int, int> map;
    
    while(cin >> c){
        ++map[c];
    }
    
    for(auto i = map.begin(); i != map.end(); ++i){
        cout <<"collisons" << i->first ;
        cout <<"frequency" << i->second << endl;
    }
}

void Solver::readFile(){
    refer = new string();
    string garbage;
    cin >> garbage;
    char c;
 
    
    while(cin >> c){
        if(c != 'N'){
            *refer += c;
            ++size;
        }
        if(c == '\0') {
            cout << "find empty string" << endl;
            break;
        }
    }
   // cout << *refer << endl;
    cout << "complete read" << endl;
}

void Solver::compute(){
   // int *temp = new int;
    int temp = 0;
    for(int i = 0; i < size - 100; ++i){
       // if(*(refer + i) == "\n") continue;
        //int seed = rand();
       // char* substr;
        const char* s = ((*refer).substr(i, 100)).c_str();
        int seed = 42;
        MurmurHash3_x86_32 (s, 100, seed, &temp);
      // cout << *temp << " " ;
       // cout << temp << endl;
      //  cout << refer->substr(i, 100) << endl;
        
        refMap[temp].push_back(make_pair(refer->substr(i, 100), i));
    }
    
   // delete temp;
    
    for(auto i = refMap.begin(); i != refMap.end(); ++i){
        if(i->second.size() != 1) cout << i->second.size() << " ";
    }
    
    
}
