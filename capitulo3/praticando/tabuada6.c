#include <stdio.h>
#include <stdlib.h>

int main() {
	for(int i = 1 ; i < 10 ; i++){
		printf("%d x 6 = %d\n", i, i*6);
	}	
	//tabuada invertida
	printf("\n\n");
	for(int i = 10 ; i > 0; i--){
		printf("%d x 6 = %d\n", i, i*6);	
	}	
	return 0;
}
