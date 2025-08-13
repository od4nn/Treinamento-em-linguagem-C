#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Faça um programa que receba dois números maiores que zero, calcule e
 mostre um elevado ao outro*/
 
int main() {
	double n1,n2;
	printf("Digite dois numeros:\n");
	scanf("%lf%lf", &n1,&n2);
	printf("O numero %.0lf elevado a %.0lf e: %.2lf", n1, n2, pow(n1, n2));
	return 0;
}
