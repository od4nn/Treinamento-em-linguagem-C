#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
	char ch;
	printf("\nPressione uma tecla: ");
	ch = getchar(); 
	printf("\nA tecla sucessora ASCII e: ");
	putchar(ch+1);
	putchar('\n');
	return 0;
}
