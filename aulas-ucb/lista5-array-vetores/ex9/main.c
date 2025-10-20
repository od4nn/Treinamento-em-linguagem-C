#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 5
#define TAMANHO_DOBRO 10

/*Fa�a um programa que preencha dois vetores com cinco elementos num�ricos cada e depois
ordene-os de maneira crescente. Dever� ser gerado um terceiro vetor com dez posições,
composto pela jun��o dos elementos dos vetores anteriores, tamb�m ordenado de maneira
crescente.*/

void preenche_vetor(int vetor[]);
void calcula_uniao(int X[], int Y[], int uniao[]);
void ordena(int vetor_cres[], int tam);
void mostrar(int vetor[]);

int main()
{
    int X[TAMANHO], Y[TAMANHO], vetor_uniao[TAMANHO_DOBRO];

    printf("Preencha os valores do primeiro vetor: ");
    preenche_vetor(X);
    ordena(X, TAMANHO); //ordena o vetor
    printf("\nPreencha os valores do segundo vetor: ");
    preenche_vetor(Y); //ordena o vetor
    ordena(Y, TAMANHO);

    printf("\n\t----Primeiro Vetor em ordem Crescente----");
    mostrar(X);
    printf("\n\t----Segundo Vetor em ordem Crescente----");
    mostrar(Y);

    calcula_uniao(X, Y, vetor_uniao); //pega x e y e coloca em uniao
    return 0;
}

void preenche_vetor(int vetor[])
{
    int i;
    for(i = 0; i < TAMANHO; i++){
        printf("\nInforme o numero da posicao %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
}

void calcula_uniao(int X[], int Y[], int uniao[])
{
    int i, j, cont_uniao = 0;
    for(i= 0; i < TAMANHO; i++){ //primeiro vetor
            uniao[cont_uniao] = X[i]; //se for adicionar numero atual na posi��o atual do vetor
            cont_uniao++; //incrementa
    }
    for(j = 0; j < TAMANHO; j++){ //segundo vetor
            uniao[cont_uniao] = Y[j];
            cont_uniao++;
    }

    ordena(uniao, TAMANHO_DOBRO);

    printf("\n\t---------UNIAO DOS 2 VETORES EM ORDEM CRESCENTE---------\n");
    for(i = 0; i < cont_uniao; i++){ //mostra os numeros ate o limite do vetor
        printf("\nPosicao %d.: %d", i+1, uniao[i]);
    }
}

void mostrar(int vetor[])
{
    int i;
    for(i = 0; i < TAMANHO; i++){
        printf("\nPosicao %d: %d", i+1, vetor[i]);
    }
}

void ordena(int vetor_cres[], int tam)
{
    int i, j, temp;
    //bubble sort
    for(i = 0; i < tam - 1; i++){
        for(j = 0; j < tam - 1 - i; j++){
            if(vetor_cres[j] > vetor_cres[j+1]){
                temp = vetor_cres[j];
                vetor_cres[j] = vetor_cres[j+1];
                vetor_cres[j+1] = temp;
            }
        }
    }
}
