#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que receba três notas e seus respectivos pesos, calcule e
 mostre a média ponderada dessas notas.*/
 
int main() {
	float n1,n2,n3,p1,p2,p3, mediap;
	printf("CALCULADORA DE MEDIA PONDERADA\n\n");
	printf("Digite a primeira nota e seu respectivo peso:\n");
	scanf("%f%f", &n1, &p1);
	printf("Digite a segunda nota e seu respectivo peso:\n");
	scanf("%f%f", &n2, &p2);
	printf("Digite a terceira nota e seu respectivo peso:\n");
	scanf("%f%f", &n3, &p3);
	mediap = (n1 * p1 + n2 * p2 + n3 * p3) / p1 + p2 + p3;
	printf("A media ponderada e: %.2f", mediap);
	return 0;
}
