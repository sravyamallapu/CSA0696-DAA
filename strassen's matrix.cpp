#include <stdio.h>

#define SIZE 2

void addMatrix(int a[SIZE][SIZE], int b[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

void subtractMatrix(int a[SIZE][SIZE], int b[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = a[i][j] - b[i][j];
        }
    }
}

void strassenMultiply(int A[SIZE][SIZE], int B[SIZE][SIZE], int C[SIZE][SIZE]) {
    if (SIZE == 2) {
        int M1 = (A[0][0] + A[1][1]) * (B[0][0] + B[1][1]);
        int M2 = (A[1][0] + A[1][1]) * B[0][0];
        int M3 = A[0][0] * (B[0][1] - B[1][1]);
        int M4 = A[1][1] * (B[1][0] - B[0][0]);
        int M5 = (A[0][0] + A[0][1]) * B[1][1];
        int M6 = (A[1][0] - A[0][0]) * (B[0][0] + B[0][1]);
        int M7 = (A[0][1] - A[1][1]) * (B[1][0] + B[1][1]);
        
        C[0][0] = M1 + M4 - M5 + M7;
        C[0][1] = M3 + M5;
        C[1][0] = M2 + M4;
        C[1][1] = M1 - M2 + M3 + M6;
    }
}

void printMatrix(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[SIZE][SIZE] = { {1, 2}, {3, 4} };
    int B[SIZE][SIZE] = { {5, 6}, {7, 8} };
    int C[SIZE][SIZE];

    printf("Matrix A:\n");
    printMatrix(A);
    
    printf("Matrix B:\n");
    printMatrix(B);
    
    strassenMultiply(A, B, C);
    
    printf("Matrix C (Result of A * B):\n");
    printMatrix(C);

    return 0;
}
