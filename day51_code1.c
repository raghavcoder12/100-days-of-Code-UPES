//Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the array should be separated by space.

#include <stdio.h>

int main() {
    int nums[100], n, target, i;
    int first = -1, last = -1;

    // Input the size of the array
    printf("Enter size of array: ");
    scanf("%d", &n);

    // Input sorted array elements
    printf("Enter sorted array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Input the target element
    printf("Enter target: ");
    scanf("%d", &target);

    // Find first and last occurrence
    for (i = 0; i < n; i++) {
        if (nums[i] == target) {
            if (first == -1) {
                first = i;  // Store first occurrence index
            }
            last = i;       // Update last occurrence index
        }
    }

    // Print the results
    if (first == -1) {
        printf("-1, -1\n");
    } else {
        printf("First occurrence: %d\n", nums[first]);
        printf("Last occurrence: %d\n", nums[last]);
        printf("First index: %d\n", first);
        printf("Last index: %d\n", last);
    }

    return 0;
}
