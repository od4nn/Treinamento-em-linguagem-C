#include <stdio.h>
#include <stdlib.h>

int main() {
	int opcao;
	float salario, percent_imp, imposto, aumento, salario_aum;
	printf("Menu de opcoes:\n\n1- Imposto\n2- Novo salario\n3- Classificacao\n\n");
	printf("Digite a opcao desejada: ");
	scanf("%d", &opcao);
	system("cls");
	
	//calcula imposto
	if(opcao == 1){ 
		
		printf("Digite o salario: RS");
		scanf("%f", &salario);
	
		if(salario >= 850){
			percent_imp = 0.15;
		}
		else if(salario >= 500){
			percent_imp = 0.1;	
		}
		else{
			percent_imp = 0.05;
		}
			
		imposto = salario * percent_imp;
		// printf("O seu imposto sera de %% %.0f\n", percent_imp * 100); (mudei de ideia nao vou por isso, mas irei deixar aqui)
		printf("\nVoce paga: RS%.2f de imposto.", imposto);
	}
	
	//Aumento de salario
	else if(opcao == 2){
		
		printf("Digite o salario: RS");
		scanf("%f", &salario);
		
		if(salario > 1500){
			aumento = 25;
		}
		else if(salario >= 750){
			aumento = 50;
		}
		else if(salario >= 450){
			aumento = 75;
		}
		else{
			aumento = 100;
		}
		salario_aum = salario + aumento;
		printf("\nSeu salario com aumento e: RS%.2f\n", salario_aum);
	}
	
	//Mostra a classificacao
	else if(opcao == 3){
		
		printf("Digite o salario: RS");
		scanf("%f", &salario);
		
		if(salario <= 700){
			printf("\nClassificacao: Mal remunerado.\n");
		}
		else{
			printf("\nClassificacao: Bem remunerado.\n");
		}
	}
	
	//Nenhuma das opcoes
	else{
		printf("\nOpcao invalida!\n");
	}
	return 0;
}
