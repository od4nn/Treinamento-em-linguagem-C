#include <stdio.h>
#include <stdlib.h>

int main() {
	int altura;
	float peso;
	
	printf("Digite sua altura em cm: ");
	scanf("%d", &altura);
	printf("Digite seu peso em kg: ");
	scanf("%f", &peso);
	
	if(altura > 170){ //maior que 170
		if(peso > 90){
			printf("\n\nI\n");
		}
		else if(peso >= 60){
			printf("\n\nF\n");
		}
		else{
			printf("\n\nC\n");
		}	
	}
	
	else if(altura >= 120){ //maior que 120
		if(peso > 90){
			printf("\n\nH\n");
		}
		else if(peso >= 60){
			printf("\n\nE\n");
		}
		else{
			printf("\n\nB\n");
		}	
	}
	
	else{ //menor que 120cm
		if(peso > 90){
			printf("\n\nG\n");
		}
		else if(peso >= 60){
			printf("\n\nD\n");
		}
		else{
			printf("\n\nA\n");
		}
	}
	return 0;
}
