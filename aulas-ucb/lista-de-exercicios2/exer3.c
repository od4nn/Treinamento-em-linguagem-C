#include <stdio.h>
#include <stdlib.h>

int main() {
	int n1,n2, m;
	printf("Digite os numeros:\n");
	scanf("%d%d", &n1, &n2);
	m = (n1 > n2) ? n1:n2; // se n1 maior que n2 for verdadeiro, m = n1, se for falso, m = n2
	printf("%d e o maior", m);
	return 0;
}
