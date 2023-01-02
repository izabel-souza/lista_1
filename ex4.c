#include <stdio.h> <stdlib.h> <string.h>

float media_calc(int x, int y, int z);
void situacao(float media);

int main (void) {

    int x, y, z;
    do {
        printf("Informe nota 1, nota 2 e nota 3: ");
        scanf("%d %d %d", &x, &y, &z);
    } while ((x < 0) || (y < 0) || (z < 0));

    float media_notas = media_calc(x, y, z);
    printf("A media das notas: %.2f\n", media_notas);
    situacao(media_notas);

    return 0;
}

float media_calc(int x, int y, int z) {
    float media = ((x + y + z)/3);
    return media;
}

void situacao(float media) {
    if (media < 4) { printf("Reprovado"); }
    else if ((media >= 4) && (media < 6)) { printf("VS"); }
    else { printf("Aprovado"); }
}