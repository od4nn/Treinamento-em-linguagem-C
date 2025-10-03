#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que receba os valores antigo e atual de um determinado produto. Chame
uma sub-rotina que determine o percentual de acréscimo entre esses valores. O resultado
deverá ser mostrado no programa principal. (5) */

float calcula_porc(float antigo, float novo)
{
    float diferenca;
    diferenca = ((novo - antigo) / antigo) * 100;

    return diferenca;
}

int main()
{
    float valor_a, valor_n, v_final;

    printf("Informe o valor antigo do produto: ");
    scanf("%f", &valor_a);
    printf("Informe o valor novo do produto: ");
    scanf("%f", &valor_n);

    v_final = calcula_porc(valor_a, valor_n);
    printf("A diferenca entre o valor inicial e final eh: %.2f", v_final);
    printf("cls");

    return 0;
}
