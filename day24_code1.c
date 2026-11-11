// Q47: Write a program to print the following pattern:
// *
// **
// ***
// ****
// *****
#include <stdio.h>

int main() {
    int n = 5;  // Number of rows in the pattern

    // Outer loop for rows
    for (int i = 1; i <= n; i++) {
        // Inner loop for printing stars
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");  // Move to next line after each row
    }

    return 0;
}
