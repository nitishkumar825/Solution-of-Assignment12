// Write a recursive function to print first N natural numbers

#include <stdio.h>

void PrintFirstNNaturalNum(int n){
    if(n>0){
        PrintFirstNNaturalNum(n-1);
        printf("%d ",n);
    }
}