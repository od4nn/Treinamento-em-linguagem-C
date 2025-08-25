/* Natal.C */
/* Imprime uma �rvore de Natal */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h> /* Para getche() */
int main()
{
    char sd, se;
    int i, k, j;
    system("cls"); /* Limpa a tela */
    printf("\nSinal interno direito: ");
    sd = getche(); /* Caractere de desenho da �rvore */
    printf("\nSinal interno esquerdo: ");
    se = getche(); /* Caractere de desenho da �rvore */

    printf("\n\n"); /* Pula 2 linhas antes do inicio do desenho */

    for(i=0; i < 4; i++)
    {
        for(k=1; k < 5; k++)
        {
            for(j=1; j<=40-(2*i+k); j++)
                printf(" "); /* Imprime brancos */
            printf("%c", se); /* Delimitador inicial da linha */
            for(j=1; j < (2*i+k); j++)
                printf("%c", se); /* At� o meio */
            for(j=1; j < (2*i+k); j++)
                printf("%c", sd); /* Meio ao fim */
            printf("%c\n", sd); /* Delimitador final da linha */
        }
    }
    /* Desenha o p� da �rvore */
    for(i=0; i < 2; i++)
    {
        for(j=0; j < 38; j++) printf(" ");
        printf("| |\n");
    }

    printf("\n");
    /* Imprime mensagem centralizada */
    for(j=0; j < 35; j++) printf(" ");
    printf("FELIZ NATAL\n");
    for(j=0; j < 31; j++) printf(" ");
    printf("E UM PROSPERO 2007!\n");
    system("PAUSE");
    return 0;
}
