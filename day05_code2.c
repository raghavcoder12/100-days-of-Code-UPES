//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>
int main()
 { 
int total_seconds, minutes, seconds;
float hours;
printf("enter time in seconds");
scanf("%d", &total_seconds);
hours= total_seconds/3600.0;
minutes= (total_seconds%3600)/60;
seconds= total_seconds/60;
printf("time hours:minutes:seconds:%.2f:%d:%d", hours, minutes, seconds);
return 0;
}