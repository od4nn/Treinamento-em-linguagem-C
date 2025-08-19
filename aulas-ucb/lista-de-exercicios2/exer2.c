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
	media = (nota1 + nota2 + nota3)  / 3;
	if(media >= 7.0){
		printf("Sua media e: %.2f\nVoce esta aprovado", media);
	}
	else if(media >= 3.0){
		printf("Sua media e: %.2f\nVoce fara o exame", media);
	}
	else{
		printf("Sua media e: %.2f\nVoce esta reprovado", media);
	}
	return 0;
}

