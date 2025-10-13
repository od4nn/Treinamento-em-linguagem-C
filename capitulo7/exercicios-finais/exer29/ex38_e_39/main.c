#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void copiandop(char p1[], char p2[], int n);
void copiandou(char p1[], char p2[], int n);

int main()
{
    char palavra1[25], palavra2[25], resp;
    int n;

    printf("Informe a primeira palavra: ");
    scanf("%s", palavra1);
    printf("Informe a segunda palavra: ");
    scanf("%s", palavra2);
    printf("Informe o numero de letras: ");
    scanf("%d", &n);

    printf("Digite P para primeiras e U para ultimas: ");
    scanf(" %c", &resp);
    resp = toupper(resp);

    switch(resp){
        case 'P':
            copiandop(palavra1, palavra2, n);
            break;
        case 'U':
            copiandou(palavra1, palavra2, n);
            break;
        default:
            printf("Invalido!");
            break;
    }
    return 0;
}

void copiandop(char p1[], char p2[], int n)
{
    strncpy(p1, p2, n);
    p1[n] = '\0';
    printf("Palavra nova: %s", p1);
}

void copiandou(char p1[], char p2[], int n)
{
    int inicio, tam;
    tam = strlen(p2);
    if(n >= tam){
        inicio = 0;
    }
    else{
        inicio = tam - n;
    }
    strncpy(p1, &p2[inicio], n);
    p1[n] = '\0';
    printf("Palavra nova: %s", p1);
}
