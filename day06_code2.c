//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested ifelse.

#include <stdio.h>
int main()
 { 
int a;
printf("enter number");
scanf("%d", &a);

if (a>= 0) {
    if(a == 0) {
        printf("the number is ZERO.\n");
    } else{
        printf("the number is POSITIVE.\n");
    }
} else{
    printf("the number is NEGATIVE.\n");
}
return 0;
}


