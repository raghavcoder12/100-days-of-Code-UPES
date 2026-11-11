// Q64: Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    long num;
    int freq[10] = {0}; // Array to store frequency of digits
    int digit, maxDigit, i;

    // Input number
    scanf("%ld", &num);

    // Count frequency of each digit
    while(num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    // Find digit with maximum frequency
    maxDigit = 0;
    for(i = 1; i < 10; i++) {
        if(freq[i] > freq[maxDigit]) {
            maxDigit = i;
        }
    }

    // Print result
    printf("%d", maxDigit);

    return 0;
}
