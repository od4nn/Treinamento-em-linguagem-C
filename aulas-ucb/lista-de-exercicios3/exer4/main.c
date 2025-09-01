#include <stdio.h>
#include <stdlib.h>

long long int fatorial(int num);

int main()
{
    int valor, valor_temp, i;

    do{
        printf("Informe quantos valores voce deseja ler: ");
        scanf("%d", &valor);
    }while(valor < 0); //evitar que valor seja negativo

    printf("\n\n");

    for(i = 0; i < valor; i++){ // executa o valor que o usuario escolheu
        printf("Informe o %d- valor: ", i+1); //formatacao
        scanf("%d", &valor_temp); //variavel temporaria
        // usa a funcao em valor para pegar seu fatorial
        printf("%d- Valor. \t Fatorial: %lld\n\n", i + 1, fatorial(valor_temp)); //mostra o resultado imediatamente
        //quando o looping acaba, os valores saem do escopo de for e somem, entao cada variavel pode ter um novo valor novamente
    }
    return 0;
}
//funcao que calcula fatorial de um numero
long long int fatorial(int num)
{
    int i;
    long long int fat = 1;

    for(i = num; i > 1; i--){
        fat *= i;
    }
    return fat;
}

