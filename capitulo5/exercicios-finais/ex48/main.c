#include <stdio.h>
#include <stdlib.h>

int soma(int n);
int main()
{
    int n, total;
    printf("Informe um numero: ");
    scanf("%d", &n);
    total = soma(n);
    printf("%d", total);
    return 0;
}

int soma(int n)
{
    int total;
    if(n == 1){
        return 1;
    }
    total = n + soma(n - 1);
    return total;
}
