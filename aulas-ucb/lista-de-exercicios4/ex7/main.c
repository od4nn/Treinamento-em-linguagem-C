#include <stdio.h>
#include <stdlib.h>

int fatorial(int n)
{
	int fat = 1, i;
	for(i = n; i > 0; i--){
		fat *= i;
	}
	return fat;
}

float calcula_s (int n)
{
	float S = 1.0;
	int i;
	
	for(i = 2; i <= n; i++){
		S += 1 / (float)(fatorial(i));	
	}
	return S;	
}

int main() {
	int n;
	float S;
	
	printf("Informe o valor de n: ");
	scanf("%d", &n);
	S = calcula_s  (n);
	
	printf("O valor de S: %.2f", S);
	return 0;
}
