// Q65: Search in a sorted array using binary search.

#include <stdio.h>

int main() {
    int n, i, key, low, high, mid, pos = -1;
    
    // Read size of array
    scanf("%d", &n);
    int arr[n];
    
    // Read sorted array elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Read element to search
    scanf("%d", &key);
    
    // Binary search
    low = 0;
    high = n - 1;
    while(low <= high) {
        mid = (low + high) / 2;
        if(arr[mid] == key) {
            pos = mid;  // found
            break;
        } else if(arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    // Print result
    if(pos != -1)
        printf("Found at index %d\n", pos);
    else
        printf("-1\n");
    
    return 0;
}
