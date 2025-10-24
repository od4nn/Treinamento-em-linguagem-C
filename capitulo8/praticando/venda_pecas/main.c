#include <stdio.h>

int main() {
    typedef struct {
        int pecas;
        float preco;
    }Venda;

    Venda a = {20, 75.6}, b = {22, 55.0}, total;
    total.pecas = a.pecas + b.pecas;
    total.preco = a.preco + b.preco;
    printf("%d\n%f", total.pecas, total.preco);
}