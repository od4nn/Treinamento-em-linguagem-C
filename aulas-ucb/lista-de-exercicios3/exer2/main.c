#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j;
    double E = 1.0;

    do{
        printf("Informe o valor de n: ");
        scanf("%d", &n);
    }
    while(n < 0); //evita que o usuario digite um numero negativo

    //loop que calcula o fatorial de cada numero, acrescentando 1 a cada looping, ate chegar em n
    for(i = 2; i <= n; i++){ //comeca por 2 porque o primeiro numero na formula e 1/2!
        long long int fat = 1;
        for(j = i; j > 1; j--){ //calcula fatorial de um numero
            fat *= j;
        }

        E += (1.0 / fat);
    }
    printf("\n\nE == %lf", E);
    return 0;
}


