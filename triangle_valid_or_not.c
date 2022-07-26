// Write a program which takes the length of the sides of a triangle as an input. Display
// whether the triangle is valid or not.

#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter the three side's length of the triangle");
    scanf("%d%d%d",&a,&b,&c);

    if((a+b)>c && (a+c)>b && (c+b)>a){
       printf("triangle is valid");
    }else{
      printf("triangle is not valid");
    }

    return 0;

}

