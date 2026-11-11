#include <stdio.h>

int main() {
    char str[100];   // Character array to store the input string
    int i = 0;       // Index variable for traversal

    // Prompt user for input
    printf("Enter a string: ");
    // Read string including spaces until newline (fgets is safer than scanf)
    fgets(str, sizeof(str), stdin);

    // Print each character of the string on a new line
    // Stop when we reach either the null terminator '\0' or newline '\n'
    while (str[i] != '\0' && str[i] != '\n') {
        printf("%c\n", str[i]);  // Print current character followed by newline
        i++;                     // Move to next character
    }

    return 0; // End of program
}
