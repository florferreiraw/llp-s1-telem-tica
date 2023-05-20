// Atividade 2 de Lógica e Linguagem de Programação em C - IFCE 
// Professor Ricardo Taveira
// Aluna: Francisca Lorena Ferreira.

#include <stdio.h>

void somaMatrizes(int (*matrixA)[4], int (*matrixB)[4], int (*matrixC)[4], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 4; j++) {
            matrixC[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
}

int main() {
    int matrixA[4][4] = { {24, 2, 3, 4}, {44, 95, 6, 5}, {27, 68, 59, 34}, {10, 19, 22, 57}};

    int matrixB[4][4] = { {1, 8, 17, 18}, {6, 15, 22, 13}, {63, 2, 91, 10}, {14, 14, 15, 23}};

    int matrixC[4][4]; // Matriz resultado

    somaMatrizes(matrixA, matrixB, matrixC, 4);

    printf("Matriz C (A + B):\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {


            printf("%d ", matrixC[i][j]);
        }
        printf("\n");
    }
    return 0;
}          
