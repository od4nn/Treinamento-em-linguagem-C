#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int verifica_es(char palavra[])
{
    int i = 0, letra = 'N';
    while(palavra[i] != '\0'){
        if(!isspace(palavra[i])){
            letra = palavra[i];
            return letra;
        }
    i++;
    }
    return 0;
}

int main()
{
    char palavra[15], resul;

    printf("Informe uma palavra: ");
    fgets(palavra, sizeof(palavra), stdin);

    resul = verifica_es(palavra);
    if(resul == 0)
        printf("%d", resul);
    else
        printf("%c", resul);
    return 0;
}
