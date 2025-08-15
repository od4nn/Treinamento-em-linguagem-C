#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
	char ch1, ch2;
	printf("\nPressione uma tecla (getche): ");
	ch1 = getchar(); // Aguarda uma tecla no teclado 
	printf("\nPressione outra tecla (getch): ");
	ch2 = getch(); // Aguarda uma tecla no teclado e quando digitada nao mostra para o usuario, so quando puxada na memoria
	printf("\nA tecla sucessora ASCII e: %c", ch1 + 1);
	printf("\nA tecla antecessora ASCII e: %c", ch2 - 1);
	return 0;
}
