#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    // Input string
    printf("Enter a string: ");
    scanf("%s", str);

    // Count characters manually
    while (str[count] != '\0') {
        count++;
    }

    // Output result
    printf("Number of characters: %d\n", count);

    return 0;
}
