#include <stdio.h>
#include <stdlib.h>

int main() {
	int evento = 5;
	char corrida = 'C';
	float tempo = 27.25;
	/* eles nao sao cavalos, sao pessoas */
	printf("O tempo vitorioso na eliminatoria %c\n", corrida);
	printf("da competicao %d foi %.2f segundos.", evento, tempo);
	return 0;
}
