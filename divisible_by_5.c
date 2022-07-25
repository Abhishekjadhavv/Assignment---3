// Write a program to check whether a given number is divisible by 5 or not

#include<stdio.h>

int main(){

    int num = 34;

    if(num % 5 == 0){
       printf("divisible by 5");
    }else{
        printf("not divisible by 5");
    }
    return 0;
}