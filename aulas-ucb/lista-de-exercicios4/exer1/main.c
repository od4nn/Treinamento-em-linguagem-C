#include <stdio.h>
#include <stdlib.h>

/*Faça um programa contendo uma sub-rotina que retorne 1 caso o número digitado
seja positivo ou zero se negativo. (1)*/

int parouimpar(int num);
int main()
{
    int n, x;

    printf("Digite um numero: ");
    scanf("%d", &n);

    x = parouimpar(n);
    printf("%d", x);
    return 0;
}

int parouimpar(int num)
{
    int valor;

    if(num > 0){
        valor = 1;
    }

    else{
      valor = 0;
    }
    return valor;
}
