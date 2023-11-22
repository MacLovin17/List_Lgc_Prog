#include <stdio.h>
#include <math.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "portuguese");

    double resultado = pow(2, 64);

    printf("O número de grãos que o monge deve receber é igual:  %.0f grãos.\n", resultado);

    return 0;
}
