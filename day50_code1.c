//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>
#include <string.h>

int main() {
    char date[20];

    // Input the date
    printf("Enter date (dd/04/yyyy): ");
    scanf("%s", date);

    // Replace /04/ with -Apr-
    date[2] = '-';
    date[3] = 'A';
    date[4] = 'p';
    date[5] = 'r';
    date[6] = '-';

    // Print the new date format
    printf("Formatted date: %s", date);

    return 0;
}