//
//  main.c
//  bag-greedy
//
//  Created by holyios on 16/3/1.
//  Copyright © 2016年 jimmy. All rights reserved.
//

#include <stdio.h>
#define MAXW 10
#define BAG 4
int value[4]={10,40,30,50};
int weight[4]={5,4,6,3};
int max(int a, int b){
    return a > b ? a : b;
    
}

void bag(int real[][MAXW]){
//    for (int m=0; m<BAG; m++) {
//        real[0][m]=0;
//    }
    for (int j=0; j<MAXW;j++) {
        for (int i=0; i<BAG; i++) {
            if(i==0&&weight[i]<=j+1){
                real[i][j]=value[i];
            }
            else if(i==0&&weight[i]>j+1){
                real[i][j]=0;
            }
            else if(i>0&&(j+1-weight[i])>=0){
                real[i][j]=max(real[i-1][j],(real[i-1][j-weight[i]]+value[i]));
            }
            else{
                real[i][j]=real[i-1][j];
            }
        }
    }
}


int main(int argc, const char * argv[]) {

    int real[4][10]={0};

    bag(real);
    
    // insert code here...
    for (int i=0; i<BAG; i++) {
        for (int j=0; j<MAXW; j++) {
            printf("%d%d:%d\n",i,j,real[i][j]);
        }
    }
    
    
//    printf("选择的结果：");
//    for (int i=0; i<BAG; i++) {
//        printf("%d",used[i]);
//        
//    }
//    printf("\n");
    
    return 0;
}
