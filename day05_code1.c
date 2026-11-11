//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>
int main()
 { 
float p, r, t;
printf("enter value of p");// p is principal amount
scanf("%f", &p);
printf("enter value of r");// r is rate of interest
scanf("%f", &r);
printf("enter value of t");// t is time in years
scanf("%f\n", &t);
float si=(p*r*t)/100;
printf("simple intrest=%.2f\n", si);

float ci= p*(pow(1+r/100, t)-1);
printf("compound interest= %.2f", ci);
return 0;
}