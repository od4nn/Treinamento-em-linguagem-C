#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que receba três números e mostre-os em ordem crescente. */

int main() {
	int n1, n2, n3;
	printf("Digite o primeiro numero:\n");
	scanf("%d", &n1);
	printf("Digite o segundo numero:\n");
	scanf("%d", &n2);
	printf("Digite o terceiro numero:\n");
	scanf("%d", &n3);
	if (n1 < n2 && n1 < n3){//verifica n1 o maior
		printf("%d,", n1);
		if(n2 < n3){
			printf(" %d, %d", n2, n3);
		}else{
			printf(" %d, %d", n3, n2);
		}
	}else if(n2 < n1 && n2 < n3){//verifica n2 o maior
		printf("%d", n2);
		if(n1 > n3){
			printf(" %d, %d", n1, n3);
		}else{
			printf(" %d, %d", n3, n1);
		}	
	}else{ //verifica n3 o maior
		printf("%d", n3);
		if(n2 < n1){
			printf(" %d, %d", n2, n1);
		}else{
			printf(" %d, %d", n1, n2);
		}	
	}	
	return 0;
}
