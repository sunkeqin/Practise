//
//  main.c
//  2009
//
//  Created by holyios on 16/3/2.
//  Copyright © 2016年 jimmy. All rights reserved.
//



/*请设计一个算法，求循环表中结点的个数。
#include <stdio.h>
#include <stdlib.h>
#define MAXNUM 5
typedef struct Node{
    int value;
    struct Node *next;
}Node, *LinkList;



int main(int argc, const char * argv[]) {
    LinkList node = (LinkList)malloc(sizeof(struct Node));
    node->next=NULL;
    Node *first = node;
    printf("输入%d个数字，组成链表。\n",MAXNUM);
    for (int i=0; i<MAXNUM; i++) {
        Node *p = (LinkList)malloc(sizeof(struct Node));
        scanf("%d",&p->value);
        p->next=NULL;
        node->next=p;
        node=node->next;
    }
    node->next=first->next;
    
    printf("\n链表：");
    for (int i=0; i<20; i++) {
        printf(" %d",first->next->value);
        first=first->next;
    }
    printf("\n");
    
    
    Node *node1 = (Node*)malloc(sizeof(struct Node));
//    Node *node2 = (Node*)malloc(sizeof(struct Node));
//    int count=0;
    if(!first->next){
        printf("0\n");
        return 0;
    }
    int count=1;
    node1=first->next;
    while (node1->next && node1->next!=first->next) {
        count++;
        node1=node1->next;
    }
    printf("数量:%d\n",count);
    return 0;
}
*/


/*有如下序列：0，1，1，2，3，5，8，13，21，34，……其中，每个元素是前两个元素之和。请设计一个非递归算法生成该数列。
#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {

    int n;
    printf("请输入数列长度。\n");
    scanf("%d",&n);
    if (n==0) {
        printf("error.\n");
    }
    
//    int count=0;
    int num[n];
    
    
    for (int i=0; i<n; i++) {
        if (i==0) {
            num[i]=0;
        }
        if (i==1) {
            num[i]=1;
        }
        if (i==2) {
            num[i]=1;
        }
        if (i>2) {
            num[i]=num[i-1]+num[i-2];
        }
    }
    printf("数列是：");
    for (int j=0; j<n; j++) {
        printf(" %d",num[j]);
    }
    printf("\n");

    return 0;
}
*/

/*若x和y是两个字符串，函数strlen(a) 可给出变量“a”的长度。请设计一个算法，找出x中第一个不在y中出现的字符及其位置。

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    char *a="repositorispractise";
    char *b="abcdfghijklmnopqrstuvwxyz";
    
    unsigned long m=strlen(a);
    unsigned long n=strlen(b);
    char one='\0';
    int count=0;
    int bingo=0;
    int result=0;
//    int bingotimes=0;
    for (int i=0; i<m; i++) {
        bingo=0;
        for (int j=0; j<n; j++) {
            if (a[i]==b[j]) {
                bingo=1;
//                bingotimes++;
                break;
            }
        }
        if (bingo==0) {
            one=a[i];
            result=count;
            break;
        }
        if (bingo==1) {
            bingo=0;
            count++;
        }
    }
    if(count==m) {
        printf("X都在Y中。\n");
        return 0;
    }
    
    else{
        printf("第一个不在y中出现的字符是%c，位置是%d\n",one,result+1);
    }
    return 0;
    
}
*/

/*请设计一个递归函数，计算二叉树中叶子结点的个数。*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, const char * argv[]) {



}