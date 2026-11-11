#include <stdio.h>

int main() {
    int rows, cols;
    // Read number of rows and columns of the matrix
    scanf("%d %d", &rows, &cols);

    // Declare a 2D array (matrix) with given dimensions
    int matrix[rows][cols];

    // Input matrix elements from the user
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Collect diagonal elements (main diagonal only: positions where i == j)
    // The diagonal length is limited by the smaller of rows or cols
    int diag[rows < cols ? rows : cols];
    int count = 0;
    for (int i = 0; i < rows && i < cols; i++) {
        diag[count++] = matrix[i][i];
    }

    // Check if diagonal elements are distinct
    int distinct = 1; // Assume distinct initially
    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            // If any two diagonal elements are equal, set distinct = 0
            if (diag[i] == diag[j]) {
                distinct = 0;
                break;
            }
        }
        if (!distinct) break; // Exit early if duplicate found
    }

    // Print result based on distinctness check
    if (distinct)
        printf("True\n");   // All diagonal elements are distinct
    else
        printf("False\n");  // Duplicate found in diagonal

    return 0;
}
