//
//  Operation.cpp
//  Calculator
//
//  Created by holyios on 14-6-8.
//  Copyright (c) 2014年 jimmy. All rights reserved.
//

#include "Operation.h"

Operation::Operation():srcA(0),srcB(0){}

Operation::Operation(double a, double b):srcA(a),srcB(b){}

double Operation::getSrcA(){
    return srcA;
}

double Operation::getSrcB(){
    return srcB;
}

void Operation::setSrcA(double a){
    srcA = a;
}

void Operation::setSrcB(double b){
    srcB = b;
}

double Operation::run(){
    return 0;
}