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
	printf("\nFitas %12d", fitas);
	return 0;
}
