#include <stdio.h>
#include <stdlib.h>

/*1 – Um funcionário de uma empresa recebe aumento salarial anualmente. Sabe-se que:
a) Esse funcionário foi contratado em 2005, com salário inicial de R$ 1.000,00;
b) Em 2006 recebeu aumento de 1.5% sobre seu salário inicial;
c) A partir de 2007 (inclusive), os aumentos salariais sempre corresponderam ao dobro
do percentual do ano anterior.
Faça um programa que determine o salário atual desse funcionário.*/

int main()
{
    //primeiro salario
    float salario_2005 = 1000.0;
    float salario_2006, salario_2025;
    // definindo a primeira porcentagem
    float porcent = 0.015, calcul_porcent;
    salario_2006 = salario_2005 * 1.015; //calculando o salario de 2006 com base na porcentagem
    float salario_atual = salario_2006; //dando um valor inicial para salario_atual

    for(int i = 2007; i <= 2025; i++){
        porcent *= 2; //dobrando a porcentagem a cada looping
        calcul_porcent = salario_atual * porcent; //pega cada aumento em dinheiro de cada ano
        salario_atual += calcul_porcent; //soma o aumento ao salario mais recente
    }

    printf("O salario dessa pessoa em 2025 sera de: RS %.2f\n", salario_atual);
    return 0;
}
