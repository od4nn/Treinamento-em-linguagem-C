#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Fa�a um programa para resolver equa��es do 2� grau. ax� + bx + c = 0 
A vari�vel a deve ser diferente de zero. 
? < 0 � n�o existe raiz real. 
? = 0 � existe uma raiz real. 
x = -b/(2*a). 
? > 0 � existem duas ra�zes real. 
x1 = (-b+v?)/(2*a). 
x2 = (-b-v?)/(2*a). */

int main() {
	float a, b, c, delta, x, x1, x2;
	
	printf("Informe o valor de a: ");
	scanf("%f", &a);
	
	if(a == 0){
		printf("\n\nO valor de a deve ser diferente de 0!\n");
		return 0;
	}
	
	printf("Informe o valor de b: ");
	scanf("%f", &b);
	printf("Informe o valor de c: ");
	scanf("%f", &c);
	
	delta = (b * b) - (4 * a * c);
	printf("\n\nDelta = %.2f", delta);
	
	if(delta < 0){
		printf("\nNao existe raizes reais.");
		return 0;
	}
	else if(delta == 0){
		x = -b / (2 * a);
		printf ("\nRaiz = %.2f", x);
		return 0;
	}
	else{
		x1 = (-b +sqrt(delta)) / (2 * a);
		x2 = (-b -sqrt(delta)) / (2 * a);
		printf("\nRaiz 1 = %.2f", x1);
		printf("\nRaiz 2 = %.2f", x2);
	}
	return 0;
}
