#include <stdio.h>
#include <stdlib.h>

int main() {
	int i = 3, n;
	printf("\nn = %d\n", n = i * (i+1) + (++i));
	return 0;
}
