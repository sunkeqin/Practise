////
////  main.cpp
////  Test
////
////  Created by holyios on 16/2/23.
////  Copyright © 2016年 jimmy. All rights reserved.
////
//
//#include "main.hpp"
//
////
////  main.c
////  Test
////
////  Created by holyios on 16/1/29.
////  Copyright © 2016年 jimmy. All rights reserved.
////
//
////#include <stdio.h>
///** wrk
// //#define ROUND_DOWN_COUNT(Count,Pow2) ( (Count) & (~(((long)(Pow2))-1)) )
// //#define ROUND_DOWN_POINTER(Ptr,Pow2) ( (void*) ROUND_DOWN_COUNT( ((unsigned long)(Ptr)), (Pow2) ) )
// //#define ROUND_UP_COUNT(Count,Pow2)   ( ((Count)+(Pow2)-1) & (~(((long)(Pow2))-1)) )
// int main(int argc, const char * argv[]) {
// //     insert code here...
// //    int a = 123;
// //    int * s = &a;
// //    int * b = 456;
// //    long p = 2;
// //    long c = 6;
// //    printf("result:%ld\n",ROUND_UP_COUNT(c, p));
// //    printf("result:%p\n",ROUND_DOWN_POINTER(s,p));
// //    printf("result:%ld\n",ROUND_DOWN_COUNT(c, p));
// return 0;
// }
// */
//
//#include <iostream>
//#include <cmath>
//#include <string.h>
//#include <cstdlib>
//using namespace std;
//const double PRECISION = 1E-6;
//const int COUNT_OF_NUMBER = 4;
//const int NUMBER_TO_BE_CAL = 24;
//double number[COUNT_OF_NUMBER];
//string expression[COUNT_OF_NUMBER];//保存表达式
////int nround, mround = 0;
//int count = 0;
//bool Search(int n)
//{
//    //只剩一个数字，即最终结果是否为24（保存在number[0]）
//    if(n == 1){
//        if(fabs(number[0] - NUMBER_TO_BE_CAL)<PRECISION){
//            cout << expression[0] << endl;
//            return true;
//        }
//        else{
//            return false;
//        }
//    }
//
//    //循环n次
//    for(int i=0;i<n;i++){
//        //循环后面，假设i=0,j=1
// //       ++::nround;
//        for(int j=i+1;j<n;j++){
////            ++::mround;
//            double a, b;
//            string expa, expb;
//            a = number[i];//第一个数
//            b = number[j];//第二个数
//            number[j] = number[n-1];//第二个数变最后一个数？？为什么？？
//            expa = expression[i];//第一个表达式
//            expb = expression[j];//第二个表达式
//            expression[j]=expression[n-1];//第二个表达式变成最后一个表达式？？
//            //a+b
//            expression[i]='('+expa+'+'+expb+')';//a+b
//            printf("%d-%d-%d-%d:%s\n",i,j,n,++::count,expression[i].c_str());
//            number[i]=a+b;
//            if(Search(n-1)) return true;
//            //a-b
//            expression[i]='('+expa+'-'+expb+')';
//            printf("%d-%d-%d-%d:%s\n",i,j,n,++::count,expression[i].c_str());
//            number[i]=a-b;
//            if(Search(n-1)) return  true;
//            //b-a
//            expression[i] = '(' + expb + '-' + expa + ')';
//            printf("%d-%d-%d-%d:%s\n",i,j,n,++::count,expression[i].c_str());
//            number[i]=b-a;
//            if(Search(n-1)) return  true;
//            //a*b
//            expression[i]='('+expa+'*'+expb+')';
//            printf("%d-%d-%d-%d:%s\n",i,j,n,++::count,expression[i].c_str());
//            number[i]=a*b;
//            if(Search(n-1)) return true;
//            //a/b
//            if(b!=0){
//                expression[i]='('+expa+'/'+expb+')';
//                printf("%d-%d-%d-%d:%s\n",i,j,n,++::count,expression[i].c_str());
//                number[i]=a/b;
//                if(Search(n-1)) return true;
//            }
//            //b/a
//            if(a!=0){
//                expression[i] = '(' + expb + '/' + expa +')';
//                printf("%d-%d-%d-%d:%s\n",i,j,n,++::count,expression[i].c_str());
//                number[i] = b / a;
//                if(Search(n-1)) return true;
//            }
//            number[i] = a;
//            number[j] = b;
//            expression[i] = expa;
//            expression[j] = expb;
//        }
//    }
//    return  false;
//}
//
//int main()
//{
//    //number[i]保存数字；expression[i]保存数字的表达式
//    for (int i = 0; i < COUNT_OF_NUMBER; i++) {
//        char buffer[20];
//        int x;
//        cin >> x;
//        number[i] = x;
//        sprintf(buffer,"%d",x);
//        expression[i]=buffer;
//    }
//    if(Search(COUNT_OF_NUMBER)){
//        cout << "Success." << endl;
//    }else{
//        cout << "Fail." << endl;
//    }
//    return 0;
//}

