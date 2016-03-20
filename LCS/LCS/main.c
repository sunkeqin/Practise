//
//  main.c
//  LCS
//
//  Created by holyios on 16/3/2.
//  Copyright © 2016年 jimmy. All rights reserved.
//


//递推公式：
//L[i,j]表示A(尾数是ai)和B(尾数是bj)的公共子序列
//如果i==0|j==0,则L[i,j]=0
//如果i>0&&j>0,且ai==bj,则L[i,j]=L[i-1,j-1]+1
//如果i>0&&j>0,且ai!=bj,则L[i,j]=max(L[i-1,j],L[i,j-1])

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char a[10]="xyxxzxyzxy";
    char b[12]="zxzyyzxxyxxz";
    int l[11][13];
    for (int i = 0; i <= 10; i++) {
        for (int j = 0; j <= 12; j++) {
            if (i==0||j==0) {
                l[i][j]=0;
            }
            else if (i>0&&j>0&&a[i-1]==b[j-1]) {
                l[i][j]=l[i-1][j-1]+1;
            }
            else if (i>0&&j>0&&a[i-1]!=b[j-1]){
                l[i][j]=(l[i-1][j]>l[i][j-1])?(l[i-1][j]):(l[i][j-1]);
            }
        }
    }
   
    
    // insert code here...
    printf("最长公共子序列个数：%d\n",l[10][12]);
    return 0;
}
