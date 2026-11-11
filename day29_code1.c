// Q57: Program to find the sum of array elements
#include <stdio.h>

int main() {
    int n, sum = 0;

    // Prompt user for number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];  // Declare array of size n

    // Input array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  // Add each element to sum
    }

