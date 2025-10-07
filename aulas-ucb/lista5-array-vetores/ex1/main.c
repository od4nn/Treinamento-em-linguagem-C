#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que preencha um vetor com nove números inteiros, calcule e mostre
os números primos e suas respectivas posições*/

void calcule_primo(int vetor[]);
int main()
{
    int vetor[9], i;
    for(i = 0; i < 9; i++){
        printf("Informe o numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    calcule_primo(vetor);
    return 0;
}

void calcule_primo(int vetor[])
{
    int i, j, cont;
    for(i = 0; i < 9; i++){ //passa por cada valor de vetor
        cont = 0; //garante que seja reinicializado a cada novo numero
        for(j = 2; j < vetor[i]; j++){ //calcula se os numeros entre 2 a vetor sao divisiveis por ele
            if(vetor[i] % j == 0){
            cont++;
            }
        }
        if(cont == 0){
            printf("\nO numero %d da posicao %d eh primo.", vetor[i], i + 1);
        }
    }
}
