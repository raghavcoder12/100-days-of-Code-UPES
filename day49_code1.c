#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char name[100];

    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
        len--;
    }

    printf("Initials: ");
    for (size_t i = 0; i < len; i++) {
        if (i == 0 || name[i - 1] == ' ') {
            if (name[i] != ' ') {
                printf("%c", toupper((unsigned char)name[i]));
            }
        }
    }

    printf("\n");
    return 0;
}
