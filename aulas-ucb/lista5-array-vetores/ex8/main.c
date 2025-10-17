#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 8

/*Faça um programa que, no momento de preencher um vetor com oito números inteiros, já os
armazene de forma crescente. */

void preenche_vetor(int vetor[], int vetor_cres[]);
void ordena(int vetor_cres[], int ind);

int main()
{
    int vetor[TAMANHO], vetor_cres[TAMANHO], i;
    printf("Preencha o vetor.\n");
    preenche_vetor(vetor, vetor_cres);

    printf("\n-----Vetor na ordem decrescente.-----");
    for(i = 0; i < TAMANHO; i++){
        printf("\nPosicao %d do vetor: %d", i+1, vetor_cres[i]);
    }
    return 0;
}

void preenche_vetor(int vetor[], int vetor_cres[])
{
    int i;
    for(i = 0; i < TAMANHO; i++){
        printf("\nInforme o numero da posicao %d: ", i + 1);
        scanf("%d", &vetor[i]);
        vetor_cres[i] = vetor[i];
        if(i > 1)
            ordena(vetor_cres, i+1);
    }
}

void ordena(int vetor_cres[], int ind)
{
    int i, j, temp;
    //bubble sort
    for(i = 0; i < ind; i++){
        for(j = 0; j < ind - 1 - i; j++){
            if(vetor_cres[j] > vetor_cres[j+1]){
                temp = vetor_cres[j];
                vetor_cres[j] = vetor_cres[j+1];
                vetor_cres[j+1] = temp;
            }
        }
    }
}

