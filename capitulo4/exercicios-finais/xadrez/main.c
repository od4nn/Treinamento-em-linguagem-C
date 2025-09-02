#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lin, col;
    system("cls"); /* Limpa a tela */
    for(lin=1; lin<=32; lin++)
    {
        for(col=1; col<=32; col++)
        {
            if((lin+col)%2==0) /* É número par? */
                printf("\xdb\xdb");
            else
                printf("  ");
        }
        printf("\n");
    }

    system("PAUSE");
    return 0;
}

