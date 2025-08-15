#include <stdio.h>
#include <stdlib.h>

int main() {
	const double Pi = 3.141592;
	double raio, area;
	printf("\nDigite o raio da esfera: ");
	scanf("%lf",&raio);
	area = 4.0 * Pi * raio * raio;
	printf("\nArea da esfera = %.2lf\n", area);
	return 0;
}
