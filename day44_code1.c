#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int spaces = 0, digits = 0, special = 0, i = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Traverse the string
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            spaces++;
        } else if (isdigit(str[i])) {
            digits++;
        } else if (!isalpha(str[i]) && str[i] != '\n') {
            special++;
        }
        i++;
    }

    // Output result
    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);

    return 0;
}
