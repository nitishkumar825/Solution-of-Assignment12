// Write a recursive function to print first N even natural numbers

#include <stdio.h>

void PrintNEvenNaturalNum(int n){
    if(n==1)
        printf("%d ",n+1);
    else{
        PrintNEvenNaturalNum(n-1);
        printf("%d ",2*n);
    }
}