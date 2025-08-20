#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Faça um programa que mostre o menu de opções a seguir, receba a opção do 
usuário e os dados necessários para executar cada operação. 
Menu de opções: 
1 – Somar dois números 
2 – Raiz quadrada de um número  
Digite a opção desejada ->*/

int main() {
	int opcao, n1, n2;
	double n, raiz;
	
	printf("\nMenu de opcoes:\n\n1 - Somar dois numeros\n\n2 - Raiz quadrada de um numero\n\nEscolha uma opcao: ");
	scanf("%d", &opcao);
	system("cls");
	if(opcao == 1){
		printf("\nDigite o primeiro numero: ");
		scanf("%d", &n1);
		printf("\nDigite o segundo numero: ");
		scanf("%d", &n2);
		printf("\nA soma de %d e %d e: %d\n", n1, n2, n1 + n2);
	}
	else if(opcao == 2){
		printf("\nDigite o numero: ");
		scanf("%lf", &n);
		raiz = sqrt(n); //math raiz quadrada
		printf("\nA raiz quadrada de %.4lf e: %.4lf\n", n, raiz);
	}
	return 0;
}
