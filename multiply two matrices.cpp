#include <stdio.h>

#define ROW1 2 
#define COL1 3 
#define ROW2 3 
#define COL2 2 

void multiplyMatrices(int firstMatrix[ROW1][COL1], int secondMatrix[ROW2][COL2], int resultMatrix[ROW1][COL2]) {
    int i, j, k;

    
    for (i = 0; i < ROW1; i++) {
        for (j = 0; j < COL2; j++) {
            resultMatrix[i][j] = 0;
        }
    }

    
    for (i = 0; i < ROW1; i++) {
        for (j = 0; j < COL2; j++) {
            for (k = 0; k < COL1; k++) {
                resultMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

void printMatrix(int matrix[ROW1][COL2]) {
    int i, j;
    for (i = 0; i < ROW1; i++) {
        for (j = 0; j < COL2; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int firstMatrix[ROW1][COL1] = { {1, 2, 3}, {4, 5, 6} };
    int secondMatrix[ROW2][COL2] = { {7, 8}, {9, 10}, {11, 12} };
    int resultMatrix[ROW1][COL2]; 
   
    multiplyMatrices(firstMatrix, secondMatrix, resultMatrix);

    
    printf("Resultant matrix after multiplication:\n");
    printMatrix(resultMatrix);

    return 0;
}
