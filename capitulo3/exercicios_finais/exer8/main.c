#include <stdio.h>
#include <stdlib.h>

long long int calcular_fatorial(int num);
int main()
{
    int objetos, combinacoes;
    long long int resultado, f_combinacoes, f_objetos, subtracao_fatorial;

    printf("Informe o numero de combinacoes: ");
    scanf("%d", &combinacoes);
    printf("Informe o numero de objetos: ");
    scanf("%d", &objetos);

    f_combinacoes = calcular_fatorial(combinacoes); //chama funcao
    f_objetos = calcular_fatorial(objetos); //chama funcao

    subtracao_fatorial = calcular_fatorial(objetos - combinacoes);

    resultado = f_objetos / (f_combinacoes *(subtracao_fatorial));
    printf("\n\nO resultado e: %.2lld\n", resultado);
    return 0;
}

//calcula fatorial
long long int calcular_fatorial(int num){
    long long int fatorial = 1;
    for(int i = num; i > 1; i--){
        fatorial *= i;
    }
    return fatorial;
}
