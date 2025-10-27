#include <stdio.h>
#include <string.h>

#define TAMANHO 50

typedef struct {
    unsigned char bit0: 1;
    unsigned char bit1: 1;
    unsigned char bit2: 1;
    unsigned char bit3: 1;
    unsigned char bit4: 1;
    unsigned char bit5: 1;
    unsigned char bit6: 1;
    unsigned char bit7: 1;
}Bits;

typedef union { //divide o mesmo espaço para as duas variaveis
    unsigned char ch; //1 byte
    Bits b; //fatia o 1 byte em 8 bits
}Conversor;

void mostra_binario (unsigned char caractere);

int main() {
    int i;
    char palavra[TAMANHO];
    printf("Digite uma pequena frase de ate 50 caracteres letras: ");
    fgets(palavra, TAMANHO, stdin);
    palavra[strcspn(palavra, "\n")] = '\0'; //substitui o \n que fgets guarda pelo terminador nulo

    printf("\nConvertendo '%s' para binario: \n\n", palavra);

    for (i = 0; palavra[i] != '\0'; i++) {
        mostra_binario(palavra[i]); //manda um caractere para ser convertido em binario, faz isso ate pegar todos os caracteres da frase
    }
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
    printf("%d ", lupa.b.bit0);
}