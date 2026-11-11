#include <stdio.h>

int main()
{
    int A, B, sum, difference, product;  // Variables for input and results
    float quotient;                      // Variable for division result

    // Prompt user to enter two numbers
    printf("Enter value for A and B: ");
    scanf("%d %d", &A, &B);

    // Perform arithmetic operations
    sum = A + B;              // Addition
    difference = A - B;       // Subtraction
    product = A * B;          // Multiplication
    quotient = (float)A / B;  // Division (typecast to float for decimal result)

    // Display results
    printf("Sum of A and B is: %d\n", sum);
    printf("Difference of A and B is: %d\n", difference);
    printf("Product of A and B is: %d\n", product);
    printf("Quotient of A and B is: %.2f\n", quotient);

    return 0;  // End of program
}
