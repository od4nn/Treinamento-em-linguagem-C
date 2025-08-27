#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero_escolhido, caso = 0;
    float probabilidade;

    printf("Digite um numero de 3 a 18: ");
    scanf("%d", &numero_escolhido);

    for(int dado1 = 1; dado1 <= 6; dado1++){
        for(int dado2 = 1; dado2 <= 6; dado2++){
            for(int dado3 = 1; dado3 <= 6; dado3++){
                if(dado1 + dado2 + dado3 == numero_escolhido){
                    caso++;
                }
            }
        }
    }
    probabilidade = ((float)caso / 216.0) * 100.0;
    printf("\n\nA probabilidade de sair o numero %d e: %.2f %%\n", numero_escolhido, probabilidade);
    return 0;
}
