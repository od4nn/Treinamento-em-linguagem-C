#include <stdio.h>
#include <stdlib.h>

int main() {
	int n1,n2, m;
	printf("Digite o primeiro numero:\n");
	scanf("%d%d", &n1, &n2);
	m = (n1 > n2) ? n1:n2;
	printf("%d e o maior", m);
	return 0;
}
