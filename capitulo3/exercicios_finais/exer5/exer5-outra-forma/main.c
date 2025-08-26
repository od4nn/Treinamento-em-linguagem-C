#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero_inv = 0, numero, digito, flag = 0;

    printf("Digite um numero: ");
    scanf("%d", &numero);
    if(numero < 0){
        flag = numero;
        numero *= -1;
    }
    while(numero > 0){
    digito = numero % 10;
    numero_inv = (numero_inv * 10)+ digito;
    numero /= 10;
    }
    if(flag != 0){
        numero_inv *= -1;
    }
    printf("\nO numero invertido e: %d\n",numero_inv);
    return 0;
}
