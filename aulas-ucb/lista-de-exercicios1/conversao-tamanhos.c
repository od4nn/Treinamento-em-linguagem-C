#include <stdio.h>
#include <stdlib.h>

/*Sabe-se que:
 1 pé = 12polegadas
 1 jarda = 3 pés
 1 milha = 1760 jardas
 Faça um programa que que receba uma medida em pés, faça a conversões a
 seguir e mostre os
 resultados.
 a) Polegadas;
 b) Jardas;
 c) Milhas.*/
 
int main() {
	float tamanho;
	printf("Digite o numero em pes:\n\n");
	scanf("%f", &tamanho);
	printf("%.0f pes = %.2f polegadas\n", tamanho, tamanho * 12);
	printf("%.0f pes = %.2f jardas\n", tamanho, tamanho / 3);
	printf("%.0f pes = %.2f milhas\n", tamanho, (tamanho / 3) / 1760);
	return 0;
}
