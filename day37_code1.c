// Q73: Program to find the sum of each row of a matrix
#include <stdio.h>

int main() {
    int rows, cols;

    // Input number of rows and columns
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];   // Declare matrix
    int rowSum[rows];         // Array to store sum of each row

    // Initialize rowSum array to 0
    for (int i = 0; i < rows; i++) {
        rowSum[i] = 0;
    }

    // Input matrix elements
    printf("Enter %d elements:\n", rows * cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            rowSum[i] += matrix[i][j];  // Add element to corresponding row sum
        }
    }

    // Display the sum of each row
    printf("Row sums:\n");
    for (int i = 0; i < rows; i++) {
        printf("%d ", rowSum[i]);
    }
    printf("\n");

    return 0;
}
