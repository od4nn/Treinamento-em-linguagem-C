#include <stdio.h>
#include <stdlib.h>

int main() {
	int n1, n2, n3, temp;
	
    printf("Digite o primeiro numero:\n");
    scanf("%d", &n1);
    printf("Digite o segundo numero:\n");
    scanf("%d", &n2);
    printf("Digite o terceiro numero:\n");
    scanf("%d", &n3);
    
    if(n1 > n2){
    	temp = n1;
    	n1 = n2;
    	n2 = temp;
	}
	if(n1 > n3){
    	temp = n1;
    	n1 = n3;
    	n3 = temp;
	}
	if(n2 > n3){
		temp = n2;
		n2 = n3;
		n3 = temp;
	}	
	printf("%d, %d, %d\n", n1, n2, n3);
	return 0;
}
