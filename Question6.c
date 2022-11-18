// Write a recursive function to print first N even natural numbers in reverse order

#include <stdio.h>

void PrintNEvenNaturalNumInRev(int n){
    if(n==1)
        printf("%d ",n+1);
    else{
        printf("%d ",2*n);
        PrintNEvenNaturalNumInRev(n-1);
    }
}