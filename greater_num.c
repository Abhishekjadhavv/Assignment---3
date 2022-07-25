// Write a program to print greater between two numbers. Print one number of both are
// the same.

#include<stdio.h>

int main(){
  
  int a,b,max;
  printf("Enter two numbers\n");
  scanf("%d%d",&a,&b);
  max = a>b?a:b;
  printf("Greater number is %d ",max);
  return 0;

}