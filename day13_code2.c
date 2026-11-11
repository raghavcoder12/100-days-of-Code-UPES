// Q26: Write a program to print numbers from 1 to n.

#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Loop from 1 to n
    for (int i = 1; i <= n; i++) {
        printf("%d\n", i);  // Print each number on a new line
    }

    return 0;
}
