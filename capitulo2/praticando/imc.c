#include <stdio.h>
#include <stdlib.h>

int main() {
	float peso, altura;
	printf("CALCULADORA DE IMC\n\n");
	printf("Digite seu peso em kg: ");
	scanf("%f", &peso);
	printf("\nDigite sua altura em cm: ");
	scanf("%f", &altura);
	printf("IMC = %.2f", peso / (altura * altura));
	return 0;
}
