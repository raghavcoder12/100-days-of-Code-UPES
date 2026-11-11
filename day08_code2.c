//Q16: Write a program to input three numbers and find the largest among them using ifelse.



#include <stdio.h>
int main()
 { 
int a,b,c;
printf("enter number's:");
scanf("%d%d%d", &a, &b, &c);

if(a>=b && a>=c){
printf("%d is largest number", a);
}
else if(b>=a && b>=c){
    printf("%d is largest number", b);
}

else {
    printf("%d is largest number", c);
}
return 0;

}