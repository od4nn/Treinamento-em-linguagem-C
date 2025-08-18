#include <stdio.h>
#include <stdlib.h>

int main() {
	float altura, raio, volume;
	printf("Digite a altura do cilindro:\n");
	scanf("%f", &altura);
	printf("Digite o raio do cilindro:\n");
	scanf("%f", &raio);
	volume = 3.141592 * raio * raio * altura;
	printf("O volume do cilindro e: %.2f\n", volume);
	return 0;
}
