// Write a recursive function to print first N odd natural numbers in reverse order

#include <stdio.h>

void PrintOddNumbersInRev(int n){
    if(n==1)
        printf("%d ",n);
    else{
        printf("%d ",n*2-1);
        PrintOddNumbersInRev(n-1);
    }
}