#include <stdio.h>
#include <ctype.h>  // for tolower()

int main() {
    char str[100];              // Array to store the input string (max 99 chars + '\0')
    int vowels = 0, consonants = 0;  // Counters for vowels and consonants
    int i;                      // Index variable for traversal

    // Prompt user for input
    printf("Enter a string: ");
    scanf("%s", str);  // Reads a single word (stops at space)

    // Traverse each character in the string until null terminator
    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);  // Convert character to lowercase for uniform comparison

        // Check if character is an alphabet (a-z)
        if ((ch >= 'a' && ch <= 'z')) {
            // If character is a vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;  // Otherwise, it's a consonant
        }
    }

    // Print the final counts
    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);

    return 0; // End of program
}
