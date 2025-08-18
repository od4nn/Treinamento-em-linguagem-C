#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
	//soma de 2 em 2 numeros
	for(int i = 0, j = i; (i+j) < 100; i++, j++){
		printf("%d\n", i + j);	
	}
	system("PAUSE");
	system("cls");
	//pega a letra a do alfabeto e mostra seu valor em ascii ate a letra z
	for(char a = 'a'; a <= 'z'; a++){
		printf("\nO valor ASCII de %c e: %d", a, a);
	}
	//mostra o valor do caractere digitado em ascii
	system("PAUSE");
	system("cls");
	unsigned char ch;
	for(ch = getch(); ch != '\r'; ch = getch()){
		printf("\nA letra em ASCII e: %d", ch);
	}	
	return 0;
	
}
