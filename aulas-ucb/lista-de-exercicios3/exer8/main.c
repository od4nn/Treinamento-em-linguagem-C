#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n_usuario = 0, n_soma = 0, n_quant = 0, n_par = 0, n_impar = 0, n_maior = 0, n_menor = 0, par_quant = 0;
    double media_par, media, porc_impar; //apenas para resultados que exigem casas decimais
    printf("INICIO DO PROGRAMA\n------------------\n");
    while (1){ // sempre verdadeiro
        printf("\nDigite 30000 para parar.\nInforme o numero: ");
        scanf("%d", &n_usuario);

        if(n_usuario == 30000)
            break; //se for 30000, nao considerar o numero e sair do loop

        n_soma += n_usuario; //acumula a soma
        n_quant++; //quantidade de numeros digitados

        if(n_quant == 1){ //se for o primeiro loop, variaveis n_maior e n_menor recebem seus primeiros valores
            n_maior = n_usuario;
            n_menor = n_usuario;
        }
        if(n_usuario > n_maior)
            n_maior = n_usuario;

        if(n_usuario < n_menor)
            n_menor = n_usuario;

        if(n_usuario % 2 == 0){
            n_par += n_usuario; //armazena a soma dos pares em n_par
            par_quant++;
        }

        if(n_usuario % 2 == 1)
            n_impar++;  //quantidade de numeros impares
    }
    printf("\nPressione qualquer tecla para continuar...");
    getchar();
    getchar();
    if(par_quant > 0){
        media_par = (double)n_par / par_quant; //media dos numeros pares
    }else{ //evita bugs no printf
        media_par = 0;
    }
    if(n_quant > 0){
        media = (double)n_soma / n_quant; //media dos numeros digitados
        porc_impar = (double)n_impar * 100 / n_quant;//porcentagem de numeros impares
    }

    printf("\n----- RESULTADOS -----"); //mostrando resultados
    printf("\nA soma dos numeros digitados: %d", n_soma);
    printf("\nA quantidade de numeros digitados foi: %d", n_quant);
    printf("\nA media dos numeros digitados: %.2lf", media);
    printf("\nO maior numero digitado foi: %d", n_maior);
    printf("\nO menor numero digitado foi: %d", n_menor);
    printf("\nA media dos numeros pares: %.2lf", media_par);
    printf("\nA percentagem dos numeros impares entre todos os numeros digitados e: %.2lf %%\n", porc_impar);
    return 0;
}
