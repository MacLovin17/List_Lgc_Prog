#include <stdio.h>
#include <math.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "portuguese");

    double resultado = pow(2, 64);

    printf("O n�mero de gr�os que o monge deve receber � igual:  %.0f gr�os.\n", resultado);

    return 0;
}
