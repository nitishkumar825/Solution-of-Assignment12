// Write a recursive function to print octal of a given decimal number

#include <stdio.h>

void DecimalToOctal(int n){
    if(n<8)
        printf("%d",n);
    else{
        DecimalToOctal(n/8);
        printf("%d",n%8);
    }
}