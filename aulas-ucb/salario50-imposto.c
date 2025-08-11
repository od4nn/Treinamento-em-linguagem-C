#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que receba o salário-base de um funcionário, calcule e
 mostre seu salário a receber, Sabendo-se que esse funcionário tem gratificação de R$
 50,00 e paga imposto de 10% sobre o salário-base.*/
 
int main() {
	float salario;
	printf("Digite o salario do funcionario:\n");
	scanf("%f", &salario);
	//gratificao de 50 - imposto de 10%
	printf("\nO salario final do funcionario e:RS%.2f\n", (salario + 50) - (salario * 0.1)); 
	return 0;
}
