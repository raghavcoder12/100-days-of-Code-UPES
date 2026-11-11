#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char name[200];
    char *tokens[50];
    int count = 0;
    int i;

    printf("Enter full name: ");
    if (!fgets(name, sizeof(name), stdin))
    {
        return 1;
    }

    name[strcspn(name, "\n")] = '\0';

    char *token = strtok(name, " ");
    while (token != NULL)
    {
        tokens[count++] = token;
        token = strtok(NULL, " ");
    }

    if (count == 0)
    {
        printf("No name entered.\n");
        return 0;
    }

    if (count == 1)
    {
        printf("%s\n", tokens[0]);
        return 0;
    }

    printf("%c", toupper((unsigned char)tokens[0][0]));
    for (i = 1; i < count - 1; i++)
    {
        printf(" %c", toupper((unsigned char)tokens[i][0]));
    }
    printf(" %s\n", tokens[count - 1]);

    return 0;
}
