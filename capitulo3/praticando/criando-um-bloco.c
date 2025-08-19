#include <stdio.h>
#include <stdlib.h>

int main() {
	int i = 5;
	{//comeco do bloco	
		int i = 150;
		printf("%d\n",i);
	} //fim do bloco
	printf("%d", i);
	return 0;
}
