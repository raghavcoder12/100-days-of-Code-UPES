//Q103: Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all elements strictly to the left of the index is equal to the sum of all elements strictly to the index's right.

#include <stdio.h>

int main() {
    int arr[100], n, i, j;
    int leftSum, rightSum;

    // Input the size of the array
    printf("Enter size of array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check each index for the pivot
    for (i = 0; i < n; i++) {
        leftSum = 0;
        rightSum = 0;

        // Calculate sum of elements on the left
        for (j = 0; j < i; j++) {
            leftSum += arr[j];
        }

        // Calculate sum of elements on the right
        for (j = i + 1; j < n; j++) {
            rightSum += arr[j];
        }

        // Check if left sum equals right sum
        if (leftSum == rightSum) {
            printf("Pivot index: %d", i);
            return 0;
        }
    }

    // If no pivot index exists
    printf("-1");

    return 0;
}
