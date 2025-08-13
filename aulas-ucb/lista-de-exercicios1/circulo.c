#include <stdio.h>
#include <stdlib.h>

/*.10. Faça um programa que calcule e mostre a área de um círculo. Sabe-se que:
 Area= pi*r^2*/
int main() {
	float raio;
	printf("Digite o raio do circulo:\n");
	scanf("%f", &raio);
	printf("A area do circulo e:%.1f\n", 3.14 * (raio * raio));
	return 0;
}
