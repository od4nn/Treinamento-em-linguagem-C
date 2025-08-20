#include <stdio.h>
#include <stdlib.h>

int main() {
	int i;
	float a,b,c, temp;
	
	printf("Digite o valor de a: \n");
	scanf("%f", &a);
	printf("Digite o valor de b: \n");
	scanf("%f", &b);
	printf("Digite o valor de c: \n");
	scanf("%f", &c);
	printf("Digite o valor 1, 2 ou 3: \n");
	scanf("%i", &i);
			
		if(a > b){ 
    	temp = a;
    	a = b;
    	b = temp; //passa o menor valor para a
		}
		if(a > c){ 
	    	temp = a;
	    	a = c;
	    	c = temp; //passa o menor valor para a
		}
		// b e c tem agora os dois maiores valores, a tem o menor, entao compare b e c
		if(b > c){
			temp = b;
			b = c;
			c = temp; //passa o valor medio para b
		}
		//no final, a = menor valor, b = valor medio, c valor maior
		if(i == 1){ //opcao1
			printf("\n\nOs numeros em ordem crescente são: %.2f, %.2f, %.2f\n", a, b, c);		
		}
		else if(i == 2){ //opcao2
			printf("\n\nOs numeros em ordem decrescente são: %.2f, %.2f, %.2f\n", c, b, a);
		}
		else if(i == 3){//opcao3
			printf("\n\nO numero maior está no meio: %.2f, %.2f, %.2f\n", a, c, b);
		}		
		return 0;
}
