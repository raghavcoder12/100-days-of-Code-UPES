// Q51: Write a program to print the following pattern:
//     5
//    45
//   345
//  2345
// 12345

#include <stdio.h>

int main() {
    int n = 5;  // Number of rows

    // Outer loop for rows
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // Print numbers starting from (n - i + 1) up to n
        for (int num = n - i + 1; num <= n; num++) {
            printf("%d", num);
        }
        printf("\n");  // Move to next line
    }

    return 0;
}
