#include <stdio.h>
#include <stdlib.h>

int main() {
	float preco, venda_mensal, taxa_dim, taxa_aum, novo_preco;
	
	printf("\nInforme o preco do produto: ");
	scanf("%f", &preco);
	printf("\nInforme a venda mensal media do produto: ");
	scanf("%f", &venda_mensal);
	
	if(venda_mensal >= 1200 && preco >= 80){
		taxa_aum = 0;
		taxa_dim = 0.2;
	}
	else if((venda_mensal >= 500 && venda_mensal < 1200) && (preco >= 30) && preco < 80){
		taxa_aum = 0.15;
		taxa_dim = 0;
	}	
	else if(venda_mensal < 500 && preco < 30){
		taxa_aum = 0.1;
		taxa_dim = 0;
	}
	else{
		printf("\nO produto nao se encaixa nos criterios!\n");
		return 0; //encerra o programa aqui
	}
	
	novo_preco = preco + (preco * taxa_aum) - (preco * taxa_dim);
	printf("\nO novo preco do produto sera de: %.2f\n", novo_preco);
	return 0;
}
