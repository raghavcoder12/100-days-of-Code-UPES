//Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

#include <stdio.h>

int main() {
    int arr[100], n, k, i, j, max;

    // Input the size of the array
    printf("Enter size of array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input window size k
    printf("Enter k: ");
    scanf("%d", &k);

    // Find the maximum element in each subarray of size k
    for (i = 0; i <= n - k; i++) {
        max = arr[i];
        
        // Find max in the current window
        for (j = 1; j < k; j++) {
            if (arr[i + j] > max) {
                max = arr[i + j];
            }
        }
        
        // Print the maximum element
        printf("%d ", max);
    }
    
    printf("\n");

    return 0;
}