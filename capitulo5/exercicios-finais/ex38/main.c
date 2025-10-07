#include <stdio.h>
#include <stdlib.h>

int n_primo(int n);

int main()
{
    int n, resul;

    printf("Informe um numero: ");
    scanf("%d", &n);
    resul = n_primo(n);
    printf("%d", resul);
    return 0;
}

int n_primo(int n)
{
    int i;

    for(i = 2; i < n; i++){
        if(n % i == 0){
        return 0;
        }
    }
    return 1;
}
