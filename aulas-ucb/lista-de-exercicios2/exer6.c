#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que receba um número inteiro e verifique se esse número é par 
ou ímpar. */

int main() {
	int n;
	printf("Digite o numero: ");
	scanf("%d", &n);
	if(n % 2 == 0){
		printf("\nO numero %d e par.", n);
	}
	else{
		printf("\nO numero %d e impar.", n);
	}
	return 0;
}
