#include <stdio.h>
#include <stdlib.h>

/*Fa�a um programa que calcule e mostre a �rea de um tri�ngulo. Sabe-se que: �rea
 = (base * altura)/2*/
 
int main() {
	float base, altura;
	printf("Digite a base e altura do triangulo:\n");
	scanf("%f%f", &base, &altura);
	printf("\nA area do triangulo e:%.1f\n", base * altura / 2);
	return 0;
}
