//
//  main.c
//  coin
//
//  Created by holyios on 16/2/29.
//  Copyright © 2016年 jimmy. All rights reserved.
//

#include <stdio.h>

//int min(int a, int b, int c){
//    if (a < 0 | b < 0 | c < 0) {
//        return -1;
//    }
//    return (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
//    
//}
//
//int numOfCoins(int n){
//    if (n==0) {
//        return 0;
//    }
//    if (n==1) {
//        return 1;
//    }
//    if (n==2) {
//        return 2;
//    }
//    if (n==3) {
//        return 1;
//    }
//    if (n==4) {
//        return 2;
//    }
//    if (n==5) {
//        return 5;
//    }
//    if (n>5) {
//        return min(numOfCoins(n-1)+1,numOfCoins(n-3)+1,numOfCoins(n-5)+1);
//    }
//    return -2;
//}
int sum = 11;
int dp[12];
int a[3]={1,2,5};

void numOfCoins(){
    dp[0]=0;
    for (int i=1; i<=sum; i++) {
        for (int j=0; j<3; j++) {
            if (a[j]<=i&&dp[i-a[j]]+1<dp[i]) {
                dp[i] = dp[i-a[j]]+1;
            }
        }
    }
}



int main(int argc, const char * argv[]) {
    for (int m=0; m<=sum; m++) {
        dp[m]=9999;
    }
    numOfCoins();
    
    
    // insert code here...
    printf("如需凑够%d元，需要%d个。\n",sum,dp[sum]);

    return 0;
}
