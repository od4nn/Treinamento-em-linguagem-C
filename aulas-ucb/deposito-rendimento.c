#include <stdio.h>
#include <stdlib.h>

/* Fa�a um programa que receba o sal�rio-base de um funcion�rio, calcule e
mostre seu sal�rio a receber, Sabendo-se que esse funcion�rio tem gratifica��o de R$
50,00 e paga imposto de 10% sobre o sal�rio-base.*/

int main() {
	float deposito, juros, rendimento;
	printf("Digite o valor do deposito:\n");
	scanf("%f", &deposito);
	printf("\nDigite a taxa de juros:\n");
	scanf("%f", &juros);
	rendimento = deposito * (juros / 100);
	printf("\n\nO rendimento foi de: RS%.2f.\nO valor total e de: RS%.2f.\n", rendimento, deposito + rendimento);
	return 0;
}
