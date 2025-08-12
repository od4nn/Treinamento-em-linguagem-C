#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que receba o número de horas trabalhadas e o valor
 do salário mínimo. Calcule e mostre o salário a receber seguindo as regras
 abaixo:
 a) A hora trabalhada vale a metade do salário mínimo;
 b) O salário bruto equivale ao número de horas trabalhadas multiplicado pelo
 valor da hora trabalhada;
 c) O imposto equivale a 3% do salário bruto.
 d) O salário a receber equivale ao salário bruto menos o imposto*/

int main() {
	int horas;
	float salario, salario_hora, salario_bruto;
	printf("Digite as horas trabalhadas:\n");
	scanf("%d", &horas);
	printf("Digite o salario:\n");
	scanf("%f", &salario);
	salario_hora= salario / 2 ;
	salario_bruto = horas * salario_hora;
	printf("\n\nO salario do trabalhador sera de: RS%.2f", salario_bruto - (salario_bruto * 0.03));
	return 0;
}
