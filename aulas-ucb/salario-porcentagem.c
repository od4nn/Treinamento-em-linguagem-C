#include <stdio.h>
#include <stdlib.h>

/* Fa�a um programa que receba o sal�rio-base de um funcion�rio, calcule e
 mostre seu sal�rio a receber, Sabendo-se que esse funcion�rio tem gratifica��o de R$
 50,00 e paga imposto de 10% sobre o sal�rio-base*/
 
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
