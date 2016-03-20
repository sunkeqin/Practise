//
//  main.c
//  sort
//
//  Created by holyios on 16/2/25.
//  Copyright © 2016年 jimmy. All rights reserved.
//


/**
 *MergeSort
 *
 
#include <stdio.h>



void merge(int *data, int *temp, int low, int middle, int high){
    int i=low,j=middle+1,k=low;
    while(i!=middle+1 && j!=high+1){
        if(data[j]<=data[i]){
            temp[k++]=data[j++];
        }
        else    temp[k++]=data[i++];
    }
    while (i!=middle+1) {
        temp[k++]=data[i++];
    }
    while (j!=high+1) {
        temp[k++]=data[j++];
    }
    for (int m=low; m<=high; m++) {
        data[m]=temp[m];
    }
}

void mergesort2(int *data, int* temp, int low, int high){
    if(low<high){
        int middle = (low + high)/2;
        mergesort2(data,temp,low,middle);
        mergesort2(data,temp,middle+1,high);
        merge(data,temp,low,middle,high);
    }
    return;
}
 
*/


int main(int argc, const char * argv[]) {
    int number[10]={4,0,6,1,3,7,2,8,5,9};
    int temp[10]={0};
   // mergesort2(number, temp, 0, 9);
    //printf("A:%d:A",number[10]);
    for (int m=0; m<10; m++) {
//        printf(" %p %d",number+m,number[m]);
        printf(" %d",number[m]);
    }
    // insert code here...
    printf("\n");
    return 0;
}


