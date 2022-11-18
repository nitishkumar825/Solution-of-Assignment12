// Write a recursive function to print reverse of a given number

#include <stdio.h>

void ReverseTheNumber(int n){
    if(n<=9)
        printf("%d",n);
    else{
        printf("%d",n%10);
        ReverseTheNumber(n/10);
    }
}