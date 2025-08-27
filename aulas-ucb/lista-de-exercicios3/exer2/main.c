#include <stdio.h>
#include <stdlib.h>

long long int fatorial(int num);

int main()
{
    int n;
    double E = 1.0;

    do{
        printf("Informe o valor de n: ");
        scanf("%d", &n);
    }
    while(n < 0); //evita que o usuario digite um numero negativo

    //loop que calcula o fatorial de cada numero, acrescentando 1 a cada looping, ate chegar em n
    for(int i = 2; i <= n; i++){ //comeca por 2 porque o primeiro numero na formula e 1/2!
        E += (1.0 / fatorial(i));
    }
    printf("\n\nE == %lf", E);
    return 0;
}

//funcao que calcula fatorial de um numero
long long int fatorial(int num)
{
    long long int fat = 1;

    for(int i = num; i > 1; i--){
        fat *= i;
    }
    return fat;
}
