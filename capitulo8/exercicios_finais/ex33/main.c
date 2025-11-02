#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    char mes_nome[15];
    char mes_abr[4];
    int dia;
    int mes;
}Mes;

Mes calendario[12] = {
    {"Janeiro", "JAN", 31, 1},
    {"Fevereiro", "FEV", 28, 2},
    {"Marco", "MAR", 31, 3},
    { "Abril", "ABR", 30, 4 },
    { "Maio", "MAI", 31, 5 },
    { "Junho", "JUN", 30, 6 },
    { "Julho", "JUL", 31, 7 },
    { "Agosto", "AGO", 31, 8 },
    { "Setembro", "SET", 30, 9 },
    { "Outubro", "OUT", 31, 10 },
    { "Novembro", "NOV", 30, 11 },
    { "Dezembro", "DEZ", 31, 12 }
};

int calcula_dias (int mes);

int verifica_nome (char mes[]);

int main() {
    char mes_resp[15];
    int total;

    printf("Informe o mes: ");
    scanf("%s", mes_resp);
    mes_resp[0] = toupper(mes_resp[0]);
    total = verifica_nome(mes_resp);

    if (total == -1) {
        printf("Digite um mes valido!\n");
        return 1;
    }

    printf("Total de dias ate esse mes: %d", total);
    return 0;
}

int calcula_dias (int mes) {
    int i, total_dias = 0;
    for (i = 0; i < mes; i++) {
        total_dias += calendario[i].dia;
    }
    return total_dias;
}

int verifica_nome (char mes[]) {
    int i, numero_mes = 0, encontrado = 0;
    for (i = 0; i < 12; i++) {
        if (strcmp(mes, calendario[i].mes_nome) == 0) {
            numero_mes = calendario[i].mes;
            encontrado = 1;
            break;
        }
    }

    if (encontrado == 0) {
        return -1;
    }

    return calcula_dias(numero_mes);
}