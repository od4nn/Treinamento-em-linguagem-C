#include <stdio.h>

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

    return 0;
}