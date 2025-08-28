#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i = 1;
    int termos_mostrados = 0;

    printf("Informe o termo N: ");
    scanf("%d", &n);

    while(termos_mostrados < n){ //limita que os termos ultrapassem n
        //mostra 1, 2, 3
        printf("%d", i);
        termos_mostrados++;
        if (termos_mostrados >= n)
            break; //se termos >= n, sair do looping

        //mostra os outros numeros a partir de 4 duas vezes
        printf("%d", i + 3); // os numeros seguem o padrao de serem i + 3
        termos_mostrados++;
        if (termos_mostrados >= n)
            break;

        printf("%d", i + 3);
        termos_mostrados++;
        i++;
    }
    printf("...\n"); //espaçamento

    return 0;
}
