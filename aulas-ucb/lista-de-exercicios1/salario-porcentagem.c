#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que receba o salário-base de um funcionário, calcule e
 mostre seu salário a receber, Sabendo-se que esse funcionário tem gratificação de R$
 50,00 e paga imposto de 10% sobre o salário-base*/
 
int main() {
	float salario, aumento;
	printf("Digite o salario do funcionario:\n");
	scanf("%f", &salario);
	printf("\nDigite o valor do aumento:\n");
	scanf("%f", &aumento);
	aumento *= salario / 100; // *= e o mesmo que aumento = aumento *
	printf("O aumento do salario foi de:RS%.2f.\nAcrescentando esse valor ao seu salario anterior, o seu novo salario sera:RS%.2f.\n", aumento, salario + aumento);
	return 0;
}
