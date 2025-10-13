#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que preencha dois vetores de dez elementos numéricos cada um e mostre o
vetor resultante da intercalação. */
void preenche_vetor(int vetor[]);
void passar_vetor(int vetor1[], int vetor2[], int vetor3[]);
int main()
{
    int vetor1[10], vetor2[10], vetor3[20];
    printf("Preencha o vetor 1.\n ");
    preenche_vetor(vetor1);
    printf("Preencha o vetor 2.\n ");
    preenche_vetor(vetor2);
    passar_vetor(vetor1, vetor2, vetor3);
    return 0;
}

void preenche_vetor(int vetor[])
{
    int i;
    for(i = 0; i < 10; i++){
        printf("Informe o numero da posicao %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
}

void passar_vetor(int vetor1[], int vetor2[], int vetor3[])
{
    int i;
    printf("\n\nVALORES DO VETOR 3:");
    for(i= 0; i < 10; i++){
        vetor3[i * 2] = vetor1[i];
        vetor3[i * 2 + 1] = vetor2[i];
    }
    for(i = 0; i < 20; i++){
        printf("\nValor %d do vetor 3: %d", i+1, vetor3[i]);
    }
}
