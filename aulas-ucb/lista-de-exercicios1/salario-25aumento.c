#include <stdio.h>
#include <stdlib.h>

/*Fa�a um programa que receba o sal�rio de um funcion�rio, calcule e mostre o novo
 sal�rio, sabendo-se que este sofreu um aumento de 25%*/
 
int main() {
	float salario;
	printf("Digite o salario do funcionario:\n");
	scanf("%f", &salario);
	printf("\nO valor do salario com o aumento de 25%% e: RS%.2f\n", salario * 1.25);
	return 0;
}
