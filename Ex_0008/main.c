#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int mdc(int a, int b) {
    if (b == 0) {
        return a;
    }
    return mdc(b, a % b);
}

int main() {
    setlocale(LC_ALL, "portuguese");

    int n1, n2, mmc;
    char cond = 's';

    while (cond == 's') {
        printf("Informe um número:\n");
        scanf("%d", &n1);

        printf("Informe outro número:\n");
        scanf("%d", &n2);


        mmc = (n1 * n2) / mdc(n1, n2);

        printf("O MMC de %d e %d é %d\n", n1, n2, mmc);

        printf("\nDeseja calcular outro MMC? (s) para sim, (n) para não.\n");
        scanf(" %c", &cond);
    }

    return 0;
}
