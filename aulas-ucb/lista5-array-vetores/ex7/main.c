#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 10

/*Faça um programa que preencha um vetor com dez números inteiros, calcule e mostre o vetor
resultante de uma ordenação decrescente. */

void preenche_vetor(int vetor[], int vetor_decre[]);
void decrescente(int vetor_decre[]);

int main()
{
    int vetor_padrao[TAMANHO], vetor_decre[TAMANHO] = {0};

    printf("Preencha o vetor.\n");
    preenche_vetor(vetor_padrao, vetor_decre);
    decrescente(vetor_decre);
    return 0;
}

void preenche_vetor(int vetor[], int vetor_decre[])
{
    int i;
    for(i = 0; i < 10; i++){
        printf("\nInforme o numero da posicao %d: ", i + 1);
        scanf("%d", &vetor[i]);
        vetor_decre[i] = vetor[i];
    }
}

void decrescente(int vetor_decre[])
{
    int i, j, temp;
    //o laco externo i faz o numero de verificacoes necessarias para que todos os numeros estejam no lugar certo
    //ate tamanho - 1 porque depois de tamanho - 1 passadas o ultimo numero que falta estara na unica posicao que sobrou (a correta)
    for(i = 0; i < TAMANHO - 1; i++){
        // -1 porque se nao usassemos isso vetor_decre{j+1) acessaria uma posicao invalida quando tamanho fosse 9 e ele buscasse 10 (j+1)
        // - i porque a cada incremento no laco externo é garantido que um numero esta na posicao correta, ou seja se i = 2, - 2 numeros que nao precisam ser verificados
        for(j = 0; j < TAMANHO - 1 - i; j++){
            if(vetor_decre[j] < vetor_decre[j+1]){ //se o numero atual for menor que o numero seguinte, inverta. o menor numero deve estar mais a direita, nao a esquerda
                temp = vetor_decre[j]; //temp para nao perder o valor
                vetor_decre[j] = vetor_decre[j+1]; //numero atual (menor) recebe numero da posicao seguinte (maior)
                vetor_decre[j+1] = temp;//numero antes menor agora recebe o maior numero
                // final do loop, numero atual é o maior, numero seguinte o menor
                //isso garante que depois que j chegar em tamanho - 1 - i, o numero mais da direita estara na sua posicao correta
            }
        }
    }

    for(i = 0; i < TAMANHO; i++){
        printf("\nA posicao %d do vetor decrescente eh: %d", i+1, vetor_decre[i]);
    }
}
