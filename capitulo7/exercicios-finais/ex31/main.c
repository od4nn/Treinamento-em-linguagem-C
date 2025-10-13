#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void busca_ch(char palavra[], int tamanho);

int main()
{
    char palavra[15];
    int tamanho;
    printf("Informe uma palavra de ate 14 letras contendo ch: ");
    scanf("%s", palavra);
    tamanho = strlen(palavra);
    busca_ch(palavra, tamanho);
    return 0;
}

void busca_ch(char palavra[], int tamanho)
{
    int i;
    for(i = 0; i < tamanho - 1; i++){
        if(palavra[i] == 'c' && palavra[i+1] == 'h')
        {
            printf("O ch esta presente na posicao %d e %d da palavra %s", i, i+1, palavra);
            exit(0);
        }
    }
    printf("Nao tem ch na palavra %s", palavra);
}
