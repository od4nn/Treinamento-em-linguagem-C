#include <stdio.h>
#include <stdlib.h>

/* Fa�a um programa que receba o n�mero de horas trabalhadas e o valor
 do sal�rio m�nimo. Calcule e mostre o sal�rio a receber seguindo as regras
 abaixo:
 a) A hora trabalhada vale a metade do sal�rio m�nimo;
 b) O sal�rio bruto equivale ao n�mero de horas trabalhadas multiplicado pelo
 valor da hora trabalhada;
 c) O imposto equivale a 3% do sal�rio bruto.
 d) O sal�rio a receber equivale ao sal�rio bruto menos o imposto*/

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
