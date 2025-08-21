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
	totalm1 = (h1 * 60) + m1; //pega o total de minutos do inicio do jogo
	totalm2 = (h2 * 60) + m2; //pega o total de minutos do final do jogo
	if(totalm2 > totalm1){ //se o final for maior que o comeco entao acabou no mesmo dia
		duracao_total_m = totalm2 - totalm1; //guarda total em minuto
		printf("\nO jogo durou %.2d:%.2d hrs e terminou no mesmo dia.\n\n");
	}
	else if(totalm1 > totalm2){ // se o valor inicial e maior entao acabou no dia seguinte
		/*1440 = 24hrs em minutos, para tirar a diferenca
		 e calculo ser correto
		 depois é somado, sem a diferenca de 24hrs, a totalm2*/
		duracao_total_m = (1440 - totalm1) + totalm2; 
		printf("\nO jogo terminou no dia seguinte.\n\n");
	}
	else{
		duracao_total_m = 1440; //somente caso o total1 e 2 sejam iguais
		printf("\nO jogo durou 24:00hrs.\n\n");
	}
		horas_total = duracao_total_m / 60; //pega horas, dividir minutos por 60
		minutos_total = duracao_total_m % 60; //tudo que for resto da divisao sera os minutos
		printf("O tempo de jogo foi de: %.2d:%.2dhrs\n", horas_total, minutos_total);
	return 0;
}
