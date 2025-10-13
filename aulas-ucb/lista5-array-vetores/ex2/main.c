#include <stdio.h>
#include <stdlib.h>

/*Preencha dois vetores de 5 posições cada, e faça a troca de valores entre os vetores, de modo
que o primeiro vetor receba os valores do segundo vetor e o segundo vetor, receba os valores do
primeiro vetor. Exiba os vetores antes e após a troca*/

void preenche_vetor(int vetor[]);
void troca(int vetor1[], int vetor2[]);
void mostrar(int vetor[]);

int main()
{
    int vetor1[5], vetor2[5];

    printf("Informe os valores do primeiro vetor.\n\n");
    preenche_vetor(vetor1);
    printf("\n\nInforme os valores do segundo vetor.\n\n");
    preenche_vetor(vetor2); //preenche com valores

    printf("\n\n");
    printf("======ANTES DA TROCA======\n");
    printf("-------Valores do vetor 1-------");
    mostrar(vetor1);
    printf("-------Valores do vetor 2-------");
    mostrar(vetor2);

    troca(vetor1, vetor2); //realiza a troca

    printf("\n\n");
    printf("======DEPOIS DA TROCA======\n");
    printf("-------Valores do vetor 1-------");
    mostrar(vetor1);
    printf("-------Valores do vetor 2-------");
    mostrar(vetor2);
    return 0;
}

void preenche_vetor(int vetor[])
{
    int i;
    for(i = 0; i < 5; i++){
        printf("Informe o numero da posicao %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
}

void troca(int vetor1[], int vetor2[])
{
    int temp, i;
    for(i = 0; i < 5; i++){
        temp = vetor2[i];
        vetor2[i] = vetor1[i];
        vetor1[i] = temp;
    }
}

void mostrar(int vetor[])
{
    int i;
    for(i = 0; i < 5; i++){
        printf("\nValor %d: %d", i+1, vetor[i]);
    }
    printf("\n\n");
}
