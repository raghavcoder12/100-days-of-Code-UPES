//Q8: Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>

int main () {
    int n, sum = 0;  // Variable for input number n and sum initialized to 0

    // Prompt user to enter the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Loop from 1 to n and add each number to sum
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Display the result
    printf("Sum of first %d natural numbers is: %d\n", n, sum);

    return 0;  // End of program
}
