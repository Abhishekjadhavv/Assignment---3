// Write a program to check whether a given number is a three-digit number or not.

#include <stdio.h>

int main()
{

    int num = 134, count = 0;

    while (num)
    {
        count++;
        num /= 10;
    }

    if (count == 3)
    {
        printf("Given number is three digit number");
    }
    else
    {
        printf("Given number is Not three digit number");
    }

    return 0;
}