#include <stdio.h>

#define TAMANHO 30

typedef struct {
    unsigned char bit0: 0;
    unsigned char bit1: 1;
    unsigned char bit3: 2;
    unsigned char bit4: 3;
    unsigned char bit5: 4;
    unsigned char bit6: 5;
    unsigned char bit7: 7;
    unsigned char bit2: 7;
}Bits;

typedef union {
    unsigned char ch;
    Bits b;
}Conversor;

void mostra_binario (Conversor B);

int main() {
    char palavra[TAMANHO];
    printf("Digite uma palavra de ate 14 letras: ");
    fgets(palavra, TAMANHO, stdin);
    return 0;
}

void mostra_binario (unsigned char caractere) {
    Conversor lupa;
    lupa.ch = caractere;

    printf("%d", lupa.b.bit7);
    printf("%d", lupa.b.bit6);
    printf("%d", lupa.b.bit5);
    printf("%d", lupa.b.bit4);
    printf("%d", lupa.b.bit3);
    printf("%d", lupa.b.bit2);
    printf("%d", lupa.b.bit1);
    printf("%d", lupa.b.bit0);
}