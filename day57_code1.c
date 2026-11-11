/*Q107: Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist previous greater of current element, then previous greater element for current element is -1. For example, previous greater of the first element is always -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.*/

#include <stdio.h>

int main() {
    int arr[100], n, i, j, prev;

    // Input the size of the array
    printf("Enter size of array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the previous greater element
    for (i = 0; i < n; i++) {
        prev = -1;

        // Search for a greater element on the left
        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prev = arr[j];
                break;
            }
        }

        // Print results separated by commas
        if (i > 0) {
            printf(", ");
        }
        printf("%d", prev);
    }

    return 0;
}