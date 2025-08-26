#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero_inv = 0, numero, digito;

    printf("Digite um numero: ");
    scanf("%d", &numero);
    if(numero < 0){
        while(numero < 0){
        digito = numero % 10;
        numero_inv = (numero_inv * 10)+ digito;
        numero /= 10;
        }
    }
    else{
        while(numero > 0){
        digito = numero % 10;
        numero_inv = (numero_inv * 10)+ digito;
        numero /= 10;
        }
    }
    printf("\nO numero invertido e: %d\n",numero_inv);
    return 0;
}
