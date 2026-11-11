//Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears more than n / 2 times. You may assume that the majority element always exists in the array.

#include <stdio.h>

int main() {
    int nums[100], n, i, j;
    int count, majority = -1;

    // Input the size of the array
    printf("Enter size of array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Check each element for majority
    for (i = 0; i < n; i++) {
        count = 0;

        // Count occurrences of the current element
        for (j = 0; j < n; j++) {
            if (nums[i] == nums[j]) {
                count++;
            }
        }

        // Check if it appears more than n/2 times
        if (count > n / 2) {
            majority = nums[i];
            break;
        }
    }

    // Print the majority element or -1
    printf("Majority element: %d", majority);

    return 0;
}
