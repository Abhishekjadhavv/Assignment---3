// Write a program to take marks of 5 subjects from the user. Assume marks are given
// out of 100 and passing marks is 33. Now display whether the candidate passed the
// examination or failed.

#include<stdio.h>

int main(){

    int marks[5],p;

    printf("Enter your marks of 5 subjects\n");

    for (int  i = 0; i <=4; i++)
    {
        scanf("%d",&marks[i]);
    }

    for (p = 0; p <=4; p++)
    {
        if(marks[p]<33 || marks[p]>100){
            break; 
        }
    }
    
    if(p==5){
        printf("This candidate passed the examination");
    }else if(marks[p]<33){
       printf("This candidate failed the examination because this candidate got less than 33 mark in some subjects");
    }else{
        printf("Sorry invalid marks please check");
    }
    return 0;
}