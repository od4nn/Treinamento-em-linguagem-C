#include <stdio.h>
#include <stdlib.h>

/* Em uma eleição presidencial, existem quatro candidatos. Os votos são informados através
de código. Os dados utilizados para a escrutinagem obedecem à seguinte codificação: - 1, 2, 3 e 4 = voto para os respectivos candidatos; - 5 voto nulo; - 6 voto em branco;*/

int main()
{
    int voto, verif_letra, voto1 = 0, voto2 = 0, voto3 = 0, voto4 = 0, voto_nulo = 0, voto_branco = 0;

    printf("ESCOLHA O VOTO:\n\nOpcao 1: Digite 1\nOpcao 2: Digite 2\nOpcao 3: Digite 3\nOpcao 4: Digite 4\n");
    printf("Opcao 5: Digite 5 para voto nulo\nOpcao 6: Digite 6 para voto em branco:\nDigite -1 para o programa parar de perguntar.\n");
    printf("----------------------------------------\n");

    while(1){
        printf("\nInforme uma opcao: ");
        verif_letra = scanf("%d", &voto);

        if(verif_letra != 1){//evita que digite letras
            printf("\nDigite apenas numeros!\n");
            while(getchar() != '\n'); //limpa o \n que ficou
            continue; //reincia o loop
        }

        if(voto == -1){ //se for -1 sair do loop
            break;
        }

        switch(voto){
            case 1:
                voto1++;
                break;
            case 2:
                voto2++;
                break;
            case 3:
                voto3++;
                break;
            case 4:
                voto4++;
                break;
            case 5:
                voto_nulo++;
                break;
            case 6:
                voto_branco++;
                break;
            default:
                printf("\nOpcao invalida!");
                continue;
        }
    }

    printf("\nAperte qualquer tecla para continuar...\n");
    getchar();
    getchar();
    printf("\n\nQUANTIDADE DE VOTOS:\n");

    printf("\nA opcao 1 recebeu: %d voto(s)", voto1);
    printf("\nA opcao 2 recebeu: %d voto(s)", voto2);
    printf("\nA opcao 3 recebeu: %d voto(s)", voto3);
    printf("\nA opcao 4 recebeu: %d voto(s)", voto4);
    printf("\nA opcao 5 recebeu: %d voto(s)", voto_nulo);
    printf("\nA opcao 6 recebeu: %d voto(s)\n", voto_branco);

    return 0;
}
