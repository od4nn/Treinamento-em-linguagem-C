#include <stdio.h>
#include <stdlib.h>

int main()
{
    char resp = 's';
    int secreto;
    while(resp == 's'){
        printf("\nvalor: %d\n divisao: %d\n", rand(), rand() % 26);
        printf("\nir denovo?");
        scanf(" %c", &resp);
    }
    return 0;
}
