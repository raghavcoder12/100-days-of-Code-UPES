//Q100: Print all sub-strings of a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, k, len;

    // Input the string
    printf("Enter a string: ");
    scanf("%s", str);

    // Find the length of the string
    len = strlen(str);

    // Select the starting position
    for (i = 0; i < len; i++) {
        
        // Select the ending position
        for (j = i; j < len; j++) {
            
            // Print characters of the substring
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            
            printf("\n");
        }
    }

    return 0;
}