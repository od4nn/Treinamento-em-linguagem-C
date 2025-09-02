#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, i, temp, soma = 0;

    printf("Informe o valor de a: ");
    scanf("%d", &a);

    if(a <= 1){
        printf("\na deve ser maior que 1.");
        return 1;
    }

    printf("\nInforme o valor de b: ");
    scanf("%d", &b);
    printf("\nInforme o valor de c: ");
    scanf("%d", &c);

    if(b < c){ //b sera o maior
        temp = b;
        b = c;
        c = temp;
    }

    for(i = c; i <= b; i++)
        if(i % a == 0){
            soma += i;
            printf("\nO numero foi: %d", i);
        }
    printf("\n\nSoma: %d", soma);
    return 0;
}
