#include <stdio.h>

int main() {
    char str[100], ch;
    int i, count = 0;

    printf("Enter a string: ");
    scanf("%s", str);  // reads a single word (no spaces)

    printf("Enter a character to find frequency: ");
    scanf(" %c", &ch);  // space before %c to skip newline

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("Frequency of '%c' = %d\n", ch, count);

    return 0;
}
