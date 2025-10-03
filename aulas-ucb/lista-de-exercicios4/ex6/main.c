#include <stdio.h>
#include <stdlib.h>

/*Elabore um programa contendo uma sub-rotina que receba três notas e uma letra  como
parâmetros. Se a letra for A, então deve ser retornada a média aritmética das notas; se a letra
for P, então deve ser retornada a média ponderada, com pesos 5, 3 e 2, respectivamente. A
média calculada deverá ser devolvida ao programa principal para, então, ser mostrada. (7) */

float calc_media(float n1, float n2, float n3, char resp)
{
    float media;
    if(resp == 'A'){
        media = (n1 + n2 + n3) / 3;
        return media;
    }
    else if(resp == 'P'){
        media = ((n1 * 5) + (n2 * 3) + (n3 * 2)) / (5 + 3 + 2);
        return media;
    }
}

int main()
{
    float n1, n2, n3, media;
    char resp;
    printf("Informe a primeira nota: ");
    scanf("%f", &n1);
    printf("\nInforme a segunda nota: ");
    scanf("%f", &n2);
    printf("\nInforme a terceira nota: ");
    scanf("%f", &n3);
    printf("\nDigite A para ver a media aritmetica ou P para ver a media ponderada: ");
    scanf(" %c", &resp);

    if(resp == 'A'){
        media = calc_media(n1, n2, n3, resp);
        printf("\n\nA media aritmetica eh: %.2f\n", media);
    }
    else if(resp == 'P'){
        media = calc_media(n1, n2, n3, resp);
        printf("\n\nA media ponderada eh: %.2f\n", media);
    }
    else{
        printf("\n\nResposta invalida!\n");
    }

    return 0;
}
