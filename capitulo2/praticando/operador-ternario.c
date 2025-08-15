#include <stdio.h>
#include <stdlib.h>

int main() {
	int recebe, recebe1, recebe2, recebe3;
	int x = 10, y = 10;
	/*Se x for maior que y entao o primeiro valor depois de "?" sera atribuido a
	variavel "recebe" senao sera otribuido o valor depois de ":". e como se fosse
	o if e else de c*/
	recebe = (x > y) ? 10 : 20;
	recebe1 = (x > y || x >= y) ? 10 : 20;
	recebe2 = (x == y && x > y + 1) ? 5 : 3;
	recebe3 = (x != 10 && x > 1) ? 1 : 0; // "!n" = diferente de, nao igual a. "!" = nao
	printf("%i\n%i\n%i\n%i", recebe, recebe1, recebe2, recebe3);
	return 0;
}
