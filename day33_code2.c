// Q66: Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() {
    int n, i, key, pos;
    
    // Read size of array
    scanf("%d", &n);
    int arr[n+1];  // +1 to accommodate new element
    
    // Read sorted array elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Read element to insert
    scanf("%d", &key);
    
    // Find position to insert
    pos = n;
    for(i = 0; i < n; i++) {
        if(arr[i] > key) {
            pos = i;
            break;
        }
    }
    
    // Shift elements to the right
    for(i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }
    
    // Insert element
    arr[pos] = key;
    n++;
    
    // Print updated array
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
