#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que receba três números obrigatoriamente em ordem e um 
quarto número que não siga esta regra. Mostre, em seguida, os quatro números em 
ordem decrescente.*/

int main() {
	int n1,n2,n3,n4,temp;
	
    printf("Digite o primeiro numero:\n");
    scanf("%d", &n1);
    printf("Digite o segundo numero:\n");
    scanf("%d", &n2);
    printf("Digite o terceiro numero:\n");
    scanf("%d", &n3);
    printf("Digite o quarto numero:\n");
    scanf("%d", &n4);
    if(n1 < n2){ //compara n1 e n2
    	temp = n1;
    	n1 = n2;
    	n2 = temp;
	}
	if(n1 < n3){//compara n1 com n3
		temp = n1;
		n1 = n3;
		n3 = temp;	
	}
	if(n1 < n4){//compara n1 com n3
		temp = n1;
		n1 = n4;
		n4 = temp;
	}
	if(n2 < n3){//compara n2 com n3
		temp = n2;
		n2 = n3;
		n3 = temp;
	}
	if(n2 < n4){//compara n2 com n4
		temp = n2;
		n2 = n4;
		n4 = temp;
	}
	if(n3 < n4){//compara n3 com n4
		temp = n3;
		n3 = n4;
		n4 = temp;
	}
	printf("\n\nOs numeros estao em ordem decrescente: %d, %d, %d, %d", n1, n2, n3, n4);	
	
	return 0;
}
