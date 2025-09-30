#include <stdio.h>
#include <stdlib.h>

void calculo_tempo(int segundos)
{
    int horas, minutos, aux;

    horas = segundos / 3600; //pega as horas
    minutos = segundos % 3600; //pega os minutos
    aux = minutos; //guarda valor de minutos
    minutos = minutos / 60;
    segundos = (aux % 60) % 60;
    printf("O valor em horas eh: %d\nEm minutos eh: %d\nEm segundos eh: %d\n", horas, minutos, segundos);
}

int main()
{
    int segundos_u;

    printf("Informe o valor em segundos: ");
    scanf("%d", &segundos_u);
    calculo_tempo(segundos_u); //chama funcao

    return 0;
}
