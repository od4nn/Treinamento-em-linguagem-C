#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j;

    printf("Digite o maior valor da piramide: ");
    scanf("%d", &n);

    for(i = n; i > 0; i--){
        for(j = i; j > 0; j--){
            printf("%d ", j);
        }
        printf("\n");
    }

}
