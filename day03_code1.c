//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>
int main() {
    float C, F;

    printf("enter value of C");
    scanf("%f\n", &C);

    F= (C*9.0/5.0)+32;
    printf("F=%f\n", F);
    return 0;
}
