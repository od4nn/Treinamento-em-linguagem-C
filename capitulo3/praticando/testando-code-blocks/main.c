#include <stdio.h>
#include <stdlib.h>

// esse programa foi usado para aprender a usar o depurador no code blocks
int main() {
    int i;
    int soma = 0;

    printf("Iniciando o programa...\n");

    for (i = 1; i <= 5; i++) {
        soma = soma + i;
        printf("Valor atual de i: %d, Valor atual da soma: %d\n", i, soma);
    }

    printf("\nO valor final da soma e: %d\n", soma);
    system("PAUSE");

    return 0;
}
