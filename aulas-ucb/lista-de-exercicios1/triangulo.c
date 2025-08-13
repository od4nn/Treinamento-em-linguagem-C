#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que calcule e mostre a área de um triângulo. Sabe-se que: Área
 = (base * altura)/2*/
 
int main() {
	float base, altura;
	printf("Digite a base e altura do triangulo:\n");
	scanf("%f%f", &base, &altura);
	printf("\nA area do triangulo e:%.1f\n", base * altura / 2);
	return 0;
}
