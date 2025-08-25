#include <stdio.h>
#include <stdlib.h>

int main() {
	float salario_atual, salario_aument, percent_aument;
	int codigo;
	
	printf("1 -\n2 -\n3 -\n4 -\n5 -\n\nDigite o codigo correspondente ao seu cargo: ");
	scanf("%d", &codigo);
	system("cls"); //limpa tela
	
	switch(codigo){
		case 1:
			percent_aument = 0.5; //aumento de 50%
			printf("\n\nO seu cargo e: Escriturario.");
			break;
		case 2:
			percent_aument =  0.35; //aumento de 35%
			printf("\n\nO seu cargo e: Secretario.");	
			break;
		case 3:
			percent_aument = 0.2; //aumento de 20%
			printf("\n\nO seu cargo e: Caixa.");
			break;
		case 4:
			percent_aument = 0.1; //aumento de 10%
			printf("\n\nO seu cargo e: Gerente.");
			break;
		case 5:
			percent_aument = 0;
			printf("\n\nO seu cargo e: Diretor."); //nao tem aumento
			break;
		default:
			printf("Opcao invalida!\n");
			return 1;
	}
	
	printf("Digite seu salario atual: ");
	scanf("%f", &salario_atual);	
	salario_aument = salario_atual + (salario_atual * percent_aument);
	printf("\nO seu aumento e de: RS%.2f\nSeu novo salario sera: RS%.2f\n", salario_atual * percent_aument, salario_aument);
	return 0;
}
