#include <stdio.h>
#include <stdlib.h>
//Calcula a média de 4 notas
int main() {
	float n1,n2,n3,n4;
	double media;
	printf("Digite as 4 notas:\n");
	scanf("%f%f%f%f", &n1,&n2, &n3, &n4);
	media = (n1 + n2 +n3 + n4) / 4;
	printf("\nSua media e %.2f.\n", media);
	return 0;
}
