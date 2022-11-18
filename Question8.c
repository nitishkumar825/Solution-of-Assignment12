// Write a recursive function to print binary of a given decimal number

#include <stdio.h>

void DecimalToBinary(int n){
    if(n==1)
        printf("%d",n);
    else{
        DecimalToBinary(n/2);
        printf("%d",n%2);
    }
}