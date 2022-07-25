// Write a program to find the greatest among three given numbers. Print number once
// if the greatest number appears two or three times.

#include <stdio.h>

int main()
{
    int a = 99, b = 100, c = 99, greatest;

    greatest = a > b ? a > c ? a : c : b > c ? b: c;

    printf("Greatest number among three numbers is : %d", greatest);

    return 0;
}