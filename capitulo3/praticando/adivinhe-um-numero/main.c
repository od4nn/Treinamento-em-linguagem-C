#include <stdio.h>
#include <stdlib.h>

int main()
{
    char resp = 's';

    while(resp == 's'){
        int palpite;
        int aleatorio;

        aleatorio = rand();
        while (palpite != aleatorio){
            printf("Digite um numero: ");
            scanf("%d", &palpite);

            if(palpite > aleatorio){
                printf("\nO seu palpite e alto.\n\n");
            }
            else if(palpite < aleatorio){
                printf("\nO seu palpite e baixo.\n");
            }
            system("pause");
            system("cls");
        }
        printf("Voce acertou! O numero era: %d\n\nDeseja jogar denovo? (s/n)\n", aleatorio);
        scanf(" %c", &resp);
    }
    return 0;
}
