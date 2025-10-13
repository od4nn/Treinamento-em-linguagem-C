#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int substituicao(char palavra[], char l1, char l2, int tam);

int main()
{
    char palavra[15], letra1, letra2;
    int quant, tam;

    printf("Informe a palavra: ");
    scanf("%s", palavra);
    tam = strlen(palavra);
    printf("Escolha uma letra a ser trocada na palavra: ");
    scanf(" %c", &letra1);
    printf("Sera trocada por essa letra: ");
    scanf(" %c", &letra2);

    quant = substituicao(palavra, letra1, letra2, tam);
    printf("%s\n%d modificacoes", palavra, quant);
    return 0;
}

int substituicao(char palavra[], char l1, char l2, int tam)
{
    int i, quant = 0;
    for(i = 0; i < tam; i++){
        if(palavra[i] == l1){
            palavra[i] = l2;
            quant++;
        }
    }
    return quant;
}
