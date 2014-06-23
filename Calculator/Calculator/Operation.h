//
//  Operation.h
//  Calculator
//
//  Created by holyios on 14-6-8.
//  Copyright (c) 2014年 jimmy. All rights reserved.
//

#ifndef __Calculator__Operation__
#define __Calculator__Operation__

#include <iostream>
class Operation{
private:
    double srcA,srcB;
public:
    Operation();
    ~Operation(){}
    Operation(double,double);
    double getSrcA();
    double getSrcB();
    void setSrcA(double);
    void setSrcB(double);
    virtual double run();
};
#endif /* defined(__Calculator__Operation__) */
