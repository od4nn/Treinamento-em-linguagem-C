#include <stdio.h>
#include <stdlib.h>

int main() {
	float peso, pesog, valor_total, preco_em_g ,valor_total_imp, imposto;
	int codigo_prod, codigo_pais;
	
	printf("Informe o codigo do produto: ");
	scanf("%d", &codigo_prod);
	printf("Informe o peso do produto em kg: ");
	scanf("%f", &peso);
	printf("Informe o codigo do pais: ");
	scanf("%d", &codigo_pais);
	pesog = peso * 1000;
	
	//verificando codigo do produto
	if(codigo_prod >= 8 && codigo_prod <= 10){ 
		preco_em_g = 35;	
	}
	else if(codigo_prod >= 5){
		preco_em_g = 25;
	}
	else{
		preco_em_g = 10;
	}
	
	//verificando codigo do pais
	switch(codigo_pais){
		case 1:
			imposto = 0.0;
			break;
		case 2:
			imposto = 0.15;
			break;
		case 3:
			imposto = 0.25;
			break;
		default:
			printf("\nCodigo invalido!\n");
			return 1;
	}
	valor_total = (pesog * preco_em_g);
	valor_total_imp = valor_total + (valor_total * imposto);
	
	printf("\n\nO peso do produto em g e: %.2f", pesog);
	printf("\nO preco total do produto e: RS%.2f", valor_total);
	printf("\nO imposto foi de: RS%.2f ", (valor_total * imposto));
	printf("\nE o valor total mais o imposto e: RS%.2f", valor_total_imp);
	return 0;
}
