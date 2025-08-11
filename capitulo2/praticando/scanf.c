#include <stdio.h>
#include <stdlib.h>


int main() {
	float anos, dias;
	printf("Digite sua idade em anos: ");
	scanf("%f", &anos); //pega o que o usuario escreveu e atribui ao endereço da variavel (&)
	dias = anos * 365;
	printf("A sua idade em dias e %.0f.\n", dias);
	return 0;
}
