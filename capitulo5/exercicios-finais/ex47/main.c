#include <stdio.h>
#include <stdlib.h>

int potencia(int i, int j);
int main()
{
    int base, exp, resul;
    printf("Informe o numero base: ");
    scanf("%d", &base);
    printf("Informe o expoente: ");
    scanf("%d", &exp);
    resul = potencia(base, exp);
    printf("\n\n%d elevado a %d eh: %d\n", base, exp, resul);
    return 0;
}

int potencia(int i, int j)
{
    int res;
    if(j == 0){
        return 1;
    }
    res = i * potencia(i, j - 1);
    return res;
}
