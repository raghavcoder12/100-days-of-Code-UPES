//Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the first element greater than or equal to x.

#include <stdio.h>

int main() {
    int arr[100], n, x, i;

    // Input the size of the array
    printf("Enter size of array: ");
    scanf("%d", &n);

    // Input sorted array elements
    printf("Enter sorted array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the value of x
    printf("Enter x: ");
    scanf("%d", &x);

    // Find the first element greater than or equal to x
    for (i = 0; i < n; i++) {
        if (arr[i] >= x) {
            printf("Index: %d", i);
            return 0;
        }
    }

    // If no such element exists
    printf("Index: -1");

    return 0;
}
