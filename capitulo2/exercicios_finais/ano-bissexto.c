#include <stdio.h>
#include <stdlib.h>

int main() {
	int ano, ano_bissexto;
	printf("Digite um ano: ");
	scanf("%d", &ano);
	/*usa a expressao (formula)  como condição, e como a propria, sozinha,
	ja realiza o calculo do ano bissexto,se ela for verdadeira, entao 1, senao
	é 0. "((ano % 4 == 0) && (ano % 100 != 0 || ano % 400 == 0)) ? 1: 0;"
	inclusive da para usar a versao sem ternario, que a que deixei no codigo*/ 
	ano_bissexto =  ((ano % 4 == 0) && (ano % 100 != 0 || ano % 400 == 0)); 
	printf("\n\n%d", ano_bissexto);
	return 0;
}
