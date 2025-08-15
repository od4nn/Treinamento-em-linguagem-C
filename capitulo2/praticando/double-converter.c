#include <stdio.h>
#include <stdlib.h>

int main() {
	int VarInt= 2000000000;
	int Dez = 10;
	VarInt = ((double)VarInt * Dez)/Dez;
	printf("\nVarInt = %d\n", VarInt);		
	return 0;
}
