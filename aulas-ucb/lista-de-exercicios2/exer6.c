#include <stdio.h>
#include <stdlib.h>

/* Fa�a um programa que receba um n�mero inteiro e verifique se esse n�mero � par 
ou �mpar. */

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
