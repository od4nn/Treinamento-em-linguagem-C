#include <stdio.h>
#include <stdlib.h>
#include <time.h> //biblioteca de tempo

/*Faça um programa que mostre a data e a hora do sistema nos seguintes formatos

dia/mês/ano – mês por extenso e hora: minuto.*/

int main() {
	
	time_t segundos_brutos = time(NULL); //pega os segundos brutos desde 1970 
	
	struct tm *info_tempo = localtime(&segundos_brutos); //passa esse valor para um ponteiro de forma que possamos usar
	
	int dia, mes, ano, hora, minuto;
	dia = info_tempo->tm_mday; //usamos -> porque info_tempo é um ponteiro, passamos esses valores para variaveis
	mes = info_tempo->tm_mon;
	ano = info_tempo->tm_year;
	hora = info_tempo->tm_hour;
	minuto = info_tempo->tm_min;
	ano += 1900; //o ano usa o formato que pega o ano e diminue 1900, entao precisamos somar 1900
	mes += 1;
	printf("Data e hora do sistema:\n\n");
	printf("%d/%d/%d ", dia, mes, ano);
	if (mes == 1){
		printf("- Janeiro -");
	}
	else if (mes == 2){
		printf("- Fevereiro -");
	}
	else if (mes == 3){
		printf("- Marco -");
	}
	else if (mes == 4){
		printf("- Abril -");
	}
	else if (mes == 5){
		printf("- Maio -");
	}
	else if (mes == 6){
		printf("- Junho -");
	}
	else if (mes == 7){
		printf("- Julho -");
	}
	else if (mes == 8){
		printf("- Agosto -");
	}
	else if (mes == 9){
		printf("- Setembro -");
	}
	else if (mes == 10){
		printf("- Outubro -");
	}
	else if (mes == 11){
		printf("- Novembro -");
	}
	else if (mes == 12){
		printf("- Dezembro -");
	}
	printf(" %d:%.2d\n\n", hora, minuto);
	system("PAUSE");
	return 0;
}
