#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Faça um programa que receba um número positivo e maior que zero,
 calcule e mostre:
 a) O número digitado ao quadrado.
 b) O número digitado ao cubo.
 c) A raiz quadrada do número digitado.
 d) A raiz cúbica do número digitado.*/
 
int main() {
	double numero;
	printf("Digite um numero positivo maior que zero: ");
	scanf("%lf", &numero);
	printf("\nO numero %.0f\nAo quadrado e: %.2f\n", numero, pow(numero, 2.0)); //a
	printf("Ao cubo e: %.2f", pow(numero, 3.0)); //b
	printf("\n\nA raiz quadrada de %.0f e: %.2f", numero, sqrt(numero)); //c
	printf("\nA raiz cubica de %.0f e: %.2f", numero, cbrt(numero)); //d
	return 0;
}
