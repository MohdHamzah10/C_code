#include <stdio.h>

#define MAX 100

void multiplyMatrices(int firstMatrix[MAX][MAX], int secondMatrix[MAX][MAX], int result[MAX][MAX], int rowFirst, int colFirst, int rowSecond, int colSecond) {
    for (int i = 0; i < rowFirst; ++i) {
        for (int j = 0; j < colSecond; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < colFirst; ++k) {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}


void printMatrix(int matrix[MAX][MAX], int row, int col) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int firstMatrix[MAX][MAX], secondMatrix[MAX][MAX], result[MAX][MAX];
    int rowFirst, colFirst, rowSecond, colSecond;

   
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &rowFirst, &colFirst);

  
    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &rowSecond, &colSecond);

    if (colFirst != rowSecond) {
        printf("Matrix multiplication not possible.\n");
        return -1;
    }

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rowFirst; ++i) {
        for (int j = 0; j < colFirst; ++j) {
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rowSecond; ++i) {
        for (int j = 0; j < colSecond; ++j) {
            scanf("%d", &secondMatrix[i][j]);
        }
    }

    
    multiplyMatrices(firstMatrix, secondMatrix, result, rowFirst, colFirst, rowSecond, colSecond);

    printf("Resultant matrix:\n");
    printMatrix(result, rowFirst, colSecond);

    return 0;
}

