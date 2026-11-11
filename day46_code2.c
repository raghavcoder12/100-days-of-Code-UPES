#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};  // frequency array for 'a' to 'z'
    int i;

    printf("Enter a string (lowercase alphabets only): ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        int index = str[i] - 'a';
        freq[index]++;

        if (freq[index] == 2) {  // first time a character repeats
            printf("First repeating character: %c\n", str[i]);
            return 0;
        }
    }

    printf("No repeating character found\n");
    return 0;
}
