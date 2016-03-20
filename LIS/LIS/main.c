//
//  main.c
//  LIS
//
//  Created by holyios on 16/3/1.
//  Copyright © 2016年 jimmy. All rights reserved.
//

#include <stdio.h>
#define MAXN 10
int st[MAXN]={1,7,3,5,9,4,8,0,0,0};
int re[MAXN]={1,1,1,1,1,1,1,1,1,1};
int getLIS(){
    int length=0;
    int max;
    
    
    for (int i=1; i<MAXN; i++) {
        max = 0;
        for (int j=0; j<i; j++) {
            if(st[j]<st[i]&&re[j]>max){
                max=re[j];
            }
        }
        re[i]=max+1;
        if(re[i]>length)
            length=re[i];
    }
    
    return length;
}



int main(int argc, const char * argv[]) {
    
    

    int length=0;
    length = getLIS();
    // insert code here...
    printf("%d!\n",length);
    return 0;
}
