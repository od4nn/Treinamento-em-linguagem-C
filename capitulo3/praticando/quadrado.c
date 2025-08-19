#include <stdio.h>
#include <stdlib.h>

int main() {
	int comprimento,altura;
	printf("Digite o comprimento: ");
	scanf("%d", &comprimento);
	printf("Digite a altura: ");
	scanf("%d", &altura);
	system("cls");
	
		printf("\n");
		for(int p = 0; p < comprimento; p++){
		printf("#");	
		}
		printf("\n");	
		for(int j = 0; j < altura; j++){ //altura
			printf("#"); //coluna1
			for(int q = 0; q < comprimento-2; q++){
				printf(" "); //espaços
			}
			printf("#\n");	//coluna2	
		}
		for(int h = 0; h < comprimento; h++){
		printf("#");//executado por ultimo fechando o quadrado
		}
	return 0;
}
