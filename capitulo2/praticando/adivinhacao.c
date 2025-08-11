#include <stdio.h>
#include <stdlib.h>

int main() {
	int x,r;
	printf("\nDigite um numero de ate 4 algarismos: ");
	scanf("%d", &x);
	r = 19998 + x;
	printf("\nO resultado da soma e: %d", r);
	printf("\nDigite o segundo numero: ");
	scanf("%d", &x);
	printf("\nO meu numero e: %d", 9999 - x);
	printf("\nDigite o quarto numero: ");
	scanf("%d", &x);
	printf("\nO meu numero e: %d\n", 9999 - x);
	system("PAUSE");
	return 0;
}
