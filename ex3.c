#include <stdio.h> <stdlib.h> <string.h>

void operacao_mat(char operacao, int x, int y);

int main (void) {

    char operacao;
    int x, y;

    printf("Informe +, -, * ou /: ");
    scanf("%c", &operacao);

    do {
        printf("Informe x e y: ");
        scanf("%d %d", &x, &y);
    } while ((x < 0) || (y < 0));

    operacao_mat(operacao, x, y);

    return 0;
}

void operacao_mat(char operacao, int x, int y) {
    
    int valor;
    switch (operacao) {
        case '+': valor = (x + y); break;
        case '-': 
            if (x > y) {
                valor = (x - y);
            }
            else {
                valor = (y - x);
            }
        break;
        case '*': valor = (x * y); break;
        case '/':
            if (x > y) {
                    valor = (x / y);
                }
                else {
                    valor = (y / x);
                }
            break;
    }
    printf("%d %c %d = %d", x, operacao, y, valor);
}