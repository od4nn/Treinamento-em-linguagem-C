/* diagonal2.c modificado */
/* Desenha duas diagonais, uma linha vertical e uma horizontal cruzadas */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lin, col;
    // O centro para um grid de 1 a 24 é entre 12 e 13. Usaremos 13.
    int centro = 13;

    for(lin=1; lin < 25 ; lin++)/* Passo da descida */
    {
        for(col=1; col < 25; col++)/* Passo da largura */
        {
            // Verifica se a coordenada (lin, col) satisfaz QUALQUER UMA das 4 condições
            if ( (lin == col)          ||  // Diagonal 1
                 (col == 25 - lin)     ||  // Diagonal 2
                 (lin == centro)       ||  // Linha Horizontal
                 (col == centro)           // Linha Vertical
               )
            {
                printf("\xDB"); /* Desenha bloco escuro */
            }
            else
            {
                printf("\xB0"); /* Desenha bloco claro */
            }
        }
        printf("\n");/* Pula de linha */
    }

    system("PAUSE");
    return 0;
}
