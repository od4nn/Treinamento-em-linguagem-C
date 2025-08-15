#include <stdio.h>
#include <stdlib.h>

int main() {
	float n1,n2,n3,n4, media;
	printf("\nDigite a nota:\n ");
	scanf("%f", &n1);
	media += n1;
	printf("\nDigite a nota:\n ");
	scanf("%f", &n2);
	media += n2;
	printf("\nDigite a nota:\n ");
	scanf("%f", &n3);
	media += n3;
	media /= 3;
	printf("A nota sera: %.2f\n", media);
	return 0;
}
