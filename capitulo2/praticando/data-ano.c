#include <stdio.h>
#include <stdlib.h>

int main() {
	int dia , mes , ano;
	printf("Digite uma data no formato dd/mm/aaaa: ");
	scanf("%d%*c%d%*c%d", &dia, &mes, &ano);
	printf("A data que voce digitou foi: %02d/%02d/%d\n", dia, mes, ano);
	system("PAUSE");
	return 0;
}
