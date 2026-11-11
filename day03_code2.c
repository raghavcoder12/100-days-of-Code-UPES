//Q6: Write a program to swap two numbers using a third variable.

#include <stdio.h>
int main()
 { 
  int a, b, temp;
  printf("enter value for A and B");
  scanf("%d%d\n", &a, &b);
  temp=a;
  a=b;
  b=temp;
  printf("after swapping a=%d, b=%d\n", a,b);
   return 0;
}

