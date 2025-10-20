#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ESCOLHA 1 // se quiser escolher os numeros mude para 0

/*Crie um programa que preencha uma matriz 3 X 4 com números inteiros e some
cada uma das linhas, armazenando os resultados das somas em um vetor. A
seguir, o programa deverá multiplicar cada elemento da matriz pela soma da
linha correspondente e mostrar a matriz resultante. */

void preenche_vetor(int matriz[][4]);
void calcula_soma(int matriz[][4], int soma[]);
void troca_numero(int matriz[][4], int soma[]);

int main(){
    srand(time(NULL));//gerar numeros aleatorios a cada execucao
    int matriz[3][4], soma[3];
    preenche_vetor(matriz);
    calcula_soma(matriz, soma);
    troca_numero(matriz, soma);
    return 0;
}

void preenche_vetor(int matriz[][4]) {
    int i, j;

    if (ESCOLHA == 1) {
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 4; j++) {
                matriz[i][j] = rand() % 100;
            }
        }
    }
    else {
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 4; j++) {
                printf("Escolha o numero da linha %d, posicao %d: ", i+1, j+1);
                scanf("%d", &matriz[i][j]);
            }
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("\nO numero da linha %d, posicao %d e: %d", i+1, j+1, matriz[i][j]);
        }
    }

}

void calcula_soma(int matriz[][4], int soma[]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        soma[i] = 0; //zera
        for (j = 0; j < 4; j++) {
            soma[i] += matriz[i][j];
        }
    }
    printf("\n\t--------SOMAS--------");
    for (i = 0; i < 3; i++) {
        printf("\nSoma da linha %d: %d", i+1, soma[i]);
    }
}

void troca_numero(int matriz[][4], int soma[]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            matriz[i][j] *= soma[i];
        }
    }

    printf("\n\t--------DEPOIS DA MULTIPLICACAO--------");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("\nO numero da linha %d, posicao %d e: %d", i+1, j+1, matriz[i][j]);
        }
    }
}

