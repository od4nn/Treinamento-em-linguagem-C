#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverte(char palavra[], int tamanho);

int main()
{
    char palavra[15];
    int tamanho;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    tamanho = strlen(palavra);
    inverte(palavra, tamanho);
    return 0;
}

void inverte(char palavra[], int tamanho)
{
    int i;
    //i vai da ultima letra ate a primeira [0]
    for(i = tamanho - 1; i >= 0; i--){ // -1 para que palavra[i] acesse somente as letras da palavra
        printf("%c", palavra[i]);
    }
}
