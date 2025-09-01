#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double k = 1.0, n;
    int i;
    printf("Informe o valor de n: ");
    scanf("%lf", &n);

    for(i = 0; i < 12; i++){
        k = (k + (n / k)) / 2; //formula de calculo de raiz quadrada
        printf("\nA raiz quadrada de n no loop %d e: %lf", i + 1, k);
    }
    printf("\n\n");

    printf("Valor calculado apos 12 loops: %lf", k);
    printf("\nValor real calculado pela math.h: %lf\n", sqrt(n));
    return 0;
}
