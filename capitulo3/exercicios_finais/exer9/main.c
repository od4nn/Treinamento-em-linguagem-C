#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    long long int anterior = 1, atual = 1, proximo;

    printf("Digite o numero termo da sequencia de fibonacci: ");
    scanf("%d", &n);

    if(n == 1 || n == 2){
        printf("1");
        return 0;
    }

    for(int i = 3; i <= n; i++){
        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }

    printf("\n\nO termo %d da sequencia e: %llf\n", n, atual);
    return 0;
}
