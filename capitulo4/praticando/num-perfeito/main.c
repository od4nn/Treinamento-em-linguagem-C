//numero perfeito
#include <stdio.h>
#include <stdlib.h>

int main() {
	int num, i, verif_num = 0;
	
	printf("Informe o numero que sera verificado: ");
	scanf("%d", &num);
	
	for(i = 1; i < num; i++){
		if (num % i == 0){
			verif_num += i;
		}
	}
	
	if(verif_num == num){
		printf("\n%d eh um numero perfeito!\n", num);
	}
	else{
		printf("%d nao eh um numero perfeito!\n", num);
	}
	return 0;
}
