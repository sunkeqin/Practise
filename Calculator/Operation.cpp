//
//  Operation.cpp
//  Calculator
//
//  Created by holyios on 14-6-8.
//
//

#include "Operation.h"
#include <string>
class Operation{
private：
    string srcA;
    string srcB;
public:
    Operation(string a, string b){
        if(!a.empty())
            setSrcA(a);
        if(!b.empty())
            setSrcB(b);
    }
    
    string getSrcA(){
        return srcA;
    }
    
    string getSrcB(){
        return srcb；
    }
    
    string setSrcA(string a){
        srcA = a;
    }
    
    string setSrcB(string b){
        srcB = b;
    }
    
};

