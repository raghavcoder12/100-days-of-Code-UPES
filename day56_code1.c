/*Q106: Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1. For example, next greater of the last element is always -1.

N.B: 
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.*/

#include <stdio.h>

int main() {
    int arr[100], n, i, j, next;

    // Input the size of the array
    printf("Enter size of array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the next greater element for each element
    for (i = 0; i < n; i++) {
        next = -1;

        // Search for a greater element on the right
        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                next = arr[j];
                break;
            }
        }

        // Print the result in comma-separated form
        if (i > 0) {
            printf(", ");
        }
        printf("%d", next);
    }

    return 0;
}
