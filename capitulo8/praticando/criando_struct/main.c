#include <stdio.h>
#include <string.h>

int main() {
    typedef struct {
        int idade;
        char nome[15];
        double nota;
    }Aluno;

    Aluno pablo, marta, joao;

    pablo.idade = 15;
    strcpy(pablo.nome, "Pablo");
    pablo.nota = 8.0;

    printf("Nome: %s\nNota: %.2f\nIdade: %d", pablo.nome, pablo.nota, pablo.idade);
}