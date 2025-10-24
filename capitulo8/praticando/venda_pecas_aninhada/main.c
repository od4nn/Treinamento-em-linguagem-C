#include <stdio.h>

typedef struct {
    char mes[10];
    int dia;
    int ano;
}Data;

typedef struct {
    int vendas;
    float preco;
    Data data_venda;
}Venda;

float calcula_venda(Venda A, Venda B);

int main() {
    float total;
    Venda a = {30, 40.9, {"Dezembro", 29, 2009}};
    Venda b = {10, 46.9, {"Janeiro", 24, 2009}};

    total = calcula_venda(a, b);

    printf("Total: %.2f", total);

}

float calcula_venda(Venda A, Venda B) {
    float total;
    total = (A.vendas * A.preco) + (B.vendas * B.preco);
    return total;
}