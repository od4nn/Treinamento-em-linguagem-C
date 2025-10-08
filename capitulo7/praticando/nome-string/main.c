#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[80];

    printf("Informe seu nome: ");
    fgets(nome, 80, stdin); //alternativa segura para gets

    /*Caso queira deixar a quebra de linha corretamente use:
    nome[strcspn(nome, "\n")] = '\0';
    antes do printf, substitue o \n por \0
    caso contrario o ! vai aparecer um linha embaixo de nome*/

    printf("Saudacoes %s!", nome);
    return 0;
}
