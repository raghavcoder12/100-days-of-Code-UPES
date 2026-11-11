#include <stdio.h>
#include <string.h>
#include <ctype.h>

int areAnagrams(const char *s1, const char *s2) {
    if (s1 == NULL || s2 == NULL) {
        return 0;
    }

    size_t len1 = strlen(s1);
    size_t len2 = strlen(s2);

    if (len1 != len2) {
        return 0;
    }

    int counts[256] = {0};

    for (size_t i = 0; i < len1; i++) {
        unsigned char ch = (unsigned char)tolower((unsigned char)s1[i]);
        counts[ch]++;
    }

    for (size_t i = 0; i < len2; i++) {
        unsigned char ch = (unsigned char)tolower((unsigned char)s2[i]);
        counts[ch]--;
        if (counts[ch] < 0) {
            return 0;
        }
    }

    for (int i = 0; i < 256; i++) {
        if (counts[i] != 0) {
            return 0;
        }
    }

    return 1;
}

int main(void) {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%99s", str1);

    printf("Enter second string: ");
    scanf("%99s", str2);

    if (areAnagrams(str1, str2)) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}
