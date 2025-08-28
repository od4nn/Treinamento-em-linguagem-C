#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long long int fatorial(int num);

int main()
{
    double x, cosx, cosx_real, termo1, termo2, termo3; //variaveis

    printf("Informe o valor de x: ");
    scanf("%lf", &x);

    termo1 = 1.0;
    termo2 = pow(x, 2) / (fatorial(2));
    termo3 = pow(x, 4) / (fatorial(4));
    cosx = termo1 - termo2 + termo3;
    cosx_real = cos(x); //pega o cos de x na math.h

    printf("\n\nO calculo feito foi pelo programa foi: %lf", cosx);
    printf("\nO valor de cosx dado pela math.h e: %lf", cosx_real);
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
