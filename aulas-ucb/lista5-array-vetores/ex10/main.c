#include <stdio.h>
#include <stdlib.h>

#define N_CARROS 5
#define NOME_MAX 15

/* Fa�a um programa que preencha um vetor com os modelos de cinco carros (Exemplo de
modelos: Corsa, Gol,Palio, Sandero, etc.) Carregue outro vetor com o consumo destes carros,
isto �, quantos quil�metros cada um deles faz com um litro de combust�vel, calcule e mostre: -
O modelo de carro mais econ�mico; - Quantos litros de combust�vel cada um dos carros
cadastrados consome para percorrer uma dist�ncia de 1.000 quil�metros.*/

void informa_consumo(float consumo[], char carro[][NOME_MAX]);
void preenche_vetor(char vetor[][NOME_MAX]);
void mais_economico(float consumo[], char carro[][NOME_MAX]);

int main()
{
    char vetor_carro[N_CARROS][NOME_MAX];
    float consumo[N_CARROS];

    printf("\t---------Informe o modelo dos carros---------");
    preenche_vetor(vetor_carro);
    printf("\n\t---------Informe o consumo dos carros(km por litro)---------");
    informa_consumo(consumo, vetor_carro);
    mais_economico(consumo, vetor_carro);

    return 0;
}

void preenche_vetor(char vetor[][NOME_MAX])
{
    int i;
    for(i = 0; i < N_CARROS; i++){
        printf("\nInforme o %d. carro: ", i + 1);
        scanf("%s", vetor[i]); //char e strings nao precisam do &
    }
}

void informa_consumo(float consumo[], char carro[][NOME_MAX])
{
    int i;
    for(i = 0; i < N_CARROS; i++){
        printf("\nInforme o consumo do %s: ", carro[i]);
        scanf("%f", &consumo[i]);
    }
}

void mais_economico(float consumo[], char carro[][NOME_MAX])
{
    float melhor_consumo = consumo[0]; //analisa o primeiro carro so para ter um caso base
    int i, ind_melhor_consumo = 0;
    for(i = 1; i < N_CARROS; i++){
        if(consumo[i] > melhor_consumo){
            melhor_consumo = consumo[i]; //usado para comparar
            ind_melhor_consumo = i; //usado para referenciar no printf

        }
    }

    printf("\n\n---------------------");
    printf("\nO carro mais economico eh o %s.\n", carro[ind_melhor_consumo]);

    for(i = 0; i < N_CARROS; i++){
        printf("\nO modelo %s consome %.2f litros para percorrer 1000km.", carro[i], 1000.0 / consumo[i]);
    }
}

//topzera ;)

//louco demais