#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 10
/* Elabore um programa que preencha uma matriz 10 X 10 com números inteiros,
execute as trocas especificadas a seguir e mostre a matriz resultante.
• a linha 2 com a linha 8;
• a coluna 4 com a coluna 10;
• a diagonal principal com a diagonal secundária;
• a linha 5 com a coluna 10. */

void preenche_vetor(int matriz[][TAMANHO]);

void mostra_matriz(int matriz[][TAMANHO]);

void troca_linha(int matriz[][TAMANHO]);

void troca_coluna(int matriz[][TAMANHO]);

void troca_diagonal(int matriz[][TAMANHO]);

void troca_linha_coluna(int matriz[][TAMANHO]);

int main() {
    srand(time(NULL));
    int matriz[TAMANHO][TAMANHO];

    preenche_vetor(matriz);
    printf("\nMATRIZ: \n");
    mostra_matriz(matriz);

    troca_linha(matriz);
    printf("\nMATRIZ: LINHA 2 com 8 TROCADAS: \n");
    mostra_matriz(matriz);

    troca_coluna(matriz);
    printf("\nMATRIZ: COLUNA 4 com 10 TROCADAS: \n");
    mostra_matriz(matriz);

    troca_diagonal(matriz);
    printf("\nMATRIZ: DIAGONAL PRIN com SECUN TROCADAS: \n");
    mostra_matriz(matriz);

    troca_linha_coluna(matriz);
    printf("\nMATRIZ: LINHA 5 com 10 TROCADAS: \n");
    mostra_matriz(matriz);

    return 0;
}

void preenche_vetor(int matriz[][TAMANHO]){
    int i, j;

    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            matriz[i][j] = rand() % 50;
        }
    }
}
void troca_linha(int matriz[][TAMANHO]) {
    int i, temp;
    for (i = 0; i < TAMANHO; i++) {
        temp = matriz[1][i];
        matriz[1][i] = matriz[7][i];
        matriz[7][i] = temp;
    }
}
void troca_coluna(int matriz[][TAMANHO]) {
    int i, temp;
    for (i = 0; i < TAMANHO; i++) {
        temp = matriz[i][3];
        matriz[i][3] = matriz[i][9];
        matriz[i][9] = temp;
    }
}
void troca_diagonal(int matriz[][TAMANHO]) {
    int i, temp;
    for (i = 0; i < TAMANHO; i++) {
        temp = matriz[i][i];
        matriz[i][i] = matriz[i][TAMANHO - 1 - i];
        matriz[i][TAMANHO - 1 - i] = temp;
    }
}
void troca_linha_coluna(int matriz[][TAMANHO]) {
    int i, temp;
    for (i = 0; i < TAMANHO; i++) {
        temp = matriz[4][i];
        matriz[4][i] = matriz[i][9];
        matriz[i][9] = temp;
    }
}
void mostra_matriz(int matriz[][TAMANHO]) {
    int i, j;
    for (i = 0; i < TAMANHO; i++) {
        printf("[ ");
        for (j = 0; j < TAMANHO; j++) {
            printf("%d, ", matriz[i][j]);
        }
        printf("]\n");
    }
}
