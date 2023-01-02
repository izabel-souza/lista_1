#include <stdio.h> <stdlib.h> <string.h>

void calculo_tempo(int n);

int main (void) {

    int n;
    do {
        printf("Informe segundos: ");
        scanf("%d", &n);
    } while (n < 0);

    calculo_tempo(n);

    return 0;
}

void calculo_tempo(int n) {
    int horas, minutos, segundos, resto;
    horas = n / 3600; 
    resto = horas % 3600;
    minutos =  resto / 60;
    segundos = minutos % 60;

    printf("%d = %d hora(s), %d minuto(s) e %d segundos(s)", n, horas, minutos, segundos);
}