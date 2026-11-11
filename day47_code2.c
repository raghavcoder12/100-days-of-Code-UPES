#include <stdio.h>
#include <string.h>

int is_delimiter(char ch)
{
    return ch == ' ' || ch == '\t' || ch == '\n' || ch == '\r';
}

int main(void)
{
    char sentence[200];
    int i, currLen = 0, maxLen = 0, maxStart = 0, currStart = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (i = 0; sentence[i] != '\0'; i++)
    {
        if (!is_delimiter(sentence[i]))
        {
            if (currLen == 0)
                currStart = i;
            currLen++;
        }
        else if (currLen > 0)
        {
            if (currLen > maxLen)
            {
                maxLen = currLen;
                maxStart = currStart;
            }
            currLen = 0;
        }
    }

    if (currLen > maxLen)
    {
        maxLen = currLen;
        maxStart = currStart;
    }

    if (maxLen == 0)
    {
        printf("No words found in the sentence.\n");
        return 0;
    }

    printf("Longest word: %.*s\n", maxLen, sentence + maxStart);
    printf("Length: %d\n", maxLen);

    return 0;
}
