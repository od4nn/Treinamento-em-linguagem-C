#include <stdio.h>
#include <stdlib.h>

int main() {
	int n = 5;
	int m = 5;
	int x = ++n;
	int y = m--;
	int z = n * ++m;
	printf("\nN = %d \nX = %d", n, x);
	printf("\nM = %d \nY = %d", m, y);
	printf("\nZ (N x M) = %d\n", z);
	printf("%d\t%d\t%d\n", n, n+1, n++);		
	return 0;
}
