// Write a recursive function to print squares of first N natural numbers

#include <stdio.h>

void PrintSquareOfNNaturalNum(int n){
    if(n==1)
        printf("%d ",n);
    else{
        PrintSquareOfNNaturalNum(n-1);
        printf("%d ",n*n);
    }
}