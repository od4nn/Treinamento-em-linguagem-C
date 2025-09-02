#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 1;

    while(1){
        if(n % 3 == 2 && n % 5 == 3 && n % 7 == 4)
        {
            printf("O numero e: %d", n);
            break;
        }
        n++;
    }
}
