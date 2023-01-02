#include <stdio.h> <stdlib.h> <math.h>

int funcao_delta(int a, int b, int c);
void funcao_seggrau(int raiz, int a, int b);

int main (void) {

    int a, b, c, raiz_n;
    printf("Informe a, b e c: ");
    scanf("%d %d %d", &a, &b, &c);
    raiz_n = funcao_delta(a, b, c);
    funcao_seggrau(raiz_n, a, b);

    return 0;
}

int funcao_delta(int a, int b, int c) {
    int delta = ((b*b)-4*a*c);
    int raiz = sqrt(delta);
    return raiz;
}

void funcao_seggrau(int raiz, int a, int b) {

    int x1, x2;
    
    if (b < 0) {
        x1 = ((b + raiz)/(2*a));
        x2 = ((b - raiz)/(2*a));
    }
    else {
        x1 = ((-b + raiz)/(2*a));
        x2 = ((-b - raiz)/(2*a));
    }

    printf("x1 = %d\nx2 = %d", x1, x2);

}