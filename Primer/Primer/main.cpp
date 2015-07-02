//
//  main.cpp
//  Primer
//
//  Created by holyios on 14-8-4.
//  Copyright (c) 2014年 jimmy. All rights reserved.
//

#include <iostream>
/**
int incr(const int &val){
    return val;
}

int main(int argc, const char * argv[])
{

    // insert code here...
    short v1 = 0;
    const int v2 = 42;
    int v3 = incr(v1);
    std::cout << "Hello, World!\n"<<v3;
    return 0;
}

*/
void sort(int *a, int size){
    int i,ltmp=0, rtmp=size-1,tmp;
    for(i=0;i<size;i++,a++){
        if(ltmp==rtmp)
            return;
        else if(*a%2==1){
            ltmp++;
        }
        else if(*a%2==0){
            if(a[rtmp]%2==1){
                tmp = a[ltmp];
                a[ltmp] = a[rtmp];
                a[rtmp] = tmp;
                rtmp--;
            }
            else if(a[rtmp]%2==0)
        }
    }
}