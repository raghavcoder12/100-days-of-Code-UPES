// Q76: Program to check if a matrix is symmetric
#include <stdio.h>

int main() {
    int n;

    // Input size of square matrix
    printf("Enter size of square matrix (n): ");
    scanf("%d", &n);

    int matrix[n][n];
    int isSymmetric = 1;  // Assume symmetric initially

    // Input matrix elements
    printf("Enter %d elements:\n", n * n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check symmetry: matrix[i][j] == matrix[j][i]
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;  // Not symmetric
                break;
            }
        }
        if (!isSymmetric) break;
    }

    // Display result
    if (isSymmetric)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
