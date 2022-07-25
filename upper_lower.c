// Write a program to check whether a given alphabet is in uppercase or lowercase.

#include<stdio.h>

int main(){
    char ch = 'H';

    if(ch>='A' && ch<='Z'){
      printf("Given alphabet is in uppercase");
    }else{
      printf("Given alphabet is in lowercase");
    }

    return 0;
}