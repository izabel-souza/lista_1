#include <stdio.h> <stdlib.h> <string.h>

void calculo_notas(int n);

int main (void) {

    int n;
    do {
        printf("Informe uma quantia de dinheiro: ");
        scanf("%d", &n);
    } while (n < 0);

    calculo_notas(n);

    return 0;
}

void calculo_notas(int n) {
    int valor = n;
    int notas_100 = 0, notas_50 = 0, notas_20 = 0, notas_10 = 0, notas_5 = 0, notas_2 = 0, notas_1 = 0;

    do {
        if (valor >= 100) {
            notas_100++;
            valor = valor % 100;
        }
        else if (valor >= 50) {
            notas_50++;
            valor = valor % 50;
        }
        else if (valor >= 20) {
            notas_20++;
            valor = valor % 20;
        }
        else if (valor >= 10) {
            notas_10++;
            valor = valor % 10;
        }
        else if (valor >= 5) {
            notas_5++;
            valor = valor % 5;
        }
        else if (valor >= 2) {
            notas_2++;
            valor = valor % 2;
        }
        else if (valor >= 1) {
            notas_1++;
            valor = valor % 1;
        }
    } while (valor > 0);

    printf("VALOR = %d\n%d NOTAS DE 100\n%d NOTAS DE 50\n%d NOTAS DE 20\n%d NOTAS DE 10\n%d NOTAS DE 5\n%d NOTAS DE 2\n%d NOTAS DE 1\n", n, notas_100, notas_50, notas_20, notas_10, notas_5, notas_2, notas_1);

}