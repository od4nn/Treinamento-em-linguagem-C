// ordenanum.c
#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 50

// Prot�tipo da fun��o (boa pr�tica declarar antes de usar)
void ordena(int lista[], int tamanho);

int main() {
    int Tab[TAMANHO];
    int i, j;
    int contador_de_numeros = 0;

    // --- Leitura dos Dados ---
    printf("Digite at� %d n�meros (ou digite 0 para terminar):\n", TAMANHO);
    for (i = 0; i < TAMANHO; i++) {
        printf("Digite um n�mero: ");
        scanf("%d", &Tab[i]);

        // Se o usu�rio digitar 0, interrompe o la�o
        if (Tab[i] == 0) {
            break;
        }
    }
    // A vari�vel 'i' agora cont�m o n�mero exato de elementos digitados
    contador_de_numeros = i;

    // --- Ordena��o ---
    // S� chama a fun��o se pelo menos um n�mero foi digitado
    if (contador_de_numeros > 0) {
        ordena(Tab, contador_de_numeros);
    }

    // --- Impress�o do Resultado ---
    printf("\n--- N�meros ordenados ---\n");
    for (j = 0; j < contador_de_numeros; j++) {
        printf("%d\n", Tab[j]);
    }

    // system("PAUSE"); // Funciona melhor no Windows. Em outros sistemas, pode ser removido.
    return 0;
}


/**
 * @brief Ordena uma matriz de inteiros usando o m�todo Selection Sort.
 * @param lista A matriz a ser ordenada.
 * @param tamanho O n�mero de elementos na matriz.
 */
void ordena(int lista[], int tamanho) {
    int i, j, temp;

    // La�o externo que avan�a a posi��o do elemento a ser ordenado
    for (i = 0; i < tamanho - 1; i++) {
        // La�o interno que busca por elementos menores no resto da lista
        for (j = i + 1; j < tamanho; j++) {
            // Se encontrar um elemento menor, realiza a troca
            if (lista[i] > lista[j]) {
                temp = lista[j];
                lista[j] = lista[i];
                lista[i] = temp;
            }
        }
    }
}
