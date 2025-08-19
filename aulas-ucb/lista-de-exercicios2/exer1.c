#include <stdio.h>
#include <stdlib.h>

int main() {
	/*Faça um programa que receba as três notas, calcule e mostre a média 
	ponderada e o conceito que segue a tabela abaixo:*/
	float nota1,nota2,nota3, media;
	printf("Digite a nota do trabalho de laboratorio:\n");
	scanf("%f", &nota1);
	printf("Digite a nota da avaliacao semestral:\n");
	scanf("%f", &nota2);
	printf("Digite a nota do exame final:\n");
	scanf("%f", &nota3);
	media = (nota1 * 2 + nota2 * 3 + nota3 * 5) / (2+3+5);
	if(media >= 8.0){
		printf("Sua media e: %.2f\nE sua nota e A", media);
	}
	else if(media >= 7.0){
		printf("Sua media e: %.2f\nE sua nota e B", media);
	}
	else if(media >= 6.0){
		printf("Sua media e: %.2f\nE sua nota e C", media);
	}
	else if(media >= 5.0){
		printf("Sua media e: %.2f\nE sua nota e D", media);
	}
	else{
		printf("Sua media e: %.2f\nE sua nota e E", media);
	}
	return 0;
}
