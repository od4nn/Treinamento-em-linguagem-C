#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que receba o ano de nascimento de uma pessoa e o
 ano atual. Calcule e mostre:
 a) Aidade dessa pessoa.
 b) Quantos anos essa pessoa terá em 2050.*/
 
int main() {
	int aniversario, ano;
	printf("Digite o ano que voce nasceu:\n");
	scanf("%d", &aniversario);
	printf("\nDigite o ano atual:\n");
	scanf("%d", &ano);
	printf("\nVoce tem %d anos.\n", ano - aniversario);
	printf("\nVoce tera %d anos em 2050.", 2050 - aniversario);
	return 0;
}
