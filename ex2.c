#include <stdio.h> <stdlib.h> <string.h>

void maior_menor(int x, int y, int z);
void pares(int x, int y, int z);
void media(int x, int y, int z);

int main (void) {

    int x,y,z;
    do {
        printf("Informe x, y e z: ");
        scanf("%d %d %d", &x, &y, &z);
    } while ((x < 0) || (y < 0) || (z < 0));

    maior_menor(x, y, z);
    pares(x, y, z);
    media(x, y, z);

    return 0;
}

void maior_menor(int x, int y, int z) {
    int maior = x, menor =  x;
    if (x < y) {
        maior = y;
        if(z < x) {
            menor = z;
        }
    }
    else if (x < z) {
        maior = z;
        if (y < x) {
            menor = y;
        }
    }

    printf("Maior = %d\nMenor = %d\n", maior, menor);
}

void pares(int x, int y, int z) {
    if (x % 2 == 0) {
        printf("X é par\n");
    }
    if (y % 2 == 0) {
        printf("Y é par\n");
    }
     if (z % 2 == 0) {
        printf("Z é par\n");
    }
}

void media(int x, int y, int z) {
    int media = ((x + y + z)/3);
    printf("Media dos valores = %d", media);
}