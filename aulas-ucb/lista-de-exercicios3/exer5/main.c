#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n_anterior = 0, n_atual = 1, n_novo;

    for(int i = 0; i < 8; i++){
        printf("%d", n_anterior);
        if(i < 7){ //so perfumando o codigo
            printf(", "); //mostra uma virgula toda vez apos cada numero, exceto no ultimo numero
        }
        n_novo = n_atual + n_anterior;
        n_anterior = n_atual;
        n_atual = n_novo;
    }
    printf(".\n"); //espaco
    return 0;
}
