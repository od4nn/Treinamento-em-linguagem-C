#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que receba o salário-base de um funcionário, calcule e
mostre seu salário a receber, Sabendo-se que esse funcionário tem gratificação de R$
50,00 e paga imposto de 10% sobre o salário-base.*/

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
