#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char resp = 's';
    srand(time(NULL)); //numero aleatorio toda vez

    while(resp == 's'){
        int palpite = 0;
        int aleatorio;
        int tentativa = 0;

        aleatorio = rand() % 100 + 1; //limita os numeros a 100
        while (palpite != aleatorio){
            printf("Digite um numero: ");
            scanf("%d", &palpite);
            tentativa++;

            if(palpite > aleatorio){
                printf("\nO seu palpite e alto.\n\n");
            }
            else if(palpite < aleatorio){
                printf("\nO seu palpite e baixo.\n");
            }
        }
        printf("Voce acertou! O numero era: %d\nTentativas: %d \n\nDeseja jogar denovo? (s/n)\n", aleatorio, tentativa);
        scanf(" %c", &resp);
    }
    return 0;
}
