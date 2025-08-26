/* Adivinha.C */
/* Testa a sua capacidade de adivinhar uma letra */
#include <stdio.h>
#include <stdlib.h> /* Para system() e rand() */
#include <conio.h>  /* Para getch() */

int main()
{
    char ch = 's'; /* S de sim */
    char resp;     /* Resposta do usuário */
    char secreto;
    int tentativas;

    while(ch == 's')
    {
        secreto = rand() % 26 + 'a';
        tentativas = 1;
        printf("\n\nDigite uma letra entre 'a' e 'z':\n");

        while((resp = getch()) != secreto)
        {
            printf("%c é incorreto. Tente novamente\n", resp);
            tentativas++;
        }
        printf("%c é CORRETO!!\n", resp);
        printf("Você acertou em %d tentativas\n", tentativas);
        printf("\nQuer jogar novamente? (s/n): ");
        ch = getche();
    }
    printf("\nAté logo e boa sorte!\n");
    system("PAUSE");
    return 0;
}
