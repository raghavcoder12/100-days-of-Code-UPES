#include <stdio.h>
#include <string.h>  // for strlen()

int main() {
    char str[100];
    int i, len, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);  // reads a single word (no spaces)

    len = strlen(str);

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 0;  // not palindrome
            break;
        }
    }

    if (flag == 1)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}
