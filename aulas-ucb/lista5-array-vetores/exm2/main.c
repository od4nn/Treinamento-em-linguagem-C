#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 4

/* Na teoria dos sistemas, define-se o elemento MINMAX de uma matriz como o
maior elemento da linha em que se encontra o menor elemento da matriz.
Elabore um programa que carregue uma matriz 4 X 4 com números reais,
calcule e mostre seu MINMAX e sua posição (linha e coluna). */

void preenche_vetor(float matriz[][TAMANHO]);
void calcula_minmax(float matriz[][TAMANHO]);
void mostra_matriz(float matriz[][TAMANHO]);

int main() {
    srand(time(NULL));
    float matriz[TAMANHO][TAMANHO];

    preenche_vetor(matriz);
    calcula_minmax(matriz);
    mostra_matriz(matriz);
    return 0;
}

void preenche_vetor(float matriz[][TAMANHO]) {
    int i, j;
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            matriz[i][j] = ((float)rand() / RAND_MAX) * 100.0; //a divisao gera um numero entre 0 a 1.0
        }
    }
}

void calcula_minmax(float matriz[][TAMANHO]) {
    int i, j, linha, pos = 0;
    float menor_num = matriz[0][0];

    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            if (matriz[i][j] < menor_num) {
                linha = i; //pega a linha
                menor_num = matriz[i][j];
            }
        }
    }

    float min_maxx = matriz[linha][0];
    for (i = 0; i < TAMANHO; i++) {
        if (matriz[linha][i] > min_maxx) {
            min_maxx = matriz[linha][i];
            pos = i; //pega posicao
        }
    }
    printf("O MIN_MAX eh:\t%.2f\nLinha:\t%d\nPosicao:\t%d\n", min_maxx, linha+1, pos+1);
}

void mostra_matriz(float matriz[][TAMANHO]) {
    int i, j;
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            printf("\nLinha: %d\nPosicao: %d\nNum: %.2f\n", i+1, j+1, matriz[i][j]);
        }
    }
}