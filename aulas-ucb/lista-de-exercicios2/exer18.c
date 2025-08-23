#include <stdio.h>
#include <stdlib.h>

/* Dados três valores X, Y e Z, verificar se eles podem ser os comprimentos dos 
lados de um triângulo e, se forem, verificar se é um triângulo equilátero, isósceles ou 
escaleno. Se eles não formarem um triângulo escrever uma mensagem. Considerar 
que: 
??O comprimento de cada lado de um triângulo é menor que a soma dos outros dois 
lados; 
??Chama-se triângulo equilátero o triângulo que tem três lados iguais; 
??Chama-se triângulo isósceles o triângulo que tem o comprimento de dois lados 
iguais; 
??Chama-se triângulo escaleno o triângulo que tem os três lados diferentes */

int main() {
	float x, y, z;
	
	printf("Digite o valor de x: ");
	scanf("%f", &x);
	printf("Digite o valor de y: ");
	scanf("%f", &y);
	printf("Digite o valor de z: ");
	scanf("%f", &z);
	
	if(!(x < y + z && y < z + x && z < y + x)){//se nao for verdade
		printf("\nNao e um triangulo!");
		return 0;
	}
	else if(x == y && y == z && x == z){
		printf("\nE um triangulo equilatero.");
		return 0;
	}
	else if(x == y || y == z || z == x){
		printf("\nE um triangulo isosceles.");
		return 0;
	}
	else{
		printf("\nE um triangulo escaleno.");
	}
	return 0;
}
