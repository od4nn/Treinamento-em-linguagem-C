#include <stdio.h>
#include <stdlib.h>

int main() {
	const int notas_total = 10;
	float nota_soma;
	for(int i = 0; i < 10; i++){
		float nota; //nota-se que essa variavel so pode ser acessada dentro do for
		printf("Digite a nota %do: ", i + 1);
		scanf("%f", &nota);
		nota_soma+= nota;
	}
	printf("A media e: %.2f", nota_soma / notas_total);
	return 0;
}
