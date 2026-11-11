#include <stdio.h>

// Function to perform diagonal traversal of a matrix
void diagonalTraversal(int rows, int cols, int mat[rows][cols]) {
    int i, j, k;

    // Total number of diagonals in a matrix = rows + cols - 1
    for (k = 0; k < rows + cols - 1; k++) {
        if (k % 2 == 0) {
            // Even diagonal → traverse upward (bottom-left to top-right)
            
            // Starting point: either at row 'k' (if within bounds) or last row
            i = (k < rows) ? k : rows - 1;
            j = k - i; // Column index adjusts accordingly

            // Move upward: decrease row index, increase column index
            while (i >= 0 && j < cols) {
                printf("%d ", mat[i][j]);
                i--;
                j++;
            }
        } else {
            // Odd diagonal → traverse downward (top-right to bottom-left)
            
            // Starting point: either at column 'k' (if within bounds) or last column
            j = (k < cols) ? k : cols - 1;
            i = k - j; // Row index adjusts accordingly

            // Move downward: increase row index, decrease column index
            while (j >= 0 && i < rows) {
                printf("%d ", mat[i][j]);
                i++;
                j--;
            }
        }
    }
}

int main() {
    int rows, cols;
    // Input matrix dimensions
    scanf("%d %d", &rows, &cols);

    // Declare matrix with given dimensions
    int mat[rows][cols];

    // Input matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // Perform diagonal traversal
    diagonalTraversal(rows, cols, mat);
    return 0;
}
