#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que receba a hora de início de um jogo e a hora final do jogo 
(cada hora é composta por duas variáveis inteiras: hora e minuto). Calcule e mostre a 
duração do jogo (horas e minutos) sabendo-se que o tempo máximo de duração do 
jogo é de 24 horas e que o jogo pode iniciar em um dia e terminar no dia seguinte. */

int main() {
	int h1, m1, h2, m2, duracao_total_m,totalm1, totalm2, horas_total, minutos_total;
	printf("Digite a hora de inicio no formato 24hrs: ");
	scanf("%d", &h1);
	printf("Digite o minuto de inicio no formato 24hrs: ");
	scanf("%d", &m1);
	printf("Digite a hora final no formato 24hrs: ");
	scanf("%d", &h2);
	printf("Digite o minuto final no formato 24hrs: ");
	scanf("%d", &m2);
	totalm1 = (h1 * 60) + m1;
	totalm2 = (h2 * 60) + m2;
	if(totalm2 > totalm1){
		duracao_total_m = totalm2 - totalm1;
		printf("\nO jogo durou %.2d:%.2d hrs e terminou no mesmo dia.\n\n");
	}
	else if(totalm1 > totalm2){
		duracao_total_m = (1440 - totalm1) + totalm2;
		printf("\nO jogo terminou no dia seguinte.\n\n");
	}
	else{
		duracao_total_m = 1440;
		printf("\nO jogo durou 24:00hrs.\n\n");
	}
		horas_total = duracao_total_m / 60;
		minutos_total = duracao_total_m % 60;
		printf("O tempo de jogo foi de: %.2d:%.2dhrs\n", horas_total, minutos_total);
	return 0;
}
