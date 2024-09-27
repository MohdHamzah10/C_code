#include <stdio.h>

int main() {
    int a[10][10], b[10][10], result[10][10];
    int r1, c1, r2, c2, i, j, k;

    // Input dimensions of first matrix
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    // Input dimensions of second matrix
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Check if matrix multiplication is possible
    if (c1 != r2) {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }

    // Input elements of first matrix
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    // Input elements of second matrix
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    // Initialize result matrix to 0
    for (i = 0; i < r1; i++)
        for (j = 0; j < c2; j++)
            result[i][j] = 0;

    // Multiply matrices
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Output the result
    printf("Resultant matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
