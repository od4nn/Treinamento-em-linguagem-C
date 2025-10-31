#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct{
    char titulo[80];
    char autor[50];
    long long int registro;
    union {
        float preco_reais;
        float preco_dolar;
    };
} biblioteca;

int main() {
    biblioteca livro;
    char dinheiro;

    printf("Informe o titulo do livro: ");
    fgets(livro.titulo, 80, stdin);
    printf("Informe o autor do livro: ");
    fgets(livro.autor, 50, stdin);

    livro.titulo[strcspn(livro.titulo, "\n")] = '\0'; //tirar o \n
    livro.autor[strcspn(livro.autor, "\n")] = '\0';

    printf("Informe o registro do livro: ");
    scanf("%lld", &livro.registro);
    printf("Digite D para dolares e R para reais.");
    scanf(" %c", &dinheiro);
    dinheiro = toupper(dinheiro);

    if (dinheiro == 'D') {
        printf("VALOR EM S: ");
        scanf("%f", &livro.preco_dolar);
    }
    else if (dinheiro == 'R') {
        printf("VALOR EM RS: ");
        scanf("%f", &livro.preco_reais);
    }
    else {
        printf("INVALIDO!");
        return 1;
    }

    printf("\n-------INFORMACOES DO LIVRO-------\n");
    printf("Titulo: %s\n", livro.titulo);
    printf("Autor: %s\n", livro.autor);
    printf("Registro: %lld\n", livro.registro);
    if (dinheiro == 'R')
        printf("Preco em reais: %.2f", livro.preco_reais);
    else
        printf("Preco em dolares: %.2f", livro.preco_dolar);

    return 0;
}
