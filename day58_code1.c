#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Read size of array
    int nums[n];
    for(int i=0; i<n; i++) scanf("%d", &nums[i]); // Read array elements

    int answer[n];
    // For each element, compute product of all others
    for(int i=0; i<n; i++) {
        int prod = 1;
        for(int j=0; j<n; j++) {
            if(i != j) prod *= nums[j]; // Skip nums[i]
        }
        answer[i] = prod;
    }

    // Print result in array format
    printf("[");
    for(int i=0; i<n; i++) {
        printf("%d", answer[i]);
        if(i != n-1) printf(", ");
    }
    printf("]\n");
    return 0;
}
