#include <stdio.h>

int main() {
    typedef enum {Jan = 1, Fev, Mar, Abr, Maio, Junh, Julh, Ago, Set, Outub, Novem, Dezem}Mes;

    Mes m1, m2, m3;

    m1 = Jan, m2 = Fev, m3 = Mar;
    printf("Marco eh o mes %d\n m1 + m2 = %d", m3, m1 + m2 );
    return 0;
}