#include <stdio.h>
#include <stdlib.h>

/* Fa�a um programa que receba tr�s notas, calcule e mostre a m�dia aritm�tica entre
 elas.*/
 
int main() {
	float n1,n2,n3;
	float media;
	printf("Digite as 3 notas:\n");
	scanf("%f%f%f", &n1,&n2,&n3);
	media = (n1 + n2 + n3) / 3;
	printf("A media das notas e: %.2f", media);
	return 0;
}
