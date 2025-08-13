#include <stdio.h>
#include <stdlib.h>

/*Um trabalhador recebeu seu salário e depositou em sua contra corrente
 bancária. Esse trabalhador emitiu dois cheques e agora deseja saber seu saldo
 atual. Sabe-se que cada operação bancária de retirada paga CPMF de 0,38%
 e o saldo inicial da conta está zerado*/
 
int main() {
	float salario, cheque1, cheque2, salario_rest;
	printf("Digite o salario:\n");
	scanf("%f", &salario);
	printf("\nDigite o valor de cada cheque:\n");
	scanf("%f%f", &cheque1, &cheque2);
	cheque1 = cheque1 + (cheque1 * 0.0038);
	cheque2 = cheque2 + (cheque2 * 0.0038);
	salario_rest = salario - cheque1 - cheque2;
	printf("\n\nO salario atual e de: RS%.2f\n", salario_rest);
	return 0;
}
