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
int ja_existe(int numero, int vetor[], int index);

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
    int i, j, cont_uniao = 0;
    printf("\n\nVALORES DO VETOR 3:");
    for(i= 0; i < TAMANHO; i++){ //primeiro veto
        if(ja_existe(X[i], uniao, cont_uniao)== 0){ // manda o numero atual, o vetor responsavel por armazenar os numeros, e o tamanho do vetor
            uniao[cont_uniao] = X[i]; //se for adicionar numero atual na posição atual do vetor
            cont_uniao++; //incrementa
        }

    }
    for(j = 0; j < TAMANHO; j++){ //segundo vetor
        if(ja_existe(Y[j], uniao, cont_uniao)== 0){
            uniao[cont_uniao] = Y[j];
            cont_uniao++;
        }
    }

    printf("\t---------UNIAO DE X E Y---------\n");
    for(i = 0; i < cont_uniao; i++){ //mostra os numeros ate o limite do vetor
        printf("\nPosicao %d.: %d", i+1, uniao[i]);
    }

}

int ja_existe(int numero, int vetor[], int index)
{
    int i;
    for(i = 0; i < index; i++){ //vai da posição 0 ate o index, se for o primeiro numero, ele nem roda, pois i < 0 falso
        if(vetor[i] == numero){ //"o numero analisado ja existe no vetor?"
            return 1; //sim? entao nao adiciona ele
        }
    }
    return 0; //nao? adiciona
}

void calcula_dif(int X[], int Y[], int diferenca[])
{
    int i, j, z, cont = 0, ind = 0;
    //procura os elementos que so existem em X
    for(i = 0; i < TAMANHO; i++){ //fixa um numero de x
        cont = 0;
        for(j = 0; j < TAMANHO; j++){ //confere todos de y
            if(X[i] == Y[j]){ //confere se o numero fixado existe em Y
                cont++; // se sim adiciona no contador
                break; //otimizacao. para a verificacao, a gente precisa que o contador seja apenas maior que zero para ser falso
            }
        }
        if(cont == 0){ //se nao, faz a verificacao de repetição
            if(ja_existe(X[i], diferenca, ind)== 0){ //"esse elemento que so existe em X, ja existe em alguma outra posicao de diferenca[]?"
                diferenca[ind] = X[i]; //se nao existe, adiciona novo numero em diferenca[]
                ind++; //index para pegar do vetor 0 sem buracos
            }

        }
    }
    printf("\n\t---------DIFERENCA DE X E Y---------\n");
    for(i = 0; i < ind; i++){ //mostra
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
    int i, j, z, cont = 0, ind = 0;
    for(i = 0; i < TAMANHO; i++){ //fixa um numero de x
        cont = 0; //zera o contador para o proximo loop
        for(j = 0; j < TAMANHO; j++){ //confere todos de y
            if(X[i] == Y[j]){ //verificacao, conta quantas vezes esse numero aparece em Y
                cont++;
                break; //para otimizacao, so precisamos ter ctz que seja maior que 0
            }
        }
        if(cont > 0){
            if (ja_existe(X[i], inter, ind)== 0){ //manda o numero atual, o vetor e o index
                inter[ind] = X[i]; //adiciona no inter
                ind++; //index para pegar do vetor 0 sem buracos
            }
        }
    }
    printf("\n\t---------INTERSECAO DE X E Y---------\n");
    for(i = 0; i < ind; i++){ //mostra
        printf("\nPosicao %d.: %d", i+1, inter[i]);
    }
}
