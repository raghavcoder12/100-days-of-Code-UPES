//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>
int main() 
{
    int l, b, area, perimeter;
    printf("enter value of l and b:");
    scanf("%d%d", &l, &b);
    
    area= l * b;
    printf("area = %d\n", area);

    perimeter= 2 * (l+b);
    printf("perimeter = %d", perimeter);

return 0;
}

