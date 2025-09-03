#include <stdio.h>
#include <stdlib.h>

int main() {
	int opcao;
	float lado, raio;
	double pi = 3.14159;
	
	do{
		printf("--CALCULADORA DE AREAS--\n1. Calcular a area de um quadrado\n2. Calcular a area de um circulo\n0. Sair\n");
		printf("Escolha uma opcao: ");	
		scanf("%d", &opcao);
		
		switch(opcao){
			case 0:
				printf("\nEncerrando o programa...\n");
				break;
			case 1:
				printf("\n\nInforme o tamanho do lado do quadrado: ");
				scanf("%f", &lado);
				printf("\nA area do quadrado eh: %.2f\n\n", lado * lado);
				break;
			case 2:
				printf("\nInforme o raio do circulo: ");
				scanf("%f", &raio);
				printf("\nA area do circulo eh: %.2f\n\n", pi * (raio * raio));
				break;
			default:
				printf("\nERRO: opcao invalida!\n\n");
				continue;			
		}
	}while(opcao != 0);

	return 0;
}
