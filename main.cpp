//
//  main.cpp
//  genome string problem
//
//  Created by Renying Chen on 8/16/18.
//  Copyright © 2018 Renying Chen. All rights reserved.
//

#include <iostream>
#include "helper.h"
using namespace std;

int main() {
    
#ifdef __APPLE__
    if(!freopen("test1.txt", "r", stdin)){
        cout << "error open file 1" << endl;
        exit(1);
    }
#endif
    
    Solver s;
    s.readFile();
    s.compute();
    
    
    return 0;
}
