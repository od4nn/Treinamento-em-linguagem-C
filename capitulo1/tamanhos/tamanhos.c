#include <stdio.h>
#include <stdlib.h>

int main() {
	int valor = 350;
	int lapis = 45, borracha = 2345, caneta = 420, caderno = 8, fitas = 13050;
	for (int largura = 2; largura <= 6; largura++) {
    printf("Os alunos sao %*d.\n", largura, valor); //* aqui, e como se fosse (%d) %d, usando o valor de largura como argumento
    }
	system("PAUSE");
	printf("\nLapis %12d", lapis);
	printf("\nBorracha %12d", borracha);
	printf("\nCaneta %12d", caneta);
	printf("\nCaderno %12d", caderno);
	printf("\nFitas %12d\n", fitas);
	system("PAUSE");
	printf("%10.2f %-10.2f %10.2f\n", 8.0, 15.3, 584.12);
	
	printf("\n OBJETO %15s", "CODIGO");
	printf("\n Lapis %13s", "WQR");
	printf("\n Borracha %10s", "ASQ");
	printf("\n%04d",21);
	return 0;
	
}
