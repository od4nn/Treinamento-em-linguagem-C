#include <stdio.h>
#include <stdlib.h>

void calcula_s(int n)
{
	float S = 0;
	int i, incr;
	for(i = 1; i < n; i++){
		incr = i * i + 1; //calcula a parte de cima da fracao
		S += (float)incr / (i + 3);		
	}
	S += ((float)n * n + 1 ) / (n + 3);
	printf("O valor de S eh: %.2f\n", S);
}

int main() {
	int n;
	do
	{
		printf("Informe o valor de n: ");
		scanf("%d", &n);	
	}while(n < 1);
	
	calcula_s(n);
	return 0;
}
