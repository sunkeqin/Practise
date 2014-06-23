//
//  main.cpp
//  Calculator
//
//  Created by holyios on 14-6-8.
//  Copyright (c) 2014年 jimmy. All rights reserved.
//
//#include "Operation.h"
//#include "Add.h"
//#include <iostream>
//using namespace std;
//int main(int argc, const char * argv[])
//{
//
//    // insert code here...
//    double left, right;
//    cout << "Hello, World!\n";
//    cout << "请输入操作数1"<<endl;
//    cin >> left;
//    cout << "请输入操作数2"<<endl;
//    cin >> right;
//    cout<<left<<right<<endl;
//    //Operation op(left,right);
//    Add add(left,right);
//    //= new Operation(left,right);
//    cout << add.run();
//    return 0;
//}


#include <iostream>
using namespace std;
int main(int argc, const char* argv[]){
    bool quit = true;
    double left,right;
    char op;
    double result;
    while(quit){
        result=0.0;
        cout<<"请输入操作数1"<<endl;
        cin>>left;
        cout<<"请输入运算符"<<endl;
        cin>>op;
        cout<<"请输入操作数2"<<endl;
        cin>>right;
        switch(op){
            case '+':
                result = left + right;
                break;
            case '-':
                result = left - right;
                break;
            case '*':
                result = left * right;
                break;
            case '/':
                if(right==0){
                    cout<<"除数不能为0!"<<endl;
                    continue;
                }
                result = left/right;
                break;
            default:
                cout<<"未识别操作，程序退出!"<<endl;
                quit = false;
        }
        cout<<"结果:"<<result<<endl;
    }
}
