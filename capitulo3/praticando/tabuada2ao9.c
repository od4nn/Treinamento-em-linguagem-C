#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, k;
    system("cls"); // Limpa a tela
    
    // La�o 1
    for(k=0; k<=1; k++) {
        printf("\n");
        
        for(i=1; i <= 4; i++) {
            printf("TABUADA DO %3d ", i+4*k+1);
        }
        printf("\n");
        
        // La�o 2
        for(i = 1; i <= 9; i++) {
            for(j=2+4*k; j <= 5+4*k; j++) {
                printf("%3d x%3d = %3d ", j, i, j*i);
            }
            printf("\n");
        }
    }
    return 0;
}
