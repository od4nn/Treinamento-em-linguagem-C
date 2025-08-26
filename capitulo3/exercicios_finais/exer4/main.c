#include <stdio.h
#include <stdlib.h>
#include <conio.h>

int main()
{
    do{
        char resp;
        printf("Digite uma tecla:");
        resp = getch();
        //operador ternario, se a expressao for verdadeira o primeiro valor depois de ? sera passado, senao o valor depois de :
        resp = (resp >= 97 && resp <= 122) ? resp - 32: resp;
        printf("\n%c\n", resp);
    }
    while(resp != 27); //27 igual a esc na tabela ascii
    return 0;
}
