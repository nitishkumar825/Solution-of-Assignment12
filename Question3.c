// Write a recursive function to print first N odd natural numbers

#include <stdio.h>

void PrintFirstNOddNumbers(int n){
    if(n==1)
        printf("%d ",n);
    else{
        PrintFirstNOddNumbers(n-1);
        printf("%d ",2*n-1);
    }
}