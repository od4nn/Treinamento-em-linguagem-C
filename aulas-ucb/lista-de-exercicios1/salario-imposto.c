#include <stdio.h>
#include <stdlib.h>

/* Fa�a um programa que receba o sal�rio-base de um funcion�rio, calcule e mostre o
 sal�rio a receber, sabendo-se que esse funcion�rio tem gratifica��o de 5% sobre o
 sal�rio-base e paga imposto de 7% sobre o sal�rio-base.*/
 
int main() {
	float salario,salario_grat;
	printf("Digite o salario do funcionario:\n");
	scanf("%f", &salario);
	salario_grat = salario + salario * 0.05;
	printf("\nO salario final do funcionario e:RS%.2f\n", salario_grat - (salario * 0.07));
	return 0;
}
