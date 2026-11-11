// Q61: Search for an element in an array using linear search.


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
    
    // Read element to search
    scanf("%d", &key);
    
    // Linear search
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            pos = i;  // store index if found
            break;
        }
    }
    
    // Print result
    if(pos != -1)
        printf("Found at index %d\n", pos);
    else
        printf("-1\n");
    
    return 0;
}


