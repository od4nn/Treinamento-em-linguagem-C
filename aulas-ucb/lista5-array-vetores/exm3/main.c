#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Crie um programa que preencha uma primeira matriz de ordem 3 X 4 e uma
segunda matriz 4 X 2. O programa deverá, também, calcular e mostrar a matriz
resultante do produto matricial das duas matrizes anteriores, armazenando-o em
uma terceira matriz de ordem 3 X 2.*/

void preenche_vetor(int matriz[][4], int B[][2]);

void mostrar(int A[][4], int B[][2]);

void calcula_matricial(int A[][4], int B[][2], int C[][2]);

int main() {
    srand(time(NULL));
    int A[3][4], B[4][2], C[3][2];

    preenche_vetor(A, B);
    mostrar(A, B);
    calcula_matricial(A, B, C);
    return 0;
}

void preenche_vetor(int A[][4], int B[][2]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            A[i][j] = rand() % 10;
        }
    }
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 2; j++) {
            B[i][j] = rand() % 10;
        }
    }
}

void mostrar(int A[][4], int B[][2]) {
    int i, j;
    printf("VETOR A:\n");
    for (i = 0; i < 3; i++) {
        printf("[ ");
        for (j = 0; j < 4; j++) {
            printf("%d, ", A[i][j]);
        }
        printf("]\n");
    }

    printf("\nVETOR B:\n");
    for (i = 0; i < 4; i++) {
        printf("[ ");
        for (j = 0; j < 2; j++) {
            printf("%d, ", B[i][j]);
        }
        printf("]\n");
    }
}

void calcula_matricial(int A[][4], int B[][2], int C[][2]) {
    int i, j, k;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            C[i][j] = 0; //zera a posicao atual evitar lixo de memoria
            for (k = 0; k < 4; k++) { //o ponto em comum entre A e B, coluna e linha, ambas sao 4
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nVETOR C:\n");
    for (i = 0; i < 3; i++) {
        printf("[ ");
        for (j = 0; j < 2; j++) {
            printf("%d, ", C[i][j]);
        }
        printf("]\n");
    }
}
