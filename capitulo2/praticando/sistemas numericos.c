#include <stdio.h>
#include <stdlib.h>

int main() {
	char a;
	printf("Digite um caractere e veja-o em decimal, octal e hexadecimal: ");
	scanf("%c", &a);
	printf("\nCaractere = %c\nDec\t = %d\nOct\t = %o\nHex\t = %x\n", a, a, a, a);
	system("PAUSE");
	return 0;
}
