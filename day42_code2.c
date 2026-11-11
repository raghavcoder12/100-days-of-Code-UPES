#include <stdio.h>

int main() {
    char str[100];   // Character array to store the input string
    int i;           // Index variable for traversal

    // Prompt user for input
    printf("Enter a lowercase string: ");
    scanf("%s", str);  // Reads a single word (stops at space)

    // Traverse each character until the null terminator '\0'
    for (i = 0; str[i] != '\0'; i++) {
        // Check if character is lowercase alphabet
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Convert to uppercase using ASCII difference
            // 'a' (97) - 'A' (65) = 32 → subtract 32
            str[i] = str[i] - 32;
        }
    }

    // Print the converted uppercase string
    printf("Uppercase string: %s\n", str);

    return 0; // End of program
}