#include <stdio.h>
#include <string.h>
#include <math.h>
//using namespace std;
#define N 4
#define R 24
#define LENGTH 100
const double PRECISION = 1E-6;
double nums[N];
char exps[N][LENGTH];
int run(int n){
    if(n==1){
        if(fabs(nums[0] - R) < PRECISION){
            printf("表达式是：%s\n",exps[0]);
            return 1;
        }
        else return 0;
    }else{
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                double a,b;
                char expa[LENGTH];
                char expb[LENGTH];
                a = nums[i];
                b = nums[j];
                sprintf(expa,"%s",exps[i]);
                sprintf(expb,"%s",exps[j]);
                //expa = exps[i];
                //expb = exps[j];
                //printf("out expa:%s expb:%s\n",expa,expb);
                
                nums[j]=nums[n-1];
                //exps[j]=exps[n-1];
                
                sprintf(exps[j],"%s",exps[n-1]);
                
                nums[i]=a+b;
                //printf("la:%s:lal:(%s+%s)\n",expb,expa,expb);
                sprintf(exps[i],"(%s+%s)",expa,expb);
                //exps[i]='('+expa+'+'+expb+')';
                if(run(n-1)) return 1;
                
                nums[i]=a-b;
                sprintf(exps[i],"(%s-%s)",expa,expb);
                if(run(n-1)) return 1;
                
                nums[i]=b-a;
                sprintf(exps[i],"(%s-%s)",expb,expa);
                if(run(n-1)) return 1;
                
                nums[i]=a*b;
                sprintf(exps[i],"(%s*%s)",expa,expb);
                if(run(n-1)) return 1;
                
                if(0!=b){
                    nums[i]=a/b;
                    sprintf(exps[i],"(%s/%s)",expa,expb);
                    if(run(n-1)) return 1;
                }
                
                if(0!=a){
                    nums[i]=b/a;
                    sprintf(exps[i],"(%s/%s)",expb,expa);
                    if(run(n-1)) return 1;
                }
                
                nums[i]=a;
                nums[j]=b;
                sprintf(exps[i],"%s",expa);
                sprintf(exps[j],"%s",expb);
                
            }
        }
        return 0;
    }
    
    
}


int main(){
    //exps={""};
    //input N numbers to calculate
    for(int i=0;i<N;i++){
        //char buffer[20];
        int x;
        scanf("%d",&x);
        nums[i]=x;
        sprintf(exps[i], "%d", x);
        //sprintf(buffer,"%d",x);
        //strcpy(*exps[i],buffer);
        
    }
    //for(int i=0;i<N;i++) printf("%s\n",exps[i]);
    if (run(N)) {
        printf("Bingo!\n");
    }else
        printf("No Way!\n");
    
}