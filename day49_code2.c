#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i = 0, lastSpace = -1;

    fgets(name, sizeof(name), stdin);

    // Find last space (before surname)
    while (name[i] != '\0') {
        if (name[i] == ' ') lastSpace = i;
        i++;
    }

    // Print initials for all words except surname
    if (name[0] != ' ' && name[0] != '\n')
        printf("%c.", name[0]);

    for (i = 0; i < lastSpace; i++) {
        if (name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\n') {
            printf("%c.", name[i+1]);
        }
    }

    // Print surname in full
    printf(" %s", name + lastSpace + 1);

    return 0;
}
