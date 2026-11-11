#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Traverse and replace spaces
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            str[i] = '-';
        }
        i++;
    }

    // Output result
    printf("Output: %s\n", str);

    return 0;
}
