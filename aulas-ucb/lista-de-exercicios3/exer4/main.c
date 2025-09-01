#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia um número inteiro N e que indique quantos valores inteiros e
positivos devem ser lidos a seguir. Para cada número lido, mostre uma tabela contendo o valor
lido e o fatorial desse valor. */

int main()
{
    int valor, valor_temp, i, j;

    do{
        printf("Informe quantos valores voce deseja ler: ");
        scanf("%d", &valor);
    }while(valor < 0); //evitar que valor seja negativo

    printf("\n\n");

    for(i = 0; i < valor; i++){ // executa o valor que o usuario escolheu
        printf("Informe o %d- valor: ", i+1); //formatacao
        scanf("%d", &valor_temp); //variavel temporaria
        long long int fat = 1;
        for(j = valor_temp; j > 1; j--){ //calcula fatorial de um numero
            fat *= j;
        }
        printf("%d- Valor. \t Fatorial: %lld\n\n", i + 1, fat); //mostra o resultado imediatamente
        //quando o looping acaba, os valores saem do escopo de for e somem, entao cada variavel pode ter um novo valor novamente
    }
    return 0;
}
