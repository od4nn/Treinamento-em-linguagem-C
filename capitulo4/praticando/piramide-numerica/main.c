//piramide
#include <stdio.h>
#include <stdlib.h>

int main() {
	int altura, i, j;
	
	do{
		printf("Informe um numero de 1 a 9: ");
		scanf("%d", &altura);
	}while(altura < 1 || altura > 9);
	
	for(i = 1; i <= altura; i++){
		for(j = 0; j < i; j++){
			printf("%d ", i);
		}
		printf("\n");
	}
	return 0;
}
