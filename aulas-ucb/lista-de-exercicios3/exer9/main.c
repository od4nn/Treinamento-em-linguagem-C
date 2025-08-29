#include <stdio.h>
#include <stdlib.h>

/*- Construa um algoritmo em PORTUGOL para encontrar o maior e o menor número de uma
série de números positivos fornecidos pelo usuário através do teclado. O dado finalizador é o
número –1, e este não deve ser considerado.*/

int main() {
	int n_usuario, n_maior = 0, n_menor = 0, contador = 0;
	
	printf("Digite -1 para sair.\n");
	
	while(1){
		do{
			printf("\nInforme um numero positivo: ");
			scanf("%d", &n_usuario);
			
			if(n_usuario == 0 || n_usuario < -1){ //feedback para o usuario
				printf("Digite apenas numeros positivos maiores que 0!\n\n");
			}	
					
		}while(n_usuario == 0 || n_usuario < -1); // impede que o usuario digite zero ou um numero negativo
		
		if(n_usuario == -1){ //sai do loop
			break;
		}
		
		contador++; 
		
		if(contador == 1){ //se for o primeiro numero do programa, armazena ele em n_maior e n_menor
			n_maior = n_usuario;
			n_menor = n_usuario;
		}
		
		if(n_usuario > n_maior){ //pega o maior numero dentre todos
			n_maior = n_usuario;	
		}
		
		if(n_usuario < n_menor){ //pega o menor numero dentre todos
			n_menor = n_usuario;
		}		
	}
	
	if(contador == 0){ //caso o usuario digite -1 sem informar numeros validos antes
		printf("\nVoce nao informou nenhum numero valido para o programa!");
		return 1;
	}
	
	printf("\nDigite qualquer tecla para continuar...\n");
	getchar(); //evita armazenar o enter
	getchar(); //espera tecla do usuario
	
	
	printf("\n\nO maior numero digitado foi: %d", n_maior);
	printf("\nO menor numero digitado foi: %d", n_menor);
	return 0;
}
