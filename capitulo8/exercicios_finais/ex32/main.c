#include <stdio.h>
#include <string.h>

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

    printf("Informe o titulo do livro: ");
    fgets(livro.titulo, 80, stdin);
    printf("Informe o autor do livro: ");
    fgets(livro.autor, 50, stdin);

    livro.titulo[strcspn(livro.titulo, "\n")] = '\0'; //tirar o \n
    livro.autor[strcspn(livro.autor, "\n")] = '\0';

    printf("Informe o registro do livro: ");

    return 0;
}
