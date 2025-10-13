#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 8

/*Faça um programa que preencha um vetor com oito números inteiros, calcule e mostre dois
vetores resultantes. O primeiro vetor resultante deve conter os números positivos; o segundo
deve conter os números negativos. Cada vetor resultante vai ter, no máximo, oito posições, que
poderão não ser completamente utilizados. */


void preenche_vetor(int vetor[]);
void verifica_numero(int vetor[], int positivo[], int negativo[]);
void mostra_vetor(int positivo[], int negativo[]);

int main()
{
    int vetor_padrao[TAMANHO], vetor_positivo[TAMANHO] = {0}, vetor_negativo[TAMANHO] = {0};
    preenche_vetor(vetor_padrao);
    verifica_numero(vetor_padrao, vetor_positivo, vetor_negativo);
    mostra_vetor(vetor_positivo, vetor_negativo);
    return 0;
}

void preenche_vetor(int vetor[])
{
    int i;
    for(i = 0; i < TAMANHO; i++){
        printf("Informe o numero da posicao %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
}

void verifica_numero(int vetor[], int positivo[], int negativo[])
{
    int i, n = 0, p = 0;
    for(i = 0; i < TAMANHO; i++){
        if(vetor[i] < 0){
            negativo[n] = vetor[i];
            n++;
        }
        else{
            positivo[p] = vetor[i];
            p++;
        }
    }
}

void mostra_vetor(int positivo[], int negativo[])
{
    int i;
    printf("\nNumeros positivos: ");
    for(i = 0; i < TAMANHO; i++){
        printf("\n%d", positivo[i]);
    }
    printf("\nNumeros negativos: ");
    for(i = 0; i < TAMANHO; i++){
        printf("\n%d", negativo[i]);
    }
}


