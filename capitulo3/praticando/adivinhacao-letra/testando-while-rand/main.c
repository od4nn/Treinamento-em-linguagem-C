#include <stdio.h>
#include <stdlib.h>

int main()
{
    char resp = 's';
    int secreto;
    while(resp == 's'){

        secreto = rand() % 26;
        printf("\n\n%d\n", secreto);
        printf("ir denovo?\n");
        scanf(" %c", &resp);
    }
    return 0;
}
