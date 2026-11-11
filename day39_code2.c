#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Collect diagonal elements
    int diag[rows < cols ? rows : cols];
    int count = 0;
    for (int i = 0; i < rows && i < cols; i++) {
        diag[count++] = matrix[i][i];
    }

    // Check distinctness
    int distinct = 1;
    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            if (diag[i] == diag[j]) {
                distinct = 0;
                break;
            }
        }
        if (!distinct) break;
    }

    if (distinct)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
