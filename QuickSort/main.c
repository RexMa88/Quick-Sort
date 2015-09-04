//
//  main.c
//  QuickSort
//
//  Created by Rex Ma on 15/9/4.
//  Copyright (c) 2015年 Rex Ma. All rights reserved.
//

#include <stdio.h>

#define MAXSIZE 10

typedef struct SqList{
    int r[MAXSIZE+1];
    int length;
}SqList;

void swap(SqList *L,int i,int j){
    int temp = L->r[i];
    L->r[i] = L->r[j];
    L->r[j] = temp;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
