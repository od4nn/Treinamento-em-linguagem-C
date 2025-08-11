#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que receba o salário-base de um funcionário, calcule e mostre o
 salário a receber, sabendo-se que esse funcionário tem gratificação de 5% sobre o
 salário-base e paga imposto de 7% sobre o salário-base.*/
 
int main() {
	float salario,salario_grat;
	printf("Digite o salario do funcionario:\n");
	scanf("%f", &salario);
	salario_grat = salario + salario * 0.05;
	printf("\nO salario final do funcionario e:RS%.2f\n", salario_grat - (salario * 0.07));
	return 0;
}
