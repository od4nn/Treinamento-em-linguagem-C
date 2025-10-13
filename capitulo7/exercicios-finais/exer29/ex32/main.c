#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int verifica_dif(char p1[], char p2[]);

int main()
{
    char palavra1[15], palavra2[15];
    int dif;

    printf("Informe a primeira palavra: ");
    scanf("%s", palavra1);
    printf("Informe a segunda palavra: ");
    scanf("%s", palavra2);
    dif = verifica_dif(palavra1, palavra2);
    if(dif < 0)
        dif *= -1;
    printf("%d", dif);
    return 0;
}

int verifica_dif(char p1[], char p2[])
{
    int i = 0;
    while(tolower(p1[i]) == tolower(p2[i])){
        if(tolower(p1[i]) == '\0')
            break;
        i++;
    }
    return tolower(p1[i]) - tolower(p2[i]);
}
