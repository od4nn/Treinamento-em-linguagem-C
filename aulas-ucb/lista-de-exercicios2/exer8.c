#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Fa�a um programa que mostre o menu de op��es a seguir, receba a op��o do 
usu�rio e os dados necess�rios para executar cada opera��o. 
Menu de op��es: 
1 � Somar dois n�meros 
2 � Raiz quadrada de um n�mero  
Digite a op��o desejada ->*/

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
