// Q1: Write a program to input two numbers and display their sum.

#include <stdio.h>
int main()
{
    int A, B, sum;
    printf("entre value for A and B:");
    scanf("%d %d", &A, &B);
    sum = A + B;
    printf("sum of A and B is: %d", sum);
    return 0;
}
