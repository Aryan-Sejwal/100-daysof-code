//Q79: Perform diagonal traversal of a matrix.
#include <stdio.h>

int main() {
    int rows, cols, i, j;
    
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    
    int matrix[rows][cols];
    
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("\nMatrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    printf("\nDiagonal elements (top-left to bottom-right):\n");
    
    // Print main diagonal
    printf("Main diagonal: ");
    int min_size = rows;
    if (cols < rows) {
        min_size = cols;
    }
    
    for (i = 0; i < min_size; i++) {
        printf("%d ", matrix[i][i]);
    }
    printf("\n");
    
    // Print secondary diagonal (if square matrix)
    if (rows == cols) {
        printf("Secondary diagonal: ");
        for (i = 0; i < rows; i++) {
            printf("%d ", matrix[i][rows - 1 - i]);
        }
        printf("\n");
    }
    
    return 0;
}