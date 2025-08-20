#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que determine a data cronologicamente maior de duas datas 
fornecidas pelo usuário. Cada data deve ser fornecida por três valores inteiros, onde o 
primeiro representa o dia, o segundo o mês e o terceiro o ano. */

int main() {
	int dia1, dia2, mes1, mes2, ano1, ano2;
	printf("Digite uma data no formato dd/mm/aaaa/: ");
	scanf("%d/%d/%d", &dia1, &mes1, &ano1);
	printf("\nDigite outra data no formato dd/mm/aaaa/: ");
	scanf("%d/%d/%d", &dia2, &mes2, &ano2);
	if((ano1 > ano2) || (ano1 == ano2 && mes1 > mes2) || (ano1 == ano2 && mes1 == mes2 && dia1 > dia2)){
		printf("\n\nA data %.2d/%.2d/%d e maior.\n", dia1, mes1, ano1);
	}
	else if(ano1 == ano2 && mes1 == mes2 && dia1 == dia2){
		printf("\n\n As datas sao iguais.\n");
	}
	else{
		printf("\n\nA data %.2d/%.2d/%d e maior.\n", dia2, mes2, ano2);
	}
	return 0;
}
