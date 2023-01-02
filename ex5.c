#include <stdio.h> <stdlib.h> <string.h>

void resultado_1();
void resultado_2();
void resultado_3();

int main (void) {

    resultado_1();
    resultado_2();
    resultado_3();

    return 0;
}

void resultado_1() {
    int a = 3, b = (a/2), c = (b/3.1);
    printf("%d\n", c);
}

void resultado_2() {
    float a = 3, b = (a/2), c = (b/3.1);
    printf("%1.f\n", c);
}

void resultado_3() {
    int a = 3, b = (a/2);
    float c = (b/3.1);
    printf("%1.f\n", c);
}