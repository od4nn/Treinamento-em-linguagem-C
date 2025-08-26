#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("TABELA ASCII:\n\n");
    for(int i = 32; i <= 255; i++){
        printf("Caractere = %c\tDecimal = %d\tHexadecimal = %x\n\n", i, i, i);
    }
    return 0;
}
