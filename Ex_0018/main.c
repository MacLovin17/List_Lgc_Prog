#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    float n = 0, DOIDO, x = 0;
    int y=0;
    printf("Digite um número:\n");
    scanf("%f", &n);

    for (int i = 0; i <= n; i++) {
        y++;
        DOIDO = (n - i) / pow(y, y);
        x += DOIDO;

        printf("%d : %f\n",i, DOIDO);
    }

    printf("Resultado é: %f\n", x);

    return 0;
}
