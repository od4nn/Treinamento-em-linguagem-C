#include <stdio.h>
#include <stdlib.h>

int main() {
	float tfare, tcelsius;
	printf("Digite a temperatura em Celsius: ");
	scanf("%f", &tcelsius);
	printf("A temperatura em fahrenheit e: %.2f", tcelsius * 9/6 + 32);
	
	return 0;
}
