#include <stdio.h>
#include <stdlib.h>

/* Dados tr�s valores X, Y e Z, verificar se eles podem ser os comprimentos dos 
lados de um tri�ngulo e, se forem, verificar se � um tri�ngulo equil�tero, is�sceles ou 
escaleno. Se eles n�o formarem um tri�ngulo escrever uma mensagem. Considerar 
que: 
??O comprimento de cada lado de um tri�ngulo � menor que a soma dos outros dois 
lados; 
??Chama-se tri�ngulo equil�tero o tri�ngulo que tem tr�s lados iguais; 
??Chama-se tri�ngulo is�sceles o tri�ngulo que tem o comprimento de dois lados 
iguais; 
??Chama-se tri�ngulo escaleno o tri�ngulo que tem os tr�s lados diferentes */

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
