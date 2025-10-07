#include <stdio.h>
#include <stdlib.h>

int verifica_bis(int ano);
int main()
{
    int ano, resul;
    printf("Informe um ano: ");
    scanf("%d", &ano);
    resul = verifica_bis(ano);
    printf("%d", resul);
    return 0;
}

int verifica_bis(int ano)
{
    if((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0){
        return 1;
    }
    else{
        return 0;
    }
}
