// ordenanum.c
#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 50

// Protótipo da função (boa prática declarar antes de usar)
void ordena(int lista[], int tamanho);

int main() {
    int Tab[TAMANHO];
    int i, j;
    int contador_de_numeros = 0;

    // --- Leitura dos Dados ---
    printf("Digite até %d números (ou digite 0 para terminar):\n", TAMANHO);
    for (i = 0; i < TAMANHO; i++) {
        printf("Digite um número: ");
        scanf("%d", &Tab[i]);

        // Se o usuário digitar 0, interrompe o laço
        if (Tab[i] == 0) {
            break;
        }
    }
    // A variável 'i' agora contém o número exato de elementos digitados
    contador_de_numeros = i;

    // --- Ordenação ---
    // Só chama a função se pelo menos um número foi digitado
    if (contador_de_numeros > 0) {
        ordena(Tab, contador_de_numeros);
    }

    // --- Impressão do Resultado ---
    printf("\n--- Números ordenados ---\n");
    for (j = 0; j < contador_de_numeros; j++) {
        printf("%d\n", Tab[j]);
    }

    // system("PAUSE"); // Funciona melhor no Windows. Em outros sistemas, pode ser removido.
    return 0;
}


/**
 * @brief Ordena uma matriz de inteiros usando o método Selection Sort.
 * @param lista A matriz a ser ordenada.
 * @param tamanho O número de elementos na matriz.
 */
void ordena(int lista[], int tamanho) {
    int i, j, temp;

    // Laço externo que avança a posição do elemento a ser ordenado
    for (i = 0; i < tamanho - 1; i++) {
        // Laço interno que busca por elementos menores no resto da lista
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
