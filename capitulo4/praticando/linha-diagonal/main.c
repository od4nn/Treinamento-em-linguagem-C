/* diagonal.c */
/* Desenha uma linha diagonal na tela */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lin, col;
    for(lin=1; lin < 25 ; lin++)/* Passo da descida */
    {
        for(col=1; col < 25; col++)/* Passo da largura */
            if(lin==col) /* Estamos na diagonal? */
                printf("#"); /* Desenha bloco escuro */
            else
                printf(" ");/* Desenha bloco claro */
        printf("\n");/* Pula de linha */
    }
    system("PAUSE");
    return 0;
}
