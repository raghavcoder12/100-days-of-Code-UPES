#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n); // Read size of array
    int arr[n];
    for(int i=0; i<n; i++) scanf("%d", &arr[i]); // Read array elements
    scanf("%d", &k); // Read subarray size

    int maxSum = -1; // Initialize max sum
    // Check all subarrays of size k
    for(int i=0; i<=n-k; i++) {
        int sum = 0;
        for(int j=i; j<i+k; j++) {
            sum += arr[j]; // Sum subarray
        }
        if(sum > maxSum) maxSum = sum; // Update max if larger
    }
    printf("%d\n", maxSum);
    return 0;
}
