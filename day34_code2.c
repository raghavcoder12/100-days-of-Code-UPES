// Q68: Delete an element from an array.

#include <stdio.h>

int main() {
    int n, i, key, pos = -1;
    
    // Read size of array
    scanf("%d", &n);
    int arr[n];
    
    // Read array elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Read element to delete
    scanf("%d", &key);
    
    // Find position of element
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            pos = i;
            break;
        }
    }
    
    if(pos == -1) {
        printf("Element not found\n");
    } else {
        // Shift elements left
        for(i = pos; i < n-1; i++) {
            arr[i] = arr[i+1];
        }
        n--;  // reduce size
        
        // Print updated array
        for(i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    
    return 0;
}
