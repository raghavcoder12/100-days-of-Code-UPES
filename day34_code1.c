// Q67: Insert an element in an array at a given position.

#include <stdio.h>

int main() {
    int n, i, pos, key;
    
    // Read size of array
    scanf("%d", &n);
    int arr[n+1];  // +1 to accommodate new element
    
    // Read array elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Read element to insert and position
    scanf("%d %d", &key, &pos);
    
    // Validate position
    if(pos < 0 || pos > n) {
        printf("Invalid position\n");
        return 0;
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
