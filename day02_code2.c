//Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
int main() {
    int r, area, circumference;
    float pi=3.14;
    printf("enter value of r");
    scanf("%d\n", &r);
    area= pi*r*r;
    circumference= 2*pi*r; 
    printf("area=%d\n", area);
    printf("circumference=%d", circumference);
    return 0;
}