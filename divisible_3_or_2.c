// Write a program to check whether a given number is divisible by 3 and divisible by 2.

#include<stdio.h>

int main(){
    int num = 12;

    if(num % 3 == 0 && num % 2 == 0){
       printf("This number is divisible by 3 and 2");
    }else{
       printf("This number is not divisible by 3 and 2");
    }
}