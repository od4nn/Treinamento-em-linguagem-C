#include <stdio.h>
#include <stdlib.h>

/*Pedro comprou um saco de ra��o com peso em quilos. Ele possui dois gatos, para
 os quais fornece a quantidade de ra��o em gramas. A quantidade di�ria de ra��o
 fornecida para cada gato � sempre a mesma. Fa�a um programa que receba o peso
 do saco de ra��o e a quantidade de ra��o fornecida para cada gato, calcule e mostre
 quanto restar� de ra��o no saco ap�s cinco dias*/
 
int main() {
	float racao, quantidade, quantidade_final;
	printf("Digite o peso do saco de racao em kg:\n");
	scanf("%f", &racao);
	racao *= 1000; //peso em g para calculo igual
	printf("\nDigite a quantidade diaria de racao para cada gato em g:\n");
	scanf("%f", &quantidade);
	quantidade_final = 5 * (quantidade * 2);
	printf("A quantidade de racao apos 5 dias sera de: %.1fkg", (racao - quantidade_final) / 1000);
	return 0;
}
