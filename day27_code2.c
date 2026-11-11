/*Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   * 
   */


#include <stdio.h>

int main() {
    int n = 5;  // Number of rows in the upper half

    // Upper half of the pattern
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half of the pattern (excluding the middle row)
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
