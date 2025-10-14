#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 10
#define TAMANHO_DOBRO 20

void preenche_vetor(int vetor[]);
void calcula_uniao(int X[], int Y[], int uniao[]);
void calcula_dif(int X[], int Y[], int diferenca[]);
void calcula_soma(int X[], int Y[], int soma[]);
void calcula_produto(int X[], int Y[], int produto[]);
void calcula_dif(int X[], int Y[], int diferenca[]);
void calcula_inter(int X[], int Y[], int inter[]);

/*Faça um programa que preencha dois vetores, X e Y, com dez números inteiros cada.
Calcule e mostre os seguintes vetores resultantes: - A união de X com Y (Todos os
elementos de X e de Y sem repetições); - A diferença entre X e Y (Todos os elementos
de X que não existam em Y, sem repetições) - A soma de X e Y (A soma de cada elemento
de X com o elemento da mesma posição em Y); - O produto entre X e Y (Multiplicação de
cada elemento de X com o elemento de mesma posição em Y); - A interseção entre X e Y
(Apenas os elementos que aparecem nos dois vetores, sem
repetições). */

int main()
{
    int X[TAMANHO], Y[TAMANHO], vetor_uniao[TAMANHO_DOBRO], vetor_diferenca[TAMANHO] = {0}, vetor_soma[TAMANHO];
    int vetor_produto[TAMANHO], vetor_inter[TAMANHO] = {0};

    printf("Preencha o vetor X: ");
    preenche_vetor(X);
    printf("Preencha o vetor Y: \n");
    preenche_vetor(Y);

    calcula_uniao(X, Y, vetor_uniao);
    calcula_dif(X, Y, vetor_diferenca);
    calcula_soma(X, Y, vetor_soma);
    calcula_produto(X, Y, vetor_produto);
    calcula_inter(X, Y, vetor_inter);
    return 0;
}

void preenche_vetor(int vetor[])
{
    int i;
    for(i = 0; i < 10; i++){
        printf("\nInforme o numero da posicao %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
}

void calcula_uniao(int X[], int Y[], int uniao[])
{
    int i, j;
    printf("\n\nVALORES DO VETOR 3:");
    for(i= 0; i < TAMANHO; i++){ //primeiro vetor
        uniao[i] = X[i];
    }
    for(j = 0; j < TAMANHO; j++){ //segundo vetor
        uniao[i] = Y[j];
        i++;
    }

    printf("\t---------UNIAO DE X E Y---------\n");
    for(i = 0; i < TAMANHO_DOBRO; i++){ //mostra
        printf("\nPosicao %d.: %d", i+1, uniao[i]);
    }

}

void calcula_dif(int X[], int Y[], int diferenca[])
{
    int i, j, z, cont = 1, ind = 0;
    for(i = 0; i < TAMANHO; i++){ //fixa um numero de x
        cont = 0;
        for(j = 0; j < TAMANHO; j++){ //confere todos de y
            if(X[i] != Y[j]){
                cont++; //Se for so UMA vez, ai sim poem no vetor
            }
        }
        if(cont == TAMANHO){
            diferenca[ind] = X[i]; //se for, adiciona a diferenca
            ind++; //index para pegar do vetor 0 sem buracos
        }
    }
    printf("\n\t---------DIFERENCA DE X E Y---------\n");
    for(i = 0; i < TAMANHO; i++){ //mostra
        printf("\nPosicao %d.: %d", i+1, diferenca[i]);
    }
}

void calcula_soma(int X[], int Y[], int soma[])
{
    int i;

    for(i = 0; i < TAMANHO; i++){
        soma[i] = X[i] + Y[i];
    }

    printf("\n\t---------SOMA DE X E Y---------\n");
    for(i = 0; i < TAMANHO; i++){ //mostra
        printf("\nSoma %d.: %d", i+1, soma[i]);
    }
}

void calcula_produto(int X[], int Y[], int produto[])
{
    int i;
    for(i = 0; i < TAMANHO; i++){
        produto[i] = X[i] * Y[i];
    }

    printf("\n\t---------PRODUTO DE X E Y---------\n");
    for(i = 0; i < TAMANHO; i++){ //mostra
        printf("\nProduto %d.: %d", i+1, produto[i]);
    }

}

void calcula_inter(int X[], int Y[], int inter[])
{
    int i, j, z, cont = 1, ind = 0;
    for(i = 0; i < TAMANHO; i++){ //fixa um numero de x
        cont = 0; //zera o contador para o proximo loop
        for(j = 0; j < TAMANHO; j++){ //confere todos de y
            if(X[i] != Y[j]){ //verificacao, conta quantas vezes esse numero aparece em Y
                cont++;
            }
        }
        //Se for TODAS as vez, ai sim poem no vetor
        if(cont == TAMANHO){
            inter[ind] = X[i]; //adiciona no inter
            ind++; //index para pegar do vetor 0 sem buracos
            break;
        }
    }
    printf("\n\t---------INTERSECAO DE X E Y---------\n");
    for(i = 0; i < TAMANHO; i++){ //mostra
        printf("\nPosição %d.: %d", i+1, inter[i]);
    }
}
