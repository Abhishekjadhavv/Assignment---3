// Write a program to check whether a given year is a leap year or not.

#include<stdio.h>

int main(){
   int year;
   printf("Enter a year");
   scanf("%d",&year);
  
   if(year % 4 == 0){
      printf("Given year is leap year");
   }else{
      printf("Given year is not leap year");
   }

   return 0;
}
