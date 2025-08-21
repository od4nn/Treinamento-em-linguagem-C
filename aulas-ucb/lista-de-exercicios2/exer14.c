#include <stdio.h>
#include <stdlib.h>

int main() {
	float salario, bonif, aux;
	printf("Digite o salario: RS");
	scanf("%f", &salario);
	
	if(salario > 1200){
		bonif = salario * 0; //sem bonificacao
	}
	else if(salario > 500.01){
		bonif = salario * 0.12;	//12%
	}
	else{
		bonif = salario * 0.05; //5%
	}
	
	//Bonificacao
	if (salario > 600) { // Mais que R$600
		aux = 100; 
	} 
	else { // Ate R$600
		aux = 150; 
	}
	
	salario += bonif + aux; 
	printf("\n\nSeu novo salario com a bonificacao e o auxilio escola e: RS%.2f\n", salario);
	return 0;
}
