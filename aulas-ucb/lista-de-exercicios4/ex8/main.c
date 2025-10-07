#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* Crie uma sub-rotina que receba como parâmetro a altura e o sexo de uma pessoa e
retorne o seu peso ideal. Para homens: peso ideal = 72.7 * altura – 58; Para mulheres:
peso ideal: 62.1 * altura – 44.7. */

float peso_ideal(float alt, char sexo);
int main()
{
    float altura, peso_i;
    char sexo;
    printf("Informe a altura: ");
    scanf("%f", &altura);
    do{
        printf("Informe H para homem e M para mulher: ");
        scanf(" %c", &sexo);
    }while(sexo != 'H' && sexo != 'M');

    sexo = toupper(sexo);
    peso_i = peso_ideal(altura, sexo);
    printf("\n\nO seu peso ideal eh: %.2f\n", peso_i);
    return 0;
}

float peso_ideal(float alt, char sexo)
{
    float peso = 0.0;

    if(sexo == 'H'){
        peso = 72.7 * alt - 58;
    }
    else if(sexo == 'M'){
        peso = 62.1 * alt - 44.7;
    }
    return peso;
}
