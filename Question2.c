// Write a recursive function to print first N natural numbers in reverse order

#include <stdio.h>

void PrintFirstNNaturalNumReverse(int n){
    if(n>0){
        printf("%d ",n);
        PrintFirstNNaturalNumReverse(n-1);
    }
}