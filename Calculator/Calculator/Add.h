//
//  Add.h
//  Calculator
//
//  Created by holyios on 14-6-9.
//  Copyright (c) 2014年 jimmy. All rights reserved.
//

#ifndef __Calculator__Add__
#define __Calculator__Add__

#include <iostream>
#include "Operation.h"
class Add:Operation{
public:
    Add(double left, double right){
        Operation(left,right);
    }
    double run();
};

#endif /* defined(__Calculator__Add__) */
