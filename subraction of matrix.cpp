#include <stdio.h>

int main() {
    int rows = 2, cols = 2;
    int matrixA[2][2] = { {9, 8}, {1, 1} };
    int matrixB[2][2] = { {5, 6}, {1, 1} };
    int matrixC[2][2];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrixC[i][j] = matrixA[i][j] - matrixB[i][j];
        }
    }
    printf("Resultant Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrixC[i][j]);
        }
        printf("\n");
    }

    return 0;
}
