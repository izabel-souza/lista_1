#include <stdio.h> <stdlib.h> <string.h> <math.h>

int arredondar_cima(float n);
int arrendondar_baixo(float n);

int main (void) {

    float n;
    int n_arredondado_cima, n_arredondado_baixo;
    printf("Informe um numero: ");
    scanf("%f", &n);

    n_arredondado_cima = arredondar_cima(n);
    n_arredondado_baixo = arrendondar_baixo(n);
    printf("%.1f arredondado para cima = %d\n", n, n_arredondado_cima);
    printf("%.1f arredondado para baixo = %d", n, n_arredondado_baixo);

    return 0;
}

int arredondar_cima(float n) {
    int x = ceil(n);
    return x;
}

int arrendondar_baixo(float n) {
    int x = floor(n);
    return x;
}