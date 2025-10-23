#include <stdio.h>

int main() {
    typedef struct {
        int idade;
        char nome[15];
        double nota;
    }Aluno;

    Aluno pablo = {15, "Pablo", 8.0};
    Aluno marta = {30, "Marta", 9.0};
    Aluno Pedro = pablo;

    printf("Nome: %s\nNota: %.2f\nIdade: %d\n", pablo.nome, pablo.nota, pablo.idade);
    printf("Nome: %s\nNota: %.2f\nIdade: %d\n", marta.nome, marta.nota, marta.idade);
    printf("Nome: %s\nNota: %.2f\n", Pedro.nome, Pedro.nota);
}