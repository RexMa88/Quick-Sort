//
//  main.c
//  QuickSort
//
//  Created by Rex Ma on 15/9/4.
//  Copyright (c) 2015年 Rex Ma. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 10

typedef struct{
    int r[MAXSIZE];
    int length;
}SqList;

void swap(SqList *L,int i,int j){
    int temp = L->r[i];
    L->r[i] = L->r[j];
    L->r[j] = temp;
}

int Partition(SqList *L,int low,int high){
    int pivotKey;
    pivotKey = L->r[low];
    while (low < high) {
        while (low<high && L->r[high]>pivotKey) {
            high--;
        }
        swap(L, low, high);
        while (low < high && L->r[low]<pivotKey) {
            low++;
        }
        swap(L, low, high);
    }
    return low;
}

void Qsort(SqList *L,int low,int high){
    int pivot;
    if(low < high){
        pivot = Partition(L,low,high);
        
        Qsort(L,low,pivot - 1);
        Qsort(L,pivot + 1,high);
    }
}


void QuickSort(SqList *L){
    Qsort(L,1,L->length);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    SqList *L = (SqList *)malloc(sizeof(SqList));
    
    for (int i = 0; i < 10; i++) {
        L->r[i] = rand();
    }
    
    L->length = 10;
    
    QuickSort(L);
    
    for (int i = 1; i <= 10; i++) {
        printf("%d\n",L->r[i]);
    }
    
    printf("Hello, World!\n");
    return 0;
}
