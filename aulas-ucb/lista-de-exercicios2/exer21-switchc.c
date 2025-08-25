#include <stdio.h>
#include <stdlib.h>

int main() {
	float peso, pesokg, valor_total, preco_em_kg ,valor_total_imp, imposto;
	int codigo_carga, codigo_origem;
	
	printf("Informe o codigo da carga: ");
	scanf("%d", &codigo_carga);
	printf("Informe o peso do produto em toneladas: ");
	scanf("%f", &peso);
	printf("Informe o codigo do estado de origem: ");
	scanf("%d", &codigo_origem);
	pesokg = peso * 1000;
	
	//verificando codigo da carga
	if(codigo_carga >= 31 && codigo_carga <= 40){ 
		preco_em_kg = 340;	
	}
	else if(codigo_carga >= 21){
		preco_em_kg = 250;
	}
	else{
		preco_em_kg = 100;
	}
	
	//verificando codigo de origem
	switch(codigo_origem){
		case 1:
			imposto = 0.35;
			break;
		case 2:
			imposto = 0.25;
			break;
		case 3:
			imposto = 0.15;
			break;
		case 4:
			imposto = 0.05;
			break;
		case 5:
			imposto = 0.0;
			break;
			
		default:
			printf("Opcao invalida!");
			return 0;
	}
	
	valor_total = (pesokg * preco_em_kg);
	valor_total_imp = valor_total + (valor_total * imposto);
	
	printf("\n\nO peso da carga em kg e: %.2f", pesokg);
	printf("\nO preco total do produto e: RS%.2f", valor_total);
	printf("\nO imposto foi de: RS%.2f ", (valor_total * imposto));
	printf("\nE o valor total mais o imposto e: RS%.2f", valor_total_imp);
	return 0;
}
