//Q17: Write a program to find the roots of a quadratic equation and categorize them.


#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d;
    float root1, root2;

    printf("Enter a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0)
    {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);

        printf("Two real and different roots\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f", root2);
    }
    else if (d == 0)
    {
        root1 = -b / (2 * a);

        printf("Two real and equal roots\n");
        printf("Root = %.2f", root1);
    }
    else
    {
        printf("Complex roots");
    }

    return 0;
}
