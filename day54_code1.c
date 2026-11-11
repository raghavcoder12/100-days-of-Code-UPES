//Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Return the pivot integer x. If no such integer exists, return -1.

#include <stdio.h>

int main() {
    int n, x, i;
    int leftSum, rightSum;

    // Input a positive integer
    printf("Enter n: ");
    scanf("%d", &n);

    // Check each possible pivot integer
    for (x = 1; x <= n; x++) {
        leftSum = 0;
        rightSum = 0;

        // Calculate sum from 1 to x
        for (i = 1; i <= x; i++) {
            leftSum += i;
        }

        // Calculate sum from x to n
        for (i = x; i <= n; i++) {
            rightSum += i;
        }

        // Check if both sums are equal
        if (leftSum == rightSum) {
            printf("Pivot integer: %d", x);
            return 0;
        }
    }

    // If no pivot integer exists
    printf("-1");

    return 0;
}
