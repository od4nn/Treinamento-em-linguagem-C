#include <stdio.h>
#include <stdlib.h>

/*O custo ao consumidor de um carro novo � a soma do pre�o de f�brica
 com opercentual de lucro do distribuidor e dos impostos aplicados ao pre�o
 de f�brica. Fa�a um programa que receba o pre�o de f�brica de um ve�culo,
 o percentual de lucro do distribuidor e o percentual de impostos. Calcule e
 mostre:
 a) O valor correspondente ao lucro do distribuidor;
 b) O valor correspondente aos impostos.
 c) O pre�o final do ve�culo.*/
 
int main() {
	float vcarro, imposto, lucro, valorl, valorimp, valorf;
	printf("Digite o preco de fabrica do carro:\n");
	scanf("%f", &vcarro);
	printf("\nDigite o lucro do distribuidor:\n");
	scanf("%f", &lucro);
	printf("Informe o imposto:\n");
	scanf("%f", &imposto);
	valorl = vcarro * (lucro / 100);
	valorimp = vcarro * (imposto / 100);
	valorf = vcarro + valorl + valorimp;
	printf("\n\nO lucro do distribuidor sera de: RS%.2f", valorl);
	printf("\nO valor correspondente a impostos sera de: RS%.2f\n", valorimp);
	printf("O valor final do carro para o consumidor sera de: RS%.2f", valorf);
	return 0;
}
