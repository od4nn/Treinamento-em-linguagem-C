#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//prototipo
void maiscula(char palavra[], int tam); //maisculo
void minuscula(char palavra[], int tam); //minusculo

int main()
{
    char palavra[15];
    int escolha, tamanho;

    printf("Informe a palavra de ate 14 letras: ");
    scanf("%s", palavra);
    tamanho = strlen(palavra); //pega tamanho da palavra
    printf("Digite 1 para maisculo e 2 para minusculo: ");
    scanf("%d", &escolha);

    switch(escolha){
        case 1:
            maiscula(palavra, tamanho);
            break;
        case 2:
            minuscula(palavra, tamanho);
            break;
        default:
            printf("\n\nEscolha invalida!");
            break;
    }
    return 0;
}

void maiscula(char palavra[], int tam)
{
    int i;
    for(i = 0; i < tam; i++){
        palavra[i] = toupper(palavra[i]);
    }
    printf("%s", palavra);
}

void minuscula(char palavra[], int tam)
{
    int i;
    for(i = 0; i < tam; i++){
        palavra[i] = tolower(palavra[i]);
    }
    printf("%s", palavra);
}
