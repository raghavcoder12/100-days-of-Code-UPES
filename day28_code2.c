#include <stdio.h>

int main() {
    int n;

    // Read the number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];  // Declare array of size n

    // Input elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Output elements
    printf("Array elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
