#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que receba o salário de um funcionário, calcule e mostre o novo
 salário, sabendo-se que este sofreu um aumento de 25%*/
 
int main() {
	float salario;
	printf("Digite o salario do funcionario:\n");
	scanf("%f", &salario);
	printf("\nO valor do salario com o aumento de 25%% e: RS%.2f\n", salario * 1.25);
	return 0;
}
